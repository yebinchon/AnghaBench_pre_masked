
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ key_in_hardware; } ;
typedef TYPE_1__ esp_aes_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,unsigned char const*,unsigned char*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5( esp_aes_context *VAR_2,
                      const unsigned char VAR_3[16],
                      unsigned char VAR_4[16] )
{
    int VAR_5;

    if (!FUNC_4(VAR_2)) {
        return VAR_1;
    }

    FUNC_0();
    VAR_2->key_in_hardware = 0;
    FUNC_3(VAR_2, VAR_0);
    VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
    FUNC_2();
    return VAR_5;
}
