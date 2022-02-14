
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ address; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int esp_flash_t ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int *,scalar_t__,size_t) ;
 int FUNC_2 (int *,int const*,scalar_t__,size_t) ;
 int FUNC_3 (char*,int *,size_t,int const*) ;

__attribute__((used)) static void FUNC_4(esp_flash_t *VAR_1, const esp_partition_t *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
    FUNC_3("Writing chip %p, %d bytes from source %p\n", VAR_1, VAR_4, VAR_3);

    FUNC_0( FUNC_1(VAR_1, VAR_2->address, (VAR_4 + VAR_0) & ~(VAR_0 - 1)) );


    FUNC_0( FUNC_2(VAR_1, VAR_3, VAR_2->address + 1, VAR_4) );
}
