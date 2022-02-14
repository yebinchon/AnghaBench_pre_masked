
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {scalar_t__ (* GetPC ) (TYPE_1__*) ;} ;
struct TYPE_7__ {scalar_t__ cycles; } ;
typedef TYPE_1__ SH2_struct ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

void FUNC_3(SH2_struct *VAR_1)
{
   if (VAR_0)
   {
      u32 VAR_2 = VAR_0->GetPC(VAR_1);


      FUNC_0(VAR_1, VAR_1->cycles+1);



      if (VAR_2 == VAR_0->GetPC(VAR_1))
         FUNC_0(VAR_1, VAR_1->cycles+1);
   }
}
