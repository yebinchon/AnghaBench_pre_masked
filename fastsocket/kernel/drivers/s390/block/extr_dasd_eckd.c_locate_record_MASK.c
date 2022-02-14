
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int dev_type; unsigned int trk_per_cyl; } ;
struct dasd_eckd_private {TYPE_3__ rdc_data; } ;
struct dasd_device {scalar_t__ private; } ;
struct ccw1 {int count; scalar_t__ cda; scalar_t__ flags; int cmd_code; } ;
struct TYPE_9__ {unsigned int record; int head; int cyl; } ;
struct TYPE_10__ {int head; int cyl; } ;
struct TYPE_7__ {int orientation; int operation; } ;
struct TYPE_6__ {int last_bytes_used; } ;
struct LO_eckd_data {int sector; int count; int length; TYPE_4__ search_arg; TYPE_5__ seek_addr; TYPE_2__ operation; TYPE_1__ auxiliary; } ;
typedef scalar_t__ __u32 ;



 int VAR_0 ;
 int FUNC_0 (int ,struct dasd_device*,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct LO_eckd_data*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct LO_eckd_data*,int ,int) ;
 int FUNC_4 (TYPE_5__*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_5(struct ccw1 *VAR_3, struct LO_eckd_data *VAR_4, unsigned int VAR_5,
       unsigned int VAR_6, int VAR_7, int VAR_8,
       struct dasd_device * VAR_9, int VAR_10)
{
 struct dasd_eckd_private *VAR_11;
 int VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = (struct dasd_eckd_private *) VAR_9->private;

 FUNC_0(VAR_2, VAR_9,
    "Locate: trk %d, rec %d, no_rec %d, cmd %d, reclen %d",
    VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);

 VAR_3->cmd_code = VAR_0;
 VAR_3->flags = 0;
 VAR_3->count = 16;
 VAR_3->cda = (__u32) FUNC_1(VAR_4);

 FUNC_3(VAR_4, 0, sizeof(struct LO_eckd_data));
 VAR_12 = 0;
 if (VAR_6) {
  switch (VAR_11->rdc_data.dev_type) {
  case 0x3390:
   VAR_13 = FUNC_2(VAR_10 + 6, 232);
   VAR_14 = 9 + FUNC_2(VAR_10 + 6 * (VAR_13 + 1), 34);
   VAR_12 = (49 + (VAR_6 - 1) * (10 + VAR_14)) / 8;
   break;
  case 0x3380:
   VAR_14 = 7 + FUNC_2(VAR_10 + 12, 32);
   VAR_12 = (39 + (VAR_6 - 1) * (8 + VAR_14)) / 7;
   break;
  }
 }
 VAR_4->sector = VAR_12;
 VAR_4->count = VAR_7;
 switch (VAR_8) {
 case 132:
  VAR_4->operation.orientation = 0x3;
  VAR_4->operation.operation = 0x03;
  break;
 case 140:
  VAR_4->operation.orientation = 0x3;
  VAR_4->operation.operation = 0x16;
  break;
 case 128:
  VAR_4->operation.orientation = 0x1;
  VAR_4->operation.operation = 0x03;
  VAR_4->count++;
  break;
 case 136:
  VAR_4->operation.orientation = 0x3;
  VAR_4->operation.operation = 0x16;
  VAR_4->count++;
  break;
 case 135:
 case 129:
 case 131:
 case 130:
  VAR_4->auxiliary.last_bytes_used = 0x1;
  VAR_4->length = VAR_10;
  VAR_4->operation.operation = 0x01;
  break;
 case 134:
 case 133:
  VAR_4->auxiliary.last_bytes_used = 0x1;
  VAR_4->length = VAR_10;
  VAR_4->operation.operation = 0x03;
  break;
 case 144:
 case 137:
 case 139:
 case 138:
  VAR_4->auxiliary.last_bytes_used = 0x1;
  VAR_4->length = VAR_10;
  VAR_4->operation.operation = 0x06;
  break;
 case 143:
 case 142:
  VAR_4->auxiliary.last_bytes_used = 0x1;
  VAR_4->length = VAR_10;
  VAR_4->operation.operation = 0x16;
  break;
 case 141:
  VAR_4->operation.operation = 0x06;
  break;
 case 145:
  VAR_4->length = VAR_10;
  VAR_4->auxiliary.last_bytes_used = 0x1;
  VAR_4->operation.operation = 0x0b;
  break;
 default:
  FUNC_0(VAR_1, VAR_9, "unknown locate record "
         "opcode 0x%x", VAR_8);
 }
 FUNC_4(&VAR_4->seek_addr,
   VAR_5 / VAR_11->rdc_data.trk_per_cyl,
   VAR_5 % VAR_11->rdc_data.trk_per_cyl);
 VAR_4->search_arg.cyl = VAR_4->seek_addr.cyl;
 VAR_4->search_arg.head = VAR_4->seek_addr.head;
 VAR_4->search_arg.record = VAR_6;
}
