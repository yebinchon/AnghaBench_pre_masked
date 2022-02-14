
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct evtchn_close {int port; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,struct evtchn_close*) ;

 scalar_t__ VAR_1 ;

 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int* VAR_2 ;
 size_t FUNC_7 (unsigned int) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__ FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int* FUNC_11 (int ,int ) ;
 int FUNC_12 (unsigned int) ;
 size_t FUNC_13 (unsigned int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_14(unsigned int VAR_7)
{
 struct evtchn_close VAR_8;
 int VAR_9 = FUNC_6(VAR_7);

 FUNC_9(&VAR_5);

 if (FUNC_2(VAR_9)) {
  VAR_8.port = VAR_9;
  if (FUNC_1(VAR_0, &VAR_8) != 0)
   FUNC_0();

  switch (FUNC_12(VAR_7)) {
  case 128:
   FUNC_11(VAR_6, FUNC_4(VAR_9))
    [FUNC_13(VAR_7)] = -1;
   break;
  case 129:
   FUNC_11(VAR_3, FUNC_4(VAR_9))
    [FUNC_7(VAR_7)] = -1;
   break;
  default:
   break;
  }


  FUNC_3(VAR_9, 0);

  VAR_2[VAR_9] = -1;
 }

 if (VAR_4[VAR_7].type != VAR_1) {
  VAR_4[VAR_7] = FUNC_8();

  FUNC_5(VAR_7);
 }

 FUNC_10(&VAR_5);
}
