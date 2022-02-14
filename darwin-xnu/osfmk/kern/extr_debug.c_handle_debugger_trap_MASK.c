
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ kern_return_t ;
typedef scalar_t__ debugger_op ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned int,unsigned int,unsigned int,void*) ;
 scalar_t__ VAR_21 ;
 int * VAR_22 ;
 int * VAR_23 ;
 int VAR_24 ;
 int * VAR_25 ;
 scalar_t__ VAR_26 ;
 int * VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned int,unsigned int,unsigned int,void*) ;
 int VAR_29 ;
 int FUNC_11 (int ) ;
 unsigned int VAR_30 ;
 int VAR_31 ;

void
FUNC_12(unsigned int VAR_32, unsigned int VAR_33, unsigned int VAR_34, void *VAR_35)
{
 unsigned int VAR_36 = VAR_30;
 kern_return_t VAR_37;
 debugger_op VAR_38 = VAR_21;

 FUNC_0(0);

 FUNC_2();
 VAR_37 = FUNC_1(VAR_4);

 FUNC_0(1);






 if (VAR_37 != VAR_19) {
  VAR_3 = VAR_37;
  FUNC_4();
  return;
 }


 VAR_29 = VAR_0;






 if (VAR_2 == VAR_12) {

  VAR_21 = VAR_10;
 } else {

  if (VAR_21 == VAR_13 ||
   VAR_21 == VAR_11) {
   VAR_28 = VAR_16;
  }

  VAR_21 = VAR_2;


  if (VAR_27 == ((void*)0)) {
   VAR_27 = VAR_9;
   VAR_23 = VAR_5;
   VAR_25 = VAR_7;
   VAR_22 = VAR_1;
   VAR_24 = VAR_6;
  }

  VAR_26 = VAR_8;
 }





 VAR_2 = VAR_12;

 FUNC_0(2);

 FUNC_9(VAR_17);
 VAR_30 = 0;

 FUNC_0(3);

 if (VAR_21 == VAR_10) {
  FUNC_10(VAR_32, VAR_33, VAR_34, VAR_35);
 } else if (VAR_21 == VAR_15) {
  VAR_3 = FUNC_8();




 } else {
  FUNC_6(VAR_32, VAR_33, VAR_34, VAR_35);
 }

 FUNC_0(4);

 VAR_30 = VAR_36;
 FUNC_9(VAR_18);

 FUNC_0(5);

 if (VAR_21 != VAR_10) {
  VAR_27 = ((void*)0);
  VAR_23 = ((void*)0);
  VAR_25 = ((void*)0);
  VAR_26 = 0;
  VAR_22 = ((void*)0);
 }


 VAR_21 = VAR_38;

 FUNC_0(6);

 FUNC_3();

 FUNC_0(7);

 FUNC_4();

 FUNC_0(8);

 return;
}
