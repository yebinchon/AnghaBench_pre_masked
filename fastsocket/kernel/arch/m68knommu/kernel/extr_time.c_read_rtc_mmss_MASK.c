
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 unsigned long FUNC_1 (unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_2(void)
{
 unsigned int VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;

 if (&FUNC_0)
  FUNC_0(&VAR_0, &VAR_1, &VAR_2, &VAR_3, &VAR_4, &VAR_5);
 else
  VAR_0 = VAR_1 = VAR_2 = VAR_3 = VAR_4 = VAR_5 = 0;

 if ((VAR_0 += 1900) < 1970)
  VAR_0 += 100;

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
