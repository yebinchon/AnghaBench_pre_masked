
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {scalar_t__ (* start ) () ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 () ;

esp_err_t FUNC_3(void)
{
    esp_err_t VAR_3 = VAR_1;
    FUNC_0((VAR_2 != ((void*)0)),
                    VAR_0,
                    "Master interface is not correctly initialized.");
    FUNC_0((VAR_2->start != ((void*)0)),
                    VAR_0,
                    "Master interface is not correctly initialized.");
    VAR_3 = VAR_2->start();
    FUNC_0((VAR_3 == VAR_1),
                    VAR_3,
                    "SERIAL master start failure error=(0x%x) (%s).",
                    VAR_3, FUNC_1(VAR_3));
    return VAR_1;
}
