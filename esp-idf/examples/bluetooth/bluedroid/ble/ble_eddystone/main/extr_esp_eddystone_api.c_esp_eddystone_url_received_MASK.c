
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int esp_err_t ;
struct TYPE_6__ {scalar_t__ tx_power; char* url; } ;
struct TYPE_5__ {TYPE_2__ url; } ;
struct TYPE_7__ {TYPE_1__ inform; } ;
typedef TYPE_3__ esp_eddystone_result_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (scalar_t__ const*,scalar_t__ const*) ;
 int FUNC_1 (char**,char*,size_t) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static esp_err_t FUNC_3(const uint8_t* VAR_2, uint8_t VAR_3, esp_eddystone_result_t* VAR_4)
{
    char *VAR_5 = ((void*)0);
    uint8_t VAR_6 = 0;
    if(VAR_3-VAR_1 > VAR_0) {

        return -1;
    }
    VAR_4->inform.url.tx_power = VAR_2[VAR_6++];
    VAR_5 = FUNC_0(VAR_2+VAR_6, VAR_2+VAR_3-1);
    FUNC_1(&VAR_4->inform.url.url, VAR_5, FUNC_2(VAR_5));
    VAR_4->inform.url.url[FUNC_2(VAR_5)] = '\0';
    return 0;
}
