
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ key_in_hardware; scalar_t__ key_bytes; } ;
typedef TYPE_1__ esp_aes_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (scalar_t__*,scalar_t__,int) ;
 int FUNC_5 (void*,int) ;
 int FUNC_6 (void*,int ,int) ;

__attribute__((used)) static int FUNC_7(esp_aes_context *VAR_4, const void *VAR_5, void *VAR_6)
{
    const uint32_t *VAR_7 = (const uint32_t *)VAR_5;
    uint32_t VAR_8, VAR_9, VAR_10, VAR_11;
    uint32_t *VAR_12 = (uint32_t *)VAR_6;






    if (VAR_4->key_in_hardware != VAR_4->key_bytes) {
        FUNC_3(VAR_6, 16);
        return VAR_3;
    }



    VAR_8 = VAR_7[0];
    FUNC_1(VAR_2, VAR_8);

    VAR_9 = VAR_7[1];
    FUNC_1(VAR_2 + 4, VAR_9);

    VAR_10 = VAR_7[2];
    FUNC_1(VAR_2 + 8, VAR_10);

    VAR_11 = VAR_7[3];
    FUNC_1(VAR_2 + 12, VAR_11);

    FUNC_1(VAR_1, 1);

    while (FUNC_0(VAR_0) != 1) { }

    FUNC_4(VAR_12, VAR_2, 4);
    if(VAR_8 == VAR_12[0] && VAR_9 == VAR_12[1] && VAR_10 == VAR_12[2] && VAR_11 == VAR_12[3]) {


        FUNC_6(VAR_6, 0, 16);
        FUNC_5(VAR_6, 16);
        FUNC_2();
    }

    return 0;
}
