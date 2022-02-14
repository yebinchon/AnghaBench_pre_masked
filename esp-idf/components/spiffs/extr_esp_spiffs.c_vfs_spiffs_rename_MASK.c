
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fs; } ;
typedef TYPE_1__ esp_spiffs_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,char const*) ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void* VAR_1, const char *VAR_2, const char *VAR_3)
{
    FUNC_3(VAR_2);
    FUNC_3(VAR_3);
    esp_spiffs_t * VAR_4 = (esp_spiffs_t *)VAR_1;
    int VAR_5 = FUNC_2(VAR_4->fs, VAR_2, VAR_3);
    if (VAR_5 < 0) {
        VAR_0 = FUNC_4(FUNC_1(VAR_4->fs));
        FUNC_0(VAR_4->fs);
        return -1;
    }
    return VAR_5;
}
