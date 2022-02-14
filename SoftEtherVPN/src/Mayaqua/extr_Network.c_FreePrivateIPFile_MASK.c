
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int PRIVATE_IP_SUBNET ;
typedef int LIST ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;

void FUNC_4()
{
 if (VAR_0 != ((void*)0))
 {
  LIST *VAR_2 = VAR_0;
  UINT VAR_3;

  VAR_0 = ((void*)0);

  for (VAR_3 = 0;VAR_3 < FUNC_2(VAR_2);VAR_3++)
  {
   PRIVATE_IP_SUBNET *VAR_4 = FUNC_1(VAR_2, VAR_3);

   FUNC_0(VAR_4);
  }

  FUNC_3(VAR_2);
 }

 VAR_1 = 0;
}
