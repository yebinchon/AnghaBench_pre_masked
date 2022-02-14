
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ sn_in_service_ivecs; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (unsigned int,void volatile*) ;
 int FUNC_4 (unsigned int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_4)
{
 u64 VAR_5, VAR_6;

 VAR_4 = VAR_4 & 0xff;
 VAR_5 = FUNC_0((u64*)FUNC_2(VAR_1));
 VAR_6 = VAR_5 & VAR_0;
 FUNC_1((u64*)FUNC_2(VAR_2), VAR_6);
 FUNC_3(VAR_4, (volatile void *)VAR_3->sn_in_service_ivecs);

 FUNC_4(VAR_4);
}
