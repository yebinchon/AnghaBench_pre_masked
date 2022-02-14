
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned int u16 ;
struct TYPE_12__ {scalar_t__ operation; int nr_cyl; } ;
struct TYPE_13__ {int cu_type; unsigned int trk_per_cyl; } ;
struct TYPE_9__ {scalar_t__ type; } ;
struct dasd_eckd_private {int real_cyl; TYPE_5__ attrib; TYPE_6__ rdc_data; scalar_t__ uses_cdl; TYPE_2__ uid; TYPE_1__* ned; } ;
struct dasd_device {scalar_t__ private; } ;
struct ccw1 {int count; void* cda; scalar_t__ flags; int cmd_code; } ;
struct TYPE_10__ {int define_extent; int verify_base; int hyper_pav; } ;
struct LRE_eckd_data {int dummy; } ;
struct TYPE_14__ {scalar_t__ operation; int mode; } ;
struct TYPE_11__ {int perm; int auth; } ;
struct DE_eckd_data {unsigned int blk_size; int ga_extended; int end_ext; int beg_ext; TYPE_7__ attributes; TYPE_4__ mask; } ;
struct PFX_eckd_data {unsigned char format; TYPE_3__ validity; int base_lss; int base_address; struct LRE_eckd_data locate_record; struct DE_eckd_data define_extent; } ;
typedef void* __u32 ;
struct TYPE_8__ {int ID; int unit_addr; } ;


 int FUNC_0 () ;
 void* VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,struct dasd_device*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (struct PFX_eckd_data*) ;
 int FUNC_3 (struct PFX_eckd_data*,struct dasd_device*) ;
 int FUNC_4 (struct LRE_eckd_data*,unsigned int,unsigned int,int,int,struct dasd_device*,unsigned int,unsigned int) ;
 int FUNC_5 (struct PFX_eckd_data*,int ,int) ;
 int FUNC_6 (int *,int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct ccw1 *VAR_8, struct PFX_eckd_data *VAR_9,
        unsigned int VAR_10, unsigned int VAR_11, int VAR_12,
        struct dasd_device *VAR_13, struct dasd_device *VAR_14,
        unsigned char VAR_15, unsigned int VAR_16, int VAR_17,
        unsigned int VAR_18, unsigned int VAR_19)
{
 struct dasd_eckd_private *VAR_20, *VAR_21;
 struct DE_eckd_data *VAR_22;
 struct LRE_eckd_data *VAR_23;
 u32 VAR_24, VAR_25;
 u16 VAR_26, VAR_27, VAR_28;
 int VAR_29 = 0;

 VAR_20 = (struct dasd_eckd_private *) VAR_13->private;
 VAR_21 = (struct dasd_eckd_private *) VAR_14->private;
 VAR_22 = &VAR_9->define_extent;
 VAR_23 = &VAR_9->locate_record;

 VAR_8->cmd_code = VAR_1;
 VAR_8->flags = 0;
 if (VAR_12 == 134) {
  VAR_8->count = sizeof(*VAR_9) + 2;
  VAR_8->cda = (__u32) FUNC_2(VAR_9);
  FUNC_5(VAR_9, 0, sizeof(*VAR_9) + 2);
 } else {
  VAR_8->count = sizeof(*VAR_9);
  VAR_8->cda = (__u32) FUNC_2(VAR_9);
  FUNC_5(VAR_9, 0, sizeof(*VAR_9));
 }


 if (VAR_15 > 1) {
  FUNC_1(VAR_4, VAR_13,
         "PFX LRE unknown format 0x%x", VAR_15);
  FUNC_0();
  return -VAR_5;
 }
 VAR_9->format = VAR_15;
 VAR_9->base_address = VAR_20->ned->unit_addr;
 VAR_9->base_lss = VAR_20->ned->ID;
 VAR_9->validity.define_extent = 1;


 if (VAR_21->uid.type != VAR_6) {
  VAR_9->validity.verify_base = 1;
  if (VAR_21->uid.type == VAR_7)
   VAR_9->validity.hyper_pav = 1;
 }


 switch (VAR_12) {
 case 144:
 case 140:
 case 148:
 case 141:
 case 147:
 case 146:
 case 143:
 case 142:
 case 145:
  VAR_22->mask.perm = 0x1;
  VAR_22->attributes.operation = VAR_20->attrib.operation;
  break;
 case 139:
 case 138:
  VAR_22->mask.perm = 0x1;
  VAR_22->attributes.operation = VAR_20->attrib.operation;
  VAR_22->blk_size = 0;
  break;
 case 137:
 case 130:
 case 132:
 case 131:
  VAR_22->mask.perm = 0x02;
  VAR_22->attributes.operation = VAR_20->attrib.operation;
  VAR_29 = FUNC_3(VAR_9, VAR_13);
  break;
 case 136:
 case 135:
  VAR_22->attributes.operation = VAR_0;
  VAR_29 = FUNC_3(VAR_9, VAR_13);
  break;
 case 149:
 case 133:
 case 129:
  VAR_22->mask.perm = 0x3;
  VAR_22->mask.auth = 0x1;
  VAR_22->attributes.operation = VAR_0;
  VAR_29 = FUNC_3(VAR_9, VAR_13);
  break;
 case 134:
  VAR_22->mask.perm = 0x03;
  VAR_22->attributes.operation = VAR_20->attrib.operation;
  VAR_22->blk_size = 0;
  break;
 case 128:
  VAR_22->mask.perm = 0x02;
  VAR_22->attributes.operation = VAR_20->attrib.operation;
  VAR_22->blk_size = VAR_18;
  VAR_29 = FUNC_3(VAR_9, VAR_13);
  break;
 default:
  FUNC_1(VAR_4, VAR_13,
       "PFX LRE unknown opcode 0x%x", VAR_12);
  FUNC_0();
  return -VAR_5;
 }

 VAR_22->attributes.mode = 0x3;

 if ((VAR_20->rdc_data.cu_type == 0x2105 ||
      VAR_20->rdc_data.cu_type == 0x2107 ||
      VAR_20->rdc_data.cu_type == 0x1750)
     && !(VAR_20->uses_cdl && VAR_10 < 2))
  VAR_22->ga_extended |= 0x40;

 VAR_26 = VAR_20->rdc_data.trk_per_cyl;
 VAR_24 = VAR_10 / VAR_26;
 VAR_27 = VAR_10 % VAR_26;
 VAR_25 = VAR_11 / VAR_26;
 VAR_28 = VAR_11 % VAR_26;


 if (VAR_22->attributes.operation == VAR_3 ||
     VAR_22->attributes.operation == VAR_2) {

  if (VAR_25 + VAR_20->attrib.nr_cyl < VAR_20->real_cyl)
   VAR_25 += VAR_20->attrib.nr_cyl;
  else
   VAR_25 = (VAR_20->real_cyl - 1);
 }

 FUNC_6(&VAR_22->beg_ext, VAR_24, VAR_27);
 FUNC_6(&VAR_22->end_ext, VAR_25, VAR_28);

 if (VAR_15 == 1) {
  FUNC_4(VAR_23, VAR_10, VAR_16, VAR_17, VAR_12,
         VAR_13, VAR_18, VAR_19);
 }

 return VAR_29;
}
