
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned int u16 ;
struct TYPE_10__ {scalar_t__ operation; int nr_cyl; } ;
struct TYPE_8__ {int cu_type; unsigned int trk_per_cyl; } ;
struct dasd_eckd_private {int real_cyl; TYPE_5__ attrib; TYPE_3__ rdc_data; scalar_t__ uses_cdl; } ;
struct dasd_device {TYPE_2__* cdev; scalar_t__ private; } ;
struct ccw1 {int count; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
struct TYPE_9__ {scalar_t__ operation; int mode; } ;
struct TYPE_6__ {int perm; int auth; } ;
struct DE_eckd_data {int ga_extended; int end_ext; int beg_ext; TYPE_4__ attributes; TYPE_1__ mask; } ;
typedef scalar_t__ __u32 ;
struct TYPE_7__ {int dev; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct DE_eckd_data*) ;
 int FUNC_1 (struct ccw1*,struct DE_eckd_data*,struct dasd_device*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct DE_eckd_data*,int ,int) ;
 int FUNC_4 (int *,int,unsigned int) ;

__attribute__((used)) static int
FUNC_5(struct ccw1 *VAR_4, struct DE_eckd_data *VAR_5, unsigned int VAR_6,
       unsigned int VAR_7, int VAR_8, struct dasd_device *VAR_9)
{
 struct dasd_eckd_private *VAR_10;
 u32 VAR_11, VAR_12;
 u16 VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0;

 VAR_10 = (struct dasd_eckd_private *) VAR_9->private;

 VAR_4->cmd_code = VAR_1;
 VAR_4->flags = 0;
 VAR_4->count = 16;
 VAR_4->cda = (__u32) FUNC_0(VAR_5);

 FUNC_3(VAR_5, 0, sizeof(struct DE_eckd_data));
 switch (VAR_8) {
 case 140:
 case 136:
 case 144:
 case 137:
 case 143:
 case 142:
 case 139:
 case 138:
 case 141:
  VAR_5->mask.perm = 0x1;
  VAR_5->attributes.operation = VAR_10->attrib.operation;
  break;
 case 135:
 case 129:
 case 131:
 case 130:
  VAR_5->mask.perm = 0x02;
  VAR_5->attributes.operation = VAR_10->attrib.operation;
  VAR_16 = FUNC_1 (VAR_4, VAR_5, VAR_9);
  break;
 case 134:
 case 133:
  VAR_5->attributes.operation = VAR_0;
  VAR_16 = FUNC_1 (VAR_4, VAR_5, VAR_9);
  break;
 case 145:
 case 132:
 case 128:
  VAR_5->mask.perm = 0x3;
  VAR_5->mask.auth = 0x1;
  VAR_5->attributes.operation = VAR_0;
  VAR_16 = FUNC_1 (VAR_4, VAR_5, VAR_9);
  break;
 default:
  FUNC_2(&VAR_9->cdev->dev,
   "0x%x is not a known command\n", VAR_8);
  break;
 }

 VAR_5->attributes.mode = 0x3;

 if ((VAR_10->rdc_data.cu_type == 0x2105 ||
      VAR_10->rdc_data.cu_type == 0x2107 ||
      VAR_10->rdc_data.cu_type == 0x1750)
     && !(VAR_10->uses_cdl && VAR_6 < 2))
  VAR_5->ga_extended |= 0x40;

 VAR_13 = VAR_10->rdc_data.trk_per_cyl;
 VAR_11 = VAR_6 / VAR_13;
 VAR_14 = VAR_6 % VAR_13;
 VAR_12 = VAR_7 / VAR_13;
 VAR_15 = VAR_7 % VAR_13;


 if (VAR_5->attributes.operation == VAR_3 ||
     VAR_5->attributes.operation == VAR_2) {

  if (VAR_12 + VAR_10->attrib.nr_cyl < VAR_10->real_cyl)
   VAR_12 += VAR_10->attrib.nr_cyl;
  else
   VAR_12 = (VAR_10->real_cyl - 1);
 }

 FUNC_4(&VAR_5->beg_ext, VAR_11, VAR_14);
 FUNC_4(&VAR_5->end_ext, VAR_12, VAR_15);
 return VAR_16;
}
