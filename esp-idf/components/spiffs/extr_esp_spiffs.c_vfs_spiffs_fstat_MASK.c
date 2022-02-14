
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; scalar_t__ st_ctime; scalar_t__ st_atime; int st_mtime; int st_size; } ;
struct TYPE_5__ {int size; } ;
typedef TYPE_1__ spiffs_stat ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {int fs; } ;
typedef TYPE_2__ esp_spiffs_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct stat*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(void* VAR_5, int VAR_6, struct stat * VAR_7)
{
    FUNC_3(VAR_7);
    spiffs_stat VAR_8;
    esp_spiffs_t * VAR_9 = (esp_spiffs_t *)VAR_5;
    off_t VAR_10 = FUNC_2(VAR_9->fs, VAR_6, &VAR_8);
    if (VAR_10 < 0) {
        VAR_4 = FUNC_4(FUNC_1(VAR_9->fs));
        FUNC_0(VAR_9->fs);
        return -1;
    }
    VAR_7->st_size = VAR_8.size;
    VAR_7->st_mode = VAR_3 | VAR_1 | VAR_2 | VAR_0;
    VAR_7->st_mtime = FUNC_5(&VAR_8);
    VAR_7->st_atime = 0;
    VAR_7->st_ctime = 0;
    return VAR_10;
}
