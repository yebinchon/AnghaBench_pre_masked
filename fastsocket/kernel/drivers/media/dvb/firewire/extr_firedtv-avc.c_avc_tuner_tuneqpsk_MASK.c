
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ delivery_system; int modulation; int rolloff; int pilot; } ;
struct TYPE_8__ {TYPE_3__ dtv_property_cache; } ;
struct firedtv {scalar_t__ type; int voltage; int tone; TYPE_4__ fe; scalar_t__ avc_data; } ;
struct TYPE_5__ {int symbol_rate; int fec_inner; } ;
struct TYPE_6__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {int frequency; TYPE_2__ u; } ;
struct avc_command_frame {int* operand; int opcode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_0(struct firedtv *VAR_10,
         struct dvb_frontend_parameters *VAR_11)
{
 struct avc_command_frame *VAR_12 = (void *)VAR_10->avc_data;

 VAR_12->opcode = VAR_0;

 VAR_12->operand[0] = VAR_4;
 VAR_12->operand[1] = VAR_5;
 VAR_12->operand[2] = VAR_6;
 if (VAR_10->type == VAR_1)
  VAR_12->operand[3] = VAR_8;
 else
  VAR_12->operand[3] = VAR_7;

 VAR_12->operand[4] = (VAR_11->frequency >> 24) & 0xff;
 VAR_12->operand[5] = (VAR_11->frequency >> 16) & 0xff;
 VAR_12->operand[6] = (VAR_11->frequency >> 8) & 0xff;
 VAR_12->operand[7] = VAR_11->frequency & 0xff;

 VAR_12->operand[8] = ((VAR_11->u.qpsk.symbol_rate / 1000) >> 8) & 0xff;
 VAR_12->operand[9] = (VAR_11->u.qpsk.symbol_rate / 1000) & 0xff;

 switch (VAR_11->u.qpsk.fec_inner) {
 case 145: VAR_12->operand[10] = 0x1; break;
 case 144: VAR_12->operand[10] = 0x2; break;
 case 143: VAR_12->operand[10] = 0x3; break;
 case 141: VAR_12->operand[10] = 0x4; break;
 case 140: VAR_12->operand[10] = 0x5; break;
 case 142:
 case 139:
 case 138:
 default: VAR_12->operand[10] = 0x0;
 }

 if (VAR_10->voltage == 0xff)
  VAR_12->operand[11] = 0xff;
 else if (VAR_10->voltage == VAR_3)
  VAR_12->operand[11] = 0;
 else
  VAR_12->operand[11] = 1;

 if (VAR_10->tone == 0xff)
  VAR_12->operand[12] = 0xff;
 else if (VAR_10->tone == VAR_2)
  VAR_12->operand[12] = 1;
 else
  VAR_12->operand[12] = 0;

 if (VAR_10->type == VAR_1) {
  if (VAR_10->fe.dtv_property_cache.delivery_system == VAR_9) {
   switch (VAR_10->fe.dtv_property_cache.modulation) {
   case 133: VAR_12->operand[13] = 0x1; break;
   case 132: VAR_12->operand[13] = 0x2; break;
   case 134: VAR_12->operand[13] = 0x3; break;
   default: VAR_12->operand[13] = 0x2; break;
   }
   switch (VAR_10->fe.dtv_property_cache.rolloff) {
   case 128: VAR_12->operand[14] = 0x2; break;
   case 129: VAR_12->operand[14] = 0x2; break;
   case 131: VAR_12->operand[14] = 0x0; break;
   case 130: VAR_12->operand[14] = 0x1; break;

   }
   switch (VAR_10->fe.dtv_property_cache.pilot) {
   case 137: VAR_12->operand[15] = 0x0; break;
   case 136: VAR_12->operand[15] = 0x0; break;
   case 135: VAR_12->operand[15] = 0x1; break;
   }
  } else {
   VAR_12->operand[13] = 0x1;
   VAR_12->operand[14] = 0xff;
   VAR_12->operand[15] = 0xff;
  }
  return 16;
 } else {
  return 13;
 }
}
