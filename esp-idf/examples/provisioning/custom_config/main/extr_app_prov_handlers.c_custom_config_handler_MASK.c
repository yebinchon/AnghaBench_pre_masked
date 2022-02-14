
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_3__ {int version; int info; } ;
typedef TYPE_1__ custom_config_t ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static esp_err_t FUNC_1(const custom_config_t *VAR_2)
{
    FUNC_0(VAR_1, "Custom config received :\n\tInfo : %s\n\tVersion : %d",
             VAR_2->info, VAR_2->version);
    return VAR_0;
}
