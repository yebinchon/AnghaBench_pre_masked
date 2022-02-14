
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct firedtv {scalar_t__ avc_data; } ;
struct TYPE_5__ {scalar_t__ fec_inner; int modulation; } ;
struct TYPE_4__ {int symbol_rate; int fec_inner; } ;
struct TYPE_6__ {TYPE_2__ qam; TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {int frequency; TYPE_3__ u; } ;
struct avc_command_frame {int* operand; int opcode; } ;


 int VAR_0 ;
 int FUNC_0 (struct firedtv*,int*) ;

__attribute__((used)) static int FUNC_1(struct firedtv *VAR_1,
          struct dvb_frontend_parameters *VAR_2)
{
 struct avc_command_frame *VAR_3 = (void *)VAR_1->avc_data;

 VAR_3->opcode = VAR_0;

 VAR_3->operand[0] = 0;
 VAR_3->operand[1] = 0xd2;
 VAR_3->operand[2] = 0x20;
 VAR_3->operand[3] = 0x00;
 VAR_3->operand[4] = 0x11;


 VAR_3->operand[5] = 0 << 7
   | 0 << 6
   | 0 << 5
   | 1 << 4
   | 1 << 3
   | 0 << 2
   | (VAR_2->u.qam.fec_inner != 134 ? 1 << 1 : 0)
   | (VAR_2->u.qam.modulation != 128 ? 1 << 0 : 0);


 VAR_3->operand[6] = 0 << 7
   | 0 << 0 ;

 VAR_3->operand[7] = 0x00;
 VAR_3->operand[8] = 0x00;
 VAR_3->operand[9] = 0x00;
 VAR_3->operand[10] = 0x00;

 VAR_3->operand[11] = (((VAR_2->frequency / 4000) >> 16) & 0xff) | (2 << 6);
 VAR_3->operand[12] = ((VAR_2->frequency / 4000) >> 8) & 0xff;
 VAR_3->operand[13] = (VAR_2->frequency / 4000) & 0xff;
 VAR_3->operand[14] = ((VAR_2->u.qpsk.symbol_rate / 1000) >> 12) & 0xff;
 VAR_3->operand[15] = ((VAR_2->u.qpsk.symbol_rate / 1000) >> 4) & 0xff;
 VAR_3->operand[16] = ((VAR_2->u.qpsk.symbol_rate / 1000) << 4) & 0xf0;
 VAR_3->operand[17] = 0x00;

 switch (VAR_2->u.qpsk.fec_inner) {
 case 141: VAR_3->operand[18] = 0x1; break;
 case 140: VAR_3->operand[18] = 0x2; break;
 case 139: VAR_3->operand[18] = 0x3; break;
 case 137: VAR_3->operand[18] = 0x4; break;
 case 136: VAR_3->operand[18] = 0x5; break;
 case 135: VAR_3->operand[18] = 0x6; break;
 case 138: VAR_3->operand[18] = 0x8; break;
 case 134:
 default: VAR_3->operand[18] = 0x0;
 }

 switch (VAR_2->u.qam.modulation) {
 case 132: VAR_3->operand[19] = 0x08; break;
 case 130: VAR_3->operand[19] = 0x10; break;
 case 129: VAR_3->operand[19] = 0x18; break;
 case 133: VAR_3->operand[19] = 0x20; break;
 case 131: VAR_3->operand[19] = 0x28; break;
 case 128:
 default: VAR_3->operand[19] = 0x00;
 }

 VAR_3->operand[20] = 0x00;
 VAR_3->operand[21] = 0x00;

 return 22 + FUNC_0(VAR_1, &VAR_3->operand[22]);
}
