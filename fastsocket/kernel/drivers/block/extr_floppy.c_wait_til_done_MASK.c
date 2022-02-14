
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reset; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 () ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (void (*) ()) ;
 int FUNC_8 (int ) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_9(void (*VAR_16)(void), int VAR_17)
{
 int VAR_18;

 FUNC_7(VAR_16);

 if (VAR_11 < 2 && VAR_6) {
  FUNC_0(VAR_15, VAR_13);

  FUNC_1(&VAR_10, &VAR_15);
  for (;;) {
   FUNC_8(VAR_17 ?
       VAR_7 :
       VAR_9);

   if (VAR_11 >= 2 || !VAR_6)
    break;

   FUNC_3("wait_til_done");
   FUNC_6();
  }

  FUNC_8(VAR_8);
  FUNC_4(&VAR_10, &VAR_15);
 }

 if (VAR_11 < 2) {
  FUNC_2();
  VAR_12 = &VAR_14;
  FUNC_5();
  return -VAR_0;
 }

 if (VAR_2->reset)
  VAR_11 = VAR_3;
 if (VAR_11 == VAR_5)
  VAR_18 = 0;
 else
  VAR_18 = -VAR_1;
 VAR_11 = VAR_4;
 return VAR_18;
}
