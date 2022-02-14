
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int slice_buffer ;
struct TYPE_3__ {int y; void* b3; void* b2; void* b1; void* b0; } ;
typedef TYPE_1__ DWTCompose ;


 int FUNC_0 (int,int) ;
 void* FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(DWTCompose *VAR_0, slice_buffer *VAR_1,
                                             int VAR_2, int VAR_3)
{
    VAR_0->b0 = FUNC_1(VAR_1, FUNC_0(-3 - 1, VAR_2 - 1) * VAR_3);
    VAR_0->b1 = FUNC_1(VAR_1, FUNC_0(-3, VAR_2 - 1) * VAR_3);
    VAR_0->b2 = FUNC_1(VAR_1, FUNC_0(-3 + 1, VAR_2 - 1) * VAR_3);
    VAR_0->b3 = FUNC_1(VAR_1, FUNC_0(-3 + 2, VAR_2 - 1) * VAR_3);
    VAR_0->y = -3;
}
