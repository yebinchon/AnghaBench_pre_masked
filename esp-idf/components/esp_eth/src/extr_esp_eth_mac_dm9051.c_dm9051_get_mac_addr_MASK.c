
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_4__ {int * addr; } ;
typedef TYPE_1__ emac_dm9051_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,int *) ;
 int VAR_3 ;

__attribute__((used)) static esp_err_t FUNC_2(emac_dm9051_t *VAR_4)
{
    esp_err_t VAR_5 = VAR_2;
    for (int VAR_6 = 0; VAR_6 < 6; VAR_6++) {
        FUNC_0(FUNC_1(VAR_4, VAR_0 + VAR_6, &VAR_4->addr[VAR_6]) == VAR_2, "read PAR failed", VAR_3, VAR_1);
    }
    return VAR_2;
err:
    return VAR_5;
}
