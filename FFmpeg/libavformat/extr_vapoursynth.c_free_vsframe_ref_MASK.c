
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct vsframe_ref_data {int vss_state; scalar_t__ frame; TYPE_1__* vsapi; } ;
struct TYPE_2__ {int (* freeFrame ) (scalar_t__) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vsframe_ref_data*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, uint8_t *VAR_1)
{
    struct vsframe_ref_data *VAR_2 = VAR_0;

    if (VAR_2->frame)
        VAR_2->vsapi->freeFrame(VAR_2->frame);

    FUNC_0(&VAR_2->vss_state);

    FUNC_1(VAR_2);
}
