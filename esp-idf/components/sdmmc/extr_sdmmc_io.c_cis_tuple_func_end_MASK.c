
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
 int FUNC_0 (int *,char*,char*) ;

__attribute__((used)) static esp_err_t FUNC_1(const void* VAR_1, uint8_t* VAR_2, FILE* VAR_3)
{
    const cis_tuple_t* VAR_4 = (const cis_tuple_t*)VAR_1;
    VAR_2++;
    FUNC_0(VAR_3, "TUPLE: %s\n", VAR_4->name);
    return VAR_0;
}
