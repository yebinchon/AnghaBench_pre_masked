
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_0 (unsigned long,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static unsigned long FUNC_4(unsigned long VAR_8, unsigned long VAR_9)
{
 unsigned long VAR_10;

 if (!(FUNC_2() || FUNC_3()
  || FUNC_1()))
  return VAR_8;

 VAR_10 = VAR_8;
 if ((VAR_9 & VAR_0) != VAR_2) {

  if ((VAR_9 & VAR_0) == VAR_1) {
   VAR_10 *= 3;
  }
  if ( (VAR_9 & VAR_3) == VAR_4
     || ( (VAR_9 & VAR_3) == VAR_5
        && (VAR_9 & VAR_6) == VAR_7 ))
   VAR_10 = FUNC_0(VAR_10, 4);
  else
   VAR_10 = FUNC_0(VAR_10, 8);
 }

 return VAR_10;
}
