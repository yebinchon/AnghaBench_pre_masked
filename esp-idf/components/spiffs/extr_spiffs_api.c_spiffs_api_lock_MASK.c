
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ user_data; } ;
typedef TYPE_1__ spiffs ;
struct TYPE_5__ {int lock; } ;
typedef TYPE_2__ esp_spiffs_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

void FUNC_1(spiffs *VAR_1)
{
    (void) FUNC_0(((esp_spiffs_t *)(VAR_1->user_data))->lock, VAR_0);
}
