
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int (* SetGPR ) (int *,int,int ) ;int (* SetPC ) (int *,int ) ;scalar_t__ (* GetVBR ) (int *) ;} ;
typedef int SH2_struct ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int ) ;

void FUNC_4(SH2_struct *VAR_1) {
   u32 VAR_2 = VAR_0->GetVBR(VAR_1);
   VAR_0->SetPC(VAR_1, FUNC_0(VAR_2));
   VAR_0->SetGPR(VAR_1, 15, FUNC_0(VAR_2+4));
}
