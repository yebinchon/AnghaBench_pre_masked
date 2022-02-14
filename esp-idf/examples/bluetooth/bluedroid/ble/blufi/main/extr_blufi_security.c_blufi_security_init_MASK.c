
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blufi_security {struct blufi_security* iv; int aes; int dhm; } ;
typedef int esp_err_t ;


 int VAR_0 ;
 struct blufi_security* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct blufi_security*,int,int) ;

esp_err_t FUNC_4(void)
{
    VAR_1 = (struct blufi_security *)FUNC_0(sizeof(struct blufi_security));
    if (VAR_1 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(VAR_1, 0x0, sizeof(struct blufi_security));

    FUNC_2(&VAR_1->dhm);
    FUNC_1(&VAR_1->aes);

    FUNC_3(VAR_1->iv, 0x0, 16);
    return 0;
}
