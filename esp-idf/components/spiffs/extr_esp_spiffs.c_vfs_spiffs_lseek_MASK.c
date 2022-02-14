
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_2__ {int fs; } ;
typedef TYPE_1__ esp_spiffs_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static off_t FUNC_4(void* VAR_1, int VAR_2, off_t VAR_3, int VAR_4)
{
    esp_spiffs_t * VAR_5 = (esp_spiffs_t *)VAR_1;
    off_t VAR_6 = FUNC_2(VAR_5->fs, VAR_2, VAR_3, VAR_4);
    if (VAR_6 < 0) {
        VAR_0 = FUNC_3(FUNC_1(VAR_5->fs));
        FUNC_0(VAR_5->fs);
        return -1;
    }
    return VAR_6;
}
