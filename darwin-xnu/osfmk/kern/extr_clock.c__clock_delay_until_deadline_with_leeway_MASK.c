
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int event_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;

void
FUNC_7(
 uint64_t VAR_5,
 uint64_t VAR_6,
 uint64_t VAR_7)
{

 if (VAR_5 == 0)
  return;

 if ( FUNC_4(VAR_5) ||
   FUNC_2() != 0 ||
   FUNC_5() == VAR_0 ) {
  FUNC_3(VAR_5, VAR_6);
 } else {





  if (VAR_7) {
   FUNC_1((event_t)VAR_4, VAR_2, VAR_3, VAR_6, VAR_7);
  } else {
   FUNC_0((event_t)VAR_4, VAR_2, VAR_6);
  }

  FUNC_6(VAR_1);
 }
}
