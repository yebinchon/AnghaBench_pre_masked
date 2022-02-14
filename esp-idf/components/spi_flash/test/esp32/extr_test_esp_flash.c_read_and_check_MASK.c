
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ address; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_flash_t ;
typedef int ends ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int const*,int*,size_t) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *,int*,scalar_t__,int) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (size_t) ;
 int FUNC_7 (char*,int *,size_t) ;

__attribute__((used)) static void FUNC_8(esp_flash_t *VAR_0, const esp_partition_t *VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
    FUNC_7("Checking chip %p, %d bytes\n", VAR_0, VAR_3);
    uint8_t *VAR_4 = FUNC_6(VAR_3);
    FUNC_3(VAR_4);
    FUNC_0( FUNC_4(VAR_0, VAR_4, VAR_1->address + 1, VAR_3) );
    FUNC_2(VAR_2, VAR_4, VAR_3);
    FUNC_5(VAR_4);


    uint8_t VAR_5[8];

    FUNC_0( FUNC_4(VAR_0, VAR_5, VAR_1->address, sizeof(VAR_5)) );
    FUNC_1(0xFF, VAR_5[0]);
    FUNC_1(VAR_2[0], VAR_5[1]);

    FUNC_0( FUNC_4(VAR_0, VAR_5, VAR_1->address + VAR_3, sizeof(VAR_5)) );

    FUNC_1(VAR_2[VAR_3 - 1], VAR_5[0]);
    FUNC_1(0xFF, VAR_5[1]);
    FUNC_1(0xFF, VAR_5[2]);
    FUNC_1(0xFF, VAR_5[3]);
}
