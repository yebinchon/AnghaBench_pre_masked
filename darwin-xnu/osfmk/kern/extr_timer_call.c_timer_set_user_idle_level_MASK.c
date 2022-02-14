
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;

kern_return_t FUNC_1(int VAR_5) {
 boolean_t VAR_6 = VAR_0;

 if ((VAR_5 < 0) || (VAR_5 > 128))
  return VAR_1;

 if (VAR_5 < VAR_4) {
  VAR_6 = VAR_3;
 }

 VAR_4 = VAR_5;

 if (VAR_6)
  FUNC_0();

 return VAR_2;
}
