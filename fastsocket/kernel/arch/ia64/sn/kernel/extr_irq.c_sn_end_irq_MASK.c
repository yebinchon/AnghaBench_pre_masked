
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ sn_in_service_ivecs; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,void volatile*) ;
 int FUNC_3 (unsigned int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int ,int,int ,int ) ;
 int FUNC_5 () ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_6)
{
 int VAR_7;
 u64 VAR_8;

 VAR_7 = VAR_6 & 0xff;
 if (VAR_7 == VAR_1) {
  VAR_8 = FUNC_0((u64*)FUNC_1 (VAR_2));




  if (VAR_8 & VAR_3) {
   FUNC_4(FUNC_5(), VAR_1,
       VAR_0, 0);
  }
 }
 FUNC_2(VAR_7, (volatile void *)VAR_4->sn_in_service_ivecs);
 if (VAR_5)
  FUNC_3(VAR_6);
}
