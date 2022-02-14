
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,void*,int,int ,struct sockaddr*,int) ;

int FUNC_2(int VAR_3, void *VAR_4, int VAR_5, void *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, 0, (struct sockaddr *) VAR_6,
          VAR_7));
 if (VAR_8 < 0) {
  if (VAR_2 == VAR_0)
   return 0;
  return -VAR_2;
 }
 else if (VAR_8 == 0)
  return -VAR_1;
 return VAR_8;
}
