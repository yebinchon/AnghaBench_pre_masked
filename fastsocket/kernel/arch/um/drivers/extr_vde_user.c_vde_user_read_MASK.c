
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VDECONN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void*,int,int ) ;

int FUNC_1(void *VAR_3, void *VAR_4, int VAR_5)
{
 VDECONN *VAR_6 = VAR_3;
 int VAR_7;

 if (VAR_6 == ((void*)0))
  return 0;

 VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5, 0);
 if (VAR_7 < 0) {
  if (VAR_2 == VAR_0)
   return 0;
  return -VAR_2;
 }
 else if (VAR_7 == 0)
  return -VAR_1;

 return VAR_7;
}
