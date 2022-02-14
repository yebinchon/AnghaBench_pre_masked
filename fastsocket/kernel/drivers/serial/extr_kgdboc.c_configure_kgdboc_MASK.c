
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_driver {int dummy; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 struct tty_driver* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__*) ;
 struct tty_driver* FUNC_4 (scalar_t__*,int*) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct tty_driver *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_1);
 if (VAR_8 || !FUNC_3(VAR_1) || FUNC_0(VAR_1[0]))
  goto noconfig;

 VAR_8 = -VAR_0;

 VAR_6 = FUNC_4(VAR_1, &VAR_7);
 if (!VAR_6)
  goto noconfig;

 VAR_3 = VAR_6;
 VAR_4 = VAR_7;

 VAR_8 = FUNC_1(&VAR_5);
 if (VAR_8)
  goto noconfig;

 VAR_2 = 1;

 return 0;

noconfig:
 VAR_1[0] = 0;
 VAR_2 = 0;

 return VAR_8;
}
