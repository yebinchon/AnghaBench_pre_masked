
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int personality; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_1__* VAR_4 ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_5)
{
 unsigned int VAR_6 = 0;

 if ((VAR_4->flags & VAR_2) &&
  !(VAR_4->personality & VAR_0)) {
  VAR_6 = FUNC_1() & VAR_3;
  VAR_6 <<= VAR_1;
 }



 return FUNC_0(VAR_5) - VAR_6;

}
