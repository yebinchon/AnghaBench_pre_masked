
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* p_data; scalar_t__ index; scalar_t__ in_use; } ;
typedef TYPE_1__ tGAP_INFO ;
typedef scalar_t__ UINT8 ;
struct TYPE_6__ {TYPE_1__* blk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

tGAP_INFO *FUNC_1 (void)
{
    tGAP_INFO *VAR_3 = &VAR_2.blk[0];
    UINT8 VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_3++) {
        if (!VAR_3->in_use) {
            FUNC_0 (VAR_3, 0, sizeof (tGAP_INFO));

            VAR_3->in_use = VAR_1;
            VAR_3->index = VAR_4;
            VAR_3->p_data = (void *)((void*)0);
            return (VAR_3);
        }
    }


    return (((void*)0));
}
