
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_4 ;
 unsigned long FUNC_1 (int *) ;

__attribute__((used)) static unsigned long FUNC_2(void)
{
 unsigned long VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = (VAR_5 & VAR_2) >> VAR_3;
 if (VAR_6 == 0x1)
  return VAR_0 * 1024;
 else
  return FUNC_1(&VAR_4);
}
