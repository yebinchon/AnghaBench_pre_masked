
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*) ;
 size_t FUNC_1 (void*) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (void*,int) ;
 size_t FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,void*,size_t) ;

int FUNC_7(void *VAR_1, void *VAR_2, int VAR_3)
{
 size_t VAR_4, VAR_5;
 char *VAR_6, *VAR_7;

 FUNC_0(VAR_1);

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = FUNC_4(VAR_1);

 if ((VAR_4 + VAR_5) > VAR_3)
  return -VAR_0;

 VAR_6 = (char *)VAR_1 + FUNC_5(VAR_1) - VAR_5;
 VAR_7 = (char *)VAR_2 + VAR_3 - VAR_5;



 if (VAR_2 <= VAR_1) {
  FUNC_6(VAR_2, VAR_1, VAR_4);
  FUNC_6(VAR_7, VAR_6, VAR_5);
 } else {
  FUNC_6(VAR_7, VAR_6, VAR_5);
  FUNC_6(VAR_2, VAR_1, VAR_4);
 }

 FUNC_2(VAR_2, VAR_3);
 FUNC_3(VAR_2, VAR_3);

 return 0;
}
