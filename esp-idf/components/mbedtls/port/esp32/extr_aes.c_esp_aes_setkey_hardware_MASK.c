
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_3__ {int key_in_hardware; int key_bytes; scalar_t__ key; } ;
typedef TYPE_1__ esp_aes_context ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(esp_aes_context *VAR_3, int VAR_4)
{
    const uint32_t VAR_5 = 4;
    unsigned VAR_6 = (VAR_4 == VAR_2) ? 0 : VAR_5;

    VAR_3->key_in_hardware = 0;

    for (int VAR_7 = 0; VAR_7 < VAR_3->key_bytes/4; ++VAR_7) {
        FUNC_0(VAR_0 + VAR_7 * 4, *(((uint32_t *)VAR_3->key) + VAR_7));
        VAR_3->key_in_hardware += 4;
    }

    FUNC_0(VAR_1, VAR_6 + ((VAR_3->key_bytes / 8) - 2));


    if (VAR_3->key_in_hardware < 16
        || VAR_3->key_in_hardware != VAR_3->key_bytes) {
        FUNC_1();
    }
}
