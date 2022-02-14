
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fs; } ;
typedef TYPE_1__ esp_spiffs_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int,int) ;
 int FUNC_3 (char const*) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(void* VAR_2, const char * VAR_3, int VAR_4, int VAR_5)
{
    FUNC_3(VAR_3);
    esp_spiffs_t * VAR_6 = (esp_spiffs_t *)VAR_2;
    int VAR_7 = FUNC_4(VAR_4);
    int VAR_8 = FUNC_2(VAR_6->fs, VAR_3, VAR_7, VAR_5);
    if (VAR_8 < 0) {
        VAR_1 = FUNC_5(FUNC_1(VAR_6->fs));
        FUNC_0(VAR_6->fs);
        return -1;
    }
    if (!(VAR_7 & VAR_0)) {
        FUNC_6(VAR_6->fs, VAR_8);
    }
    return VAR_8;
}
