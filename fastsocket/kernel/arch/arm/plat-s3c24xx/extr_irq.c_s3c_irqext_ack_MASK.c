
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(unsigned int VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;

 VAR_8 = 1UL << (VAR_6 - VAR_0);

 VAR_9 = FUNC_0(VAR_4);

 FUNC_1(VAR_8, VAR_5);

 VAR_7 = FUNC_0(VAR_5);
 VAR_7 &= ~VAR_9;



 if (VAR_6 <= VAR_2 ) {
  if ((VAR_7 & 0xf0) == 0)
   FUNC_2(VAR_1);
 } else {
  if ((VAR_7 >> 8) == 0)
   FUNC_2(VAR_3);
 }
}
