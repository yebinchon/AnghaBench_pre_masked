
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int screen_event_t ;
struct TYPE_3__ {int keyboard_state; } ;
typedef TYPE_1__ qnx_input_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,unsigned int,int ,int,int ) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_5(
      qnx_input_t *VAR_6,
      screen_event_t VAR_7, int VAR_8)
{

    int VAR_9 = 0;
    FUNC_4(VAR_7, VAR_4, &VAR_9);

    int VAR_10 = 0;
    FUNC_4(VAR_7, VAR_3, &VAR_10);

    int VAR_11 = 0;
    FUNC_4(VAR_7, VAR_5, &VAR_11);


    unsigned VAR_12 = FUNC_3(VAR_10);
    bool VAR_13 = VAR_9 & VAR_0;
    bool VAR_14 = VAR_9 & VAR_1;


    if(!VAR_14)
    {
        FUNC_2(VAR_13, VAR_12, 0, VAR_11, VAR_2);
    }


    if(VAR_13 && !VAR_14)
    {
       FUNC_1(VAR_6->keyboard_state, VAR_10);
    }
    else if(!VAR_13 && !VAR_14)
    {
       FUNC_0(VAR_6->keyboard_state, VAR_10);
    }
}
