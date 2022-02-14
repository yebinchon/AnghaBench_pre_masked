
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int mode; TYPE_3__* mask; TYPE_3__* mask_filtered; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_9__ {TYPE_1__* plane; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_7__ {int height; int stride; int width; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int,int ) ;

__attribute__((used)) static void FUNC_4(hb_filter_private_t * VAR_2, hb_buffer_t * VAR_3)
{

    FUNC_1( VAR_2 );

    int VAR_4, VAR_5;
    hb_buffer_t * VAR_6;

    if (VAR_2->mode & VAR_1)
    {
        VAR_6 = VAR_2->mask_filtered;
    }
    else
    {
        VAR_6 = VAR_2->mask;
    }
    for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
    {
        uint8_t * VAR_7 = VAR_3->plane[VAR_4].data;
        uint8_t * VAR_8 = VAR_6->plane[VAR_4].data;

        for (VAR_5 = 0; VAR_5 < VAR_6->plane[VAR_4].height; VAR_5++)
        {
            if (!(VAR_2->mode & VAR_0) && VAR_4 == 0)
            {
                FUNC_2(VAR_7, VAR_8, VAR_6->plane[VAR_4].width);
            }
            else if (!(VAR_2->mode & VAR_0))
            {
                FUNC_3(VAR_7, 128, VAR_6->plane[VAR_4].width);
            }
            if (VAR_4 == 0)
            {
                FUNC_0(VAR_7, VAR_8, VAR_6->plane[VAR_4].width);
            }

            VAR_7 += VAR_3->plane[VAR_4].stride;
            VAR_8 += VAR_6->plane[VAR_4].stride;
        }
    }
}
