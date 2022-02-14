
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cap_level; int grade; } ;
typedef TYPE_1__ touch_pad_denoise_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_7 ;
 int FUNC_8 (int *,char*,int,int *,int,int *) ;

void FUNC_9(void)
{

    FUNC_5();
    for (int VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
        FUNC_1(VAR_6[VAR_8]);
        FUNC_7(VAR_6[VAR_8], VAR_5);
    }


    touch_pad_denoise_t VAR_9 = {

            .grade = VAR_3,
            .cap_level = VAR_4,
    };
    FUNC_3(VAR_9);
    FUNC_2();
    FUNC_0(VAR_0, "Denoise function init");


    FUNC_6(VAR_2);
    FUNC_4();


    FUNC_8(&VAR_7, "touch_pad_read_task", 2048, ((void*)0), 5, ((void*)0));
}
