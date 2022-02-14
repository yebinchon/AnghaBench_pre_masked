
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frg; scalar_t__ csum; scalar_t__ v6; scalar_t__ v4; scalar_t__ udp; scalar_t__ tcp; int cnc; } ;
union Vmxnet3_GenericDesc {TYPE_1__ rcd; int * dword; } ;
struct vmxnet3_adapter {scalar_t__ rxcsum; } ;
struct sk_buff {int ip_summed; int csum; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_4(struct vmxnet3_adapter *VAR_3,
  struct sk_buff *VAR_4,
  union Vmxnet3_GenericDesc *VAR_5)
{
 if (!VAR_5->rcd.cnc && VAR_3->rxcsum) {

  if ((FUNC_2(VAR_5->dword[3]) & VAR_2) ==
       VAR_2) {
   VAR_4->ip_summed = VAR_1;
   FUNC_0(!(VAR_5->rcd.tcp || VAR_5->rcd.udp));
   FUNC_0(!(VAR_5->rcd.v4 || VAR_5->rcd.v6));
   FUNC_0(VAR_5->rcd.frg);
  } else {
   if (VAR_5->rcd.csum) {
    VAR_4->csum = FUNC_1(VAR_5->rcd.csum);
    VAR_4->ip_summed = VAR_0;
   } else {
    FUNC_3(VAR_4);
   }
  }
 } else {
  FUNC_3(VAR_4);
 }
}
