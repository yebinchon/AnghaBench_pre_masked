
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long,int ) ;
 unsigned int FUNC_1 (int *,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (unsigned int,int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(unsigned long VAR_7, unsigned long VAR_8,
      unsigned long VAR_9, int *VAR_10)
{
 unsigned int VAR_11 = *VAR_10;

 if (FUNC_6(VAR_11 == VAR_3))
  VAR_11 = FUNC_1(&VAR_6, VAR_1);

repeat:
 if (FUNC_6(VAR_11 > VAR_1))
  return -VAR_0;

 if (FUNC_5(VAR_11, &VAR_6)) {
  VAR_11 = FUNC_1(&VAR_6, VAR_1);
  goto repeat;
 }

 FUNC_0(VAR_7 | VAR_4, FUNC_3(VAR_11));
 FUNC_0(VAR_8 | VAR_9 | VAR_4, FUNC_4(VAR_11));

 *VAR_10 = VAR_11;

 return 0;
}
