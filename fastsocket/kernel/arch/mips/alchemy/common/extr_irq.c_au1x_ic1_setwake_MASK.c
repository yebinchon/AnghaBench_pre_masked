
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = VAR_5 - VAR_2;
 unsigned long VAR_8, VAR_9;


 if ((VAR_5 < VAR_0) || (VAR_5 > VAR_1))
  return -VAR_3;

 FUNC_4(VAR_9);
 VAR_8 = FUNC_0(VAR_4);
 if (VAR_6)
  VAR_8 |= 1 << VAR_7;
 else
  VAR_8 &= ~(1 << VAR_7);
 FUNC_2(VAR_8, VAR_4);
 FUNC_1();
 FUNC_3(VAR_9);

 return 0;
}
