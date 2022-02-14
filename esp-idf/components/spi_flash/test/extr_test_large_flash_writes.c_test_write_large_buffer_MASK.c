
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t size; scalar_t__ address; } ;
typedef TYPE_1__ esp_partition_t ;
typedef int ends ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int const*,int*,size_t) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 TYPE_1__* FUNC_6 () ;
 int* FUNC_7 (size_t) ;
 int FUNC_8 (char*,size_t,int const*) ;
 int FUNC_9 (scalar_t__,size_t) ;
 int FUNC_10 (scalar_t__,int*,int) ;
 int FUNC_11 (scalar_t__,int const*,size_t) ;

__attribute__((used)) static void FUNC_12(const uint8_t *VAR_1, size_t VAR_2)
{
    const esp_partition_t *VAR_3 = FUNC_6();
    FUNC_1(VAR_3->size > VAR_2 + 2 + VAR_0);

    FUNC_8("Writing %d bytes from source %p\n", VAR_2, VAR_1);

    uint8_t *VAR_4 = FUNC_7(VAR_2);
    FUNC_4(VAR_4);

    FUNC_0( FUNC_9(VAR_3->address, (VAR_2 + VAR_0) & ~(VAR_0-1)) );


    FUNC_0( FUNC_11(VAR_3->address + 1, VAR_1, VAR_2) );

    FUNC_0( FUNC_10(VAR_3->address + 1, VAR_4, VAR_2) );

    FUNC_3(VAR_1, VAR_4, VAR_2);

    FUNC_5(VAR_4);


    uint8_t VAR_5[8];

    FUNC_0( FUNC_10(VAR_3->address, VAR_5, sizeof(VAR_5)) );
    FUNC_2(0xFF, VAR_5[0]);
    FUNC_2(VAR_1[0] , VAR_5[1]);

    FUNC_0( FUNC_10(VAR_3->address + VAR_2, VAR_5, sizeof(VAR_5)) );

    FUNC_2(VAR_1[VAR_2-1], VAR_5[0]);
    FUNC_2(0xFF, VAR_5[1]);
    FUNC_2(0xFF, VAR_5[2]);
    FUNC_2(0xFF, VAR_5[3]);
}
