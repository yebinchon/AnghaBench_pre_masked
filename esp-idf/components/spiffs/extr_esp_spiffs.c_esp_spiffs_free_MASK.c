
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* work; struct TYPE_5__* cache; struct TYPE_5__* fds; int lock; struct TYPE_5__* fs; } ;
typedef TYPE_1__ esp_spiffs_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(esp_spiffs_t ** VAR_0)
{
    esp_spiffs_t * VAR_1 = *VAR_0;
    if (*VAR_0 == ((void*)0)) {
        return;
    }
    *VAR_0 = ((void*)0);

    if (VAR_1->fs) {
        FUNC_0(VAR_1->fs);
        FUNC_1(VAR_1->fs);
    }
    FUNC_2(VAR_1->lock);
    FUNC_1(VAR_1->fds);
    FUNC_1(VAR_1->cache);
    FUNC_1(VAR_1->work);
    FUNC_1(VAR_1);
}
