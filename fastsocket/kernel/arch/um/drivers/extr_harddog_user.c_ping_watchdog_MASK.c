
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int,char*,int) ;

int FUNC_2(int VAR_2)
{
 int VAR_3;
 char VAR_4 = '\n';

 VAR_3 = FUNC_1(VAR_2, &VAR_4, sizeof(VAR_4));
 if (VAR_3 != sizeof(VAR_4)) {
  FUNC_0("ping_watchdog - write failed, ret = %d, err = %d\n",
         VAR_3, VAR_1);
  if (VAR_3 < 0)
   return VAR_3;
  return -VAR_0;
 }
 return 1;

}
