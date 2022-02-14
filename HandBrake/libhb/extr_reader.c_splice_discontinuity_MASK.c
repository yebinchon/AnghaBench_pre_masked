
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int hb_work_private_t ;
struct TYPE_11__ {scalar_t__ split; int id; } ;
struct TYPE_12__ {int size; scalar_t__ data; TYPE_1__ s; } ;
typedef TYPE_2__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__**) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static hb_buffer_t * FUNC_10( hb_work_private_t *VAR_0, hb_buffer_t *VAR_1 )
{


    hb_buffer_list_t * VAR_2 = FUNC_0(VAR_0, VAR_1->s.id);
    if (VAR_2 != ((void*)0))
    {
        FUNC_3(VAR_2, VAR_1);
        if (VAR_1->s.split)
        {
            return ((void*)0);
        }

        int VAR_3 = FUNC_5(VAR_2);
        if (VAR_3 > 1)
        {
            int VAR_4 = FUNC_8(VAR_2);
            hb_buffer_t * VAR_5 = FUNC_2(VAR_4);
            VAR_1 = FUNC_6(VAR_2);
            VAR_5->s = VAR_1->s;

            int VAR_6 = 0;
            while ((VAR_1 = FUNC_7(VAR_2)) != ((void*)0))
            {
                FUNC_9(VAR_5->data + VAR_6, VAR_1->data, VAR_1->size);
                VAR_6 += VAR_1->size;
                FUNC_1(&VAR_1);
            }
            VAR_1 = VAR_5;
        }
        else
        {
            VAR_1 = FUNC_4(VAR_2);
        }
    }
    return VAR_1;
}
