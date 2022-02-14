
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_reset_reason_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void __attribute__((constructor)) FUNC_4(void)
{
    esp_reset_reason_t VAR_3 = FUNC_1();
    VAR_2 = FUNC_2(FUNC_3(VAR_1),
                                      VAR_3);
    if (VAR_3 != VAR_0) {
        FUNC_0();
    }
}
