
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int esp_err_t ;
struct TYPE_2__ {char* name; } ;
typedef TYPE_1__ cis_tuple_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static esp_err_t FUNC_1(const void* VAR_1, uint8_t* VAR_2, FILE* VAR_3)
{
    const cis_tuple_t* VAR_4 = (const cis_tuple_t*)VAR_1;
    uint8_t VAR_5 = *(VAR_2++);
    int VAR_6 = *(VAR_2++);
    if (VAR_4) {
        FUNC_0(VAR_3, "TUPLE: %s, size: %d: ", VAR_4->name, VAR_6);
    } else {
        FUNC_0(VAR_3, "TUPLE: unknown(%02X), size: %d: ", VAR_5, VAR_6);
    }
    for (int VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) FUNC_0(VAR_3, "%02X ", *(VAR_2++));
    FUNC_0(VAR_3, "\n");
    return VAR_0;
}
