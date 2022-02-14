
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uctrl_txn {int outbits; int* outbuf; int * inbuf; scalar_t__ inbits; int opcode; } ;
struct TYPE_2__ {int external_status; } ;
struct uctrl_driver {TYPE_1__ status; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct uctrl_driver*,struct uctrl_txn*) ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(struct uctrl_driver *VAR_2)
{
 struct uctrl_txn VAR_3;
 u8 VAR_4[2];
 int VAR_5, VAR_6;

 VAR_3.opcode = VAR_0;
 VAR_3.inbits = 0;
 VAR_3.outbits = 2;
 VAR_3.inbuf = ((void*)0);
 VAR_3.outbuf = VAR_4;

 FUNC_1(VAR_2, &VAR_3);

 FUNC_0(("bytes %x %x\n", (VAR_4[0] & 0xff), (VAR_4[1] & 0xff)));
 VAR_2->status.external_status =
  ((VAR_4[0] * 256) + (VAR_4[1]));
 FUNC_0(("ex is %x\n", VAR_2->status.external_status));
 VAR_6 = VAR_2->status.external_status;
 for (VAR_5 = 0; VAR_6 != 0; VAR_5++, VAR_6 >>= 1) {
  if (VAR_6 & 1) {
   FUNC_0(("%s%s", " ", VAR_1[VAR_5]));
  }
 }
 FUNC_0(("\n"));

}
