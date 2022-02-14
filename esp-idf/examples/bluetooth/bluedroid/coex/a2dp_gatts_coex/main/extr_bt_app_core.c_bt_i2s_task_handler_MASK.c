
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int portTickType ;


 int FUNC_0 (int ,int *,size_t,size_t*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,void*) ;
 scalar_t__ FUNC_2 (int ,size_t*,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
    uint8_t *VAR_3 = ((void*)0);
    size_t VAR_4 = 0;
    size_t VAR_5 = 0;

    for (;;) {
        VAR_3 = (uint8_t *)FUNC_2(VAR_1, &VAR_4, (portTickType)VAR_0);
        if (VAR_4 != 0){
            FUNC_0(0, VAR_3, VAR_4, &VAR_5, VAR_0);
            FUNC_1(VAR_1,(void *)VAR_3);
        }
    }
}
