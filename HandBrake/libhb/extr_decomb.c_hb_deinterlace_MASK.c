
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_1__* plane; } ;
typedef TYPE_2__ hb_buffer_t ;
struct TYPE_10__ {int* tap; int normalize; } ;
typedef TYPE_3__ filter_param_t ;
struct TYPE_8__ {int width; int stride; int height_stride; int * data; } ;


 int FUNC_0 (TYPE_3__*,int *,int *,int,int,int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int) ;

void FUNC_3(hb_buffer_t *VAR_0, hb_buffer_t *VAR_1)
{
    int VAR_2;
    filter_param_t VAR_3;

    VAR_3.tap[0] = -1;
    VAR_3.tap[1] = 4;
    VAR_3.tap[2] = 2;
    VAR_3.tap[3] = 4;
    VAR_3.tap[4] = -1;
    VAR_3.normalize = 3;

    FUNC_1(VAR_1);
    for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
    {
        int VAR_4;
        int VAR_5 = VAR_1->plane[VAR_2].width;
        int VAR_6 = VAR_1->plane[VAR_2].stride;
        int VAR_7 = VAR_1->plane[VAR_2].height_stride;


        uint8_t *VAR_8 = &VAR_0->plane[VAR_2].data[0];
        uint8_t *VAR_9 = &VAR_1->plane[VAR_2].data[0];


        for( VAR_4 = 0; VAR_4 < VAR_7 - 1; VAR_4 += 2 )
        {

            FUNC_2(VAR_8, VAR_9, VAR_5);
            VAR_8 += VAR_6;
            VAR_9 += VAR_6;
            FUNC_0(&VAR_3, VAR_8, VAR_9, VAR_5, VAR_7, VAR_6, VAR_4 + 1);
            VAR_8 += VAR_6;
            VAR_9 += VAR_6;
        }
    }
}
