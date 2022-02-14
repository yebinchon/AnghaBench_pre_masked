
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int end_address; scalar_t__ start_address; } ;
typedef TYPE_1__ memory_values_t ;


 scalar_t__ FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_1)
{
    u32 VAR_2 = (u32)FUNC_0() + VAR_1;



    FUNC_1(VAR_2 + 0x30000000, 0x30000000 + 0x01E20000, 0);

    const memory_values_t * VAR_3 = VAR_0;


    int VAR_4 = 0;
    while (VAR_3[VAR_4].start_address)
    {
        FUNC_1(VAR_3[VAR_4].start_address, VAR_3[VAR_4].end_address, VAR_4 + 1);
        VAR_4++;
    }
}
