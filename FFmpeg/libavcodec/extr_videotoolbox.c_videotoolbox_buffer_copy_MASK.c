
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int bitstream_size; void* bitstream; int allocated_size; } ;
typedef TYPE_1__ VTContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (void*,int *,int ) ;
 int FUNC_2 (void*,int const*,int ) ;

__attribute__((used)) static int FUNC_3(VTContext *VAR_1,
                                    const uint8_t *VAR_2,
                                    uint32_t VAR_3)
{
    void *VAR_4;

    VAR_4 = FUNC_1(VAR_1->bitstream,
                         &VAR_1->allocated_size,
                         VAR_3);

    if (!VAR_4)
        return FUNC_0(VAR_0);

    VAR_1->bitstream = VAR_4;
    FUNC_2(VAR_1->bitstream, VAR_2, VAR_3);
    VAR_1->bitstream_size = VAR_3;

    return 0;
}
