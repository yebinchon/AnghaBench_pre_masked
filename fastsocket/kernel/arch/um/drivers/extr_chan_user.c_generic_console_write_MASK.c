
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_oflag; } ;
typedef int sigset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char const*,int,int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *,int *) ;
 int FUNC_6 (int,struct termios*) ;
 int FUNC_7 (int,int ,struct termios*) ;

int FUNC_8(int VAR_6, const char *VAR_7, int VAR_8)
{
 sigset_t VAR_9, VAR_10;
 struct termios VAR_11, VAR_12;
 int VAR_13;

 if (FUNC_2(VAR_6)) {
  FUNC_4(&VAR_10);
  FUNC_3(&VAR_10, VAR_1);
  if (FUNC_5(VAR_2, &VAR_10, &VAR_9))
   goto error;

  FUNC_0(VAR_13 = FUNC_6(VAR_6, &VAR_11));
  if (VAR_13)
   goto error;
  VAR_12 = VAR_11;





  VAR_12.c_oflag |= VAR_0;
  FUNC_0(VAR_13 = FUNC_7(VAR_6, VAR_4, &VAR_12));
  if (VAR_13)
   goto error;
 }
 VAR_13 = FUNC_1(VAR_6, VAR_7, VAR_8, ((void*)0));




 if (FUNC_2(VAR_6)) {
  FUNC_0(FUNC_7(VAR_6, VAR_4, &VAR_11));
  FUNC_5(VAR_3, &VAR_9, ((void*)0));
 }

 return VAR_13;
error:
 return -VAR_5;
}
