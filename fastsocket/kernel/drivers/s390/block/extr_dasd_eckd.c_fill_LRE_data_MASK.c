
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dev_type; unsigned int trk_per_cyl; } ;
struct dasd_eckd_private {TYPE_2__ rdc_data; } ;
struct dasd_device {scalar_t__ private; } ;
struct TYPE_6__ {unsigned int record; int head; int cyl; } ;
struct TYPE_10__ {int head; int cyl; } ;
struct TYPE_8__ {int orientation; int operation; } ;
struct TYPE_9__ {int length_valid; } ;
struct LRE_eckd_data {int sector; int count; unsigned int length; int extended_operation; int extended_parameter_length; int* extended_parameter; TYPE_1__ search_arg; TYPE_5__ seek_addr; TYPE_3__ operation; TYPE_4__ auxiliary; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,struct dasd_device*,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (struct LRE_eckd_data*,int ,int) ;
 int FUNC_4 (TYPE_5__*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct LRE_eckd_data *VAR_1, unsigned int VAR_2,
     unsigned int VAR_3, int VAR_4, int VAR_5,
     struct dasd_device *VAR_6, unsigned int VAR_7,
     unsigned int VAR_8)
{
 struct dasd_eckd_private *VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = (struct dasd_eckd_private *) VAR_6->private;

 FUNC_3(VAR_1, 0, sizeof(*VAR_1));
 VAR_10 = 0;
 if (VAR_3) {
  switch (VAR_9->rdc_data.dev_type) {
  case 0x3390:
   VAR_11 = FUNC_2(VAR_7 + 6, 232);
   VAR_12 = 9 + FUNC_2(VAR_7 + 6 * (VAR_11 + 1), 34);
   VAR_10 = (49 + (VAR_3 - 1) * (10 + VAR_12)) / 8;
   break;
  case 0x3380:
   VAR_12 = 7 + FUNC_2(VAR_7 + 12, 32);
   VAR_10 = (39 + (VAR_3 - 1) * (8 + VAR_12)) / 7;
   break;
  }
 }
 VAR_1->sector = VAR_10;




 VAR_1->count = VAR_4;
 switch (VAR_5) {
 case 133:
  VAR_1->operation.orientation = 0x3;
  VAR_1->operation.operation = 0x03;
  break;
 case 144:
  VAR_1->operation.orientation = 0x3;
  VAR_1->operation.operation = 0x16;
  break;
 case 129:
  VAR_1->operation.orientation = 0x1;
  VAR_1->operation.operation = 0x03;
  VAR_1->count++;
  break;
 case 140:
  VAR_1->operation.orientation = 0x3;
  VAR_1->operation.operation = 0x16;
  VAR_1->count++;
  break;
 case 137:
 case 130:
 case 132:
 case 131:
  VAR_1->auxiliary.length_valid = 0x1;
  VAR_1->length = VAR_7;
  VAR_1->operation.operation = 0x01;
  break;
 case 136:
 case 135:
  VAR_1->auxiliary.length_valid = 0x1;
  VAR_1->length = VAR_7;
  VAR_1->operation.operation = 0x03;
  break;
 case 134:
  VAR_1->operation.orientation = 0x0;
  VAR_1->operation.operation = 0x3F;
  VAR_1->extended_operation = 0x11;
  VAR_1->length = 0;
  VAR_1->extended_parameter_length = 0x02;
  if (VAR_1->count > 8) {
   VAR_1->extended_parameter[0] = 0xFF;
   VAR_1->extended_parameter[1] = 0xFF;
   VAR_1->extended_parameter[1] <<= (16 - VAR_4);
  } else {
   VAR_1->extended_parameter[0] = 0xFF;
   VAR_1->extended_parameter[0] <<= (8 - VAR_4);
   VAR_1->extended_parameter[1] = 0x00;
  }
  VAR_1->sector = 0xFF;
  break;
 case 128:
  VAR_1->auxiliary.length_valid = 0x1;
  VAR_1->length = VAR_7;
  VAR_1->operation.operation = 0x3F;
  VAR_1->extended_operation = 0x23;
  break;
 case 148:
 case 141:
 case 143:
 case 142:
  VAR_1->auxiliary.length_valid = 0x1;
  VAR_1->length = VAR_7;
  VAR_1->operation.operation = 0x06;
  break;
 case 147:
 case 146:
  VAR_1->auxiliary.length_valid = 0x1;
  VAR_1->length = VAR_7;
  VAR_1->operation.operation = 0x16;
  break;
 case 145:
  VAR_1->operation.operation = 0x06;
  break;
 case 139:
  VAR_1->operation.orientation = 0x1;
  VAR_1->operation.operation = 0x0C;
  VAR_1->extended_parameter_length = 0;
  VAR_1->sector = 0xFF;
  break;
 case 138:
  VAR_1->auxiliary.length_valid = 0x1;
  VAR_1->length = VAR_8;
  VAR_1->operation.operation = 0x0C;
  break;
 case 149:
  VAR_1->length = VAR_7;
  VAR_1->auxiliary.length_valid = 0x1;
  VAR_1->operation.operation = 0x0b;
  break;
 default:
  FUNC_1(VAR_0, VAR_6,
       "fill LRE unknown opcode 0x%x", VAR_5);
  FUNC_0();
 }
 FUNC_4(&VAR_1->seek_addr,
   VAR_2 / VAR_9->rdc_data.trk_per_cyl,
   VAR_2 % VAR_9->rdc_data.trk_per_cyl);
 VAR_1->search_arg.cyl = VAR_1->seek_addr.cyl;
 VAR_1->search_arg.head = VAR_1->seek_addr.head;
 VAR_1->search_arg.record = VAR_3;
}
