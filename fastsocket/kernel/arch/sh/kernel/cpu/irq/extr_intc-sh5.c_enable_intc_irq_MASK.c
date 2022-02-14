
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;

 if ((VAR_5 <= VAR_2) && (VAR_4 == VAR_3))
  FUNC_1("Trying to use straight IRL0-3 with an encoding platform.\n");

 if (VAR_5 < 32) {
  VAR_6 = VAR_0;
  VAR_7 = 1 << VAR_5;
 } else {
  VAR_6 = VAR_1;
  VAR_7 = 1 << (VAR_5 - 32);
 }

 FUNC_0(VAR_7, VAR_6);
}
