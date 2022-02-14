
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,scalar_t__,int *) ;

__attribute__((used)) static uint8_t FUNC_2(void)
{
    uint16_t VAR_2 = 0;
    while (FUNC_1(VAR_1, VAR_0 + VAR_2, ((void*)0)) != ((void*)0)) {
            FUNC_0(VAR_2 < 16 && "must erase the partition before writing to it");
            VAR_2++;
    }
    return VAR_2;
}
