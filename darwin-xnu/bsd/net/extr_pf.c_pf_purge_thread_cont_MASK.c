
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int* timeout; } ;
struct TYPE_3__ {int states; int running; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 () ;
 int VAR_5 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int * VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_9 ;
 int FUNC_14 (int ,int ,char*,int,int (*) (int)) ;

__attribute__((used)) static int
FUNC_15(int VAR_10)
{
#pragma unused(err)
 static u_int32_t VAR_11 = 0;
 int VAR_12 = 1;






 FUNC_7();

 FUNC_6(VAR_5);
 FUNC_3(VAR_4);


 if (!VAR_8.running) {
  FUNC_11(VAR_8.states);
  FUNC_9();
  FUNC_10();


  if (VAR_6 == ((void*)0)) {
   FUNC_4(VAR_4);
   FUNC_5(VAR_5);

   FUNC_12(FUNC_2());
   FUNC_13(FUNC_2());

   return (0);
  } else {

   if (VAR_8.states == 0 &&
       FUNC_8() &&
       FUNC_0(&VAR_9)) {
    VAR_11 = 0;
    VAR_12 = 0;
   }
   goto done;
  }
 }


 FUNC_11(1 + (VAR_8.states
     / VAR_3.timeout[VAR_0]));


 if (++VAR_11 >= VAR_3.timeout[VAR_0]) {
  FUNC_9();
  FUNC_10();
  VAR_11 = 0;
 }
done:
 FUNC_4(VAR_4);
 FUNC_5(VAR_5);

 (void) FUNC_14(VAR_7, VAR_1, "pf_purge_cont",
     VAR_12 * VAR_2, FUNC_15);

 FUNC_1(0);

 return (0);
}
