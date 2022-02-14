
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int ,int ,void*) ;
 int FUNC_3 (int ,int,int) ;

int
FUNC_4(pid_t VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;

 if ((VAR_6 <= 0) || (VAR_7 <= 0)) {
  VAR_4 = VAR_2;
  return (-1);
 }
 (void)FUNC_1(VAR_5, &VAR_8, &VAR_9);
 if (VAR_8 || VAR_9)
 {




  VAR_4 = VAR_1;
  return (-1);
 }

 if ((VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7)) != 0) {

  return (VAR_10);
 }

 if ((VAR_10 = FUNC_2(VAR_5, VAR_3, (void *)(uintptr_t)VAR_0)) != 0) {

  (void)FUNC_0(VAR_5);
 }

 return (VAR_10);
}
