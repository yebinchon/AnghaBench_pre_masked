
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zone_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void *
FUNC_5(int VAR_4)
{
 zone_t VAR_5;
 void *VAR_6;
 boolean_t VAR_7;

 VAR_5 = FUNC_0(VAR_4);
 VAR_7 = FUNC_2(VAR_0);

 VAR_6 = FUNC_4(VAR_5);

 if (VAR_7 == VAR_1)
  FUNC_2(VAR_1);

 if (VAR_6 == ((void*)0)) {

  VAR_3++;

  VAR_6 = FUNC_1(VAR_4);

  if (VAR_6 == ((void*)0)) {

   VAR_2++;

   if (VAR_7 == VAR_0)
    FUNC_2(VAR_1);

   VAR_6 = FUNC_3(VAR_5);

   if (VAR_7 == VAR_0)
    FUNC_2(VAR_0);
  }
 }
 return (VAR_6);
}
