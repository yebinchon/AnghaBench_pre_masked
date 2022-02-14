
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t gpio_num_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int rtc_num; scalar_t__ reg; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (size_t,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int ,int,int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static void FUNC_12(void)
{
    esp_err_t VAR_14 = FUNC_9(0, VAR_12,
            (VAR_11 - VAR_12) / sizeof(uint32_t));
    FUNC_0(VAR_14);


    gpio_num_t VAR_15 = VAR_0;
    FUNC_1(VAR_5[VAR_15].reg && "GPIO used for pulse counting must be an RTC IO");
    VAR_6 = 3;
    VAR_7 = 3;
    VAR_13 = 0;
    VAR_10 = VAR_5[VAR_15].rtc_num;
    VAR_8 = 10;


    FUNC_4(VAR_15);
    FUNC_8(VAR_15, VAR_3);
    FUNC_6(VAR_15);
    FUNC_7(VAR_15);
    FUNC_3(VAR_15);





    FUNC_5(VAR_1);
    FUNC_5(VAR_2);
    FUNC_2();




    FUNC_11(0, 20000);


    VAR_14 = FUNC_10(&VAR_9 - VAR_4);
    FUNC_0(VAR_14);
}
