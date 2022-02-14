
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ in_port_t ;


 int FUNC_0 (int,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool
FUNC_5(in_port_t VAR_2, in_port_t VAR_3,
       int VAR_4)
{
 int VAR_5 = 0;
 bool VAR_6 = 1;

 for (in_port_t VAR_7 = VAR_2; VAR_6 && VAR_7 <= VAR_3; VAR_7++) {
  int VAR_8 = -1;
  int VAR_9 = -1;
  int VAR_10;

  VAR_8 = FUNC_3();
  FUNC_4(VAR_8);
  if (FUNC_2(VAR_8, VAR_7) != 0) {

   goto loop_done;
  }
  VAR_9 = FUNC_3();
  VAR_10 = FUNC_2(VAR_9, VAR_7);
  VAR_1;
  VAR_0;
  FUNC_0(VAR_10 != 0, "socket %d bind %d", VAR_9, VAR_7);





  if (FUNC_2(VAR_9, VAR_7 + 1) == 0) {
   VAR_5++;
   if (VAR_5 >= VAR_4) {
    break;
   }
  }
 loop_done:
  if (VAR_8 >= 0) {
   FUNC_1(VAR_8);
  }
  if (VAR_9 >= 0) {
   FUNC_1(VAR_9);
  }
 }
 FUNC_0(VAR_5 == VAR_4,
        "number of successful binds %d (out of %d)",
        VAR_5, VAR_4);
 return (VAR_6);
}
