
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_4__ {scalar_t__ (* func ) (TYPE_1__ const*,int*,int *) ;scalar_t__ code; } ;
typedef TYPE_1__ cis_tuple_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int*,size_t,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *,int*,int *) ;
 TYPE_1__* FUNC_2 (int) ;
 int * VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,int*,int *) ;

esp_err_t FUNC_4(uint8_t* VAR_4, size_t VAR_5, FILE* VAR_6)
{
    FUNC_0("CIS", VAR_4, VAR_5, VAR_1);
    if (!VAR_6) VAR_6 = VAR_3;

    uint8_t* VAR_7 = VAR_4;
    do {
        const cis_tuple_t* VAR_8 = FUNC_2(VAR_7[0]);
        int VAR_9 = VAR_7[1];
        esp_err_t VAR_10 = VAR_2;
        if (VAR_8) {
            VAR_10 = VAR_8->func(VAR_8, VAR_7, VAR_6);
        } else {
            VAR_10 = FUNC_1(((void*)0), VAR_7, VAR_6);
        }
        if (VAR_10 != VAR_2) return VAR_10;
        VAR_7 += 2 + VAR_9;
        if (VAR_8 && VAR_8->code == VAR_0) break;
    } while (VAR_7 < VAR_4 + VAR_5) ;
    return VAR_2;
}
