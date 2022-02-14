
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_5, int VAR_6)
{
 int VAR_7;




        if (VAR_5 >= VAR_3) {
  return(VAR_1);
        }
        if (VAR_6 == VAR_2) {
  VAR_7 = VAR_0;
 } else {
  return(VAR_1);
 }


 FUNC_2();

 if (VAR_4[VAR_5].count == 0) {
  FUNC_3();
  return (0);
 }

 switch (VAR_5) {
 case 128:
  if (FUNC_0(VAR_5, VAR_7) == 0) {



   FUNC_1(VAR_5);
  }
  break;
 default:
  FUNC_1(VAR_5);
  break;
 }
 FUNC_3();

        return(0);
}
