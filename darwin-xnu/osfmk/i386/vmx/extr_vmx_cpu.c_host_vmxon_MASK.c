
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 () ;
 scalar_t__ VAR_5 ;
 int FUNC_7 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_8(boolean_t VAR_9)
{
 int VAR_10;

 FUNC_1(0 == FUNC_2());

 if (!FUNC_7())
  return VAR_4;

 FUNC_3(VAR_6);

 if (VAR_5 || (VAR_9 && VAR_8)) {
  VAR_10 = VAR_2;
 } else {
  if (0 == VAR_8) {
   FUNC_6();
   VAR_5 = VAR_9;
   VAR_8 = 1;
   FUNC_5(VAR_1, VAR_0, VAR_7, ((void*)0));

  } else {
   VAR_8++;
  }

  FUNC_0("VMX use count: %d\n", VAR_8);
  VAR_10 = VAR_3;
 }

 FUNC_4(VAR_6);

 return VAR_10;
}
