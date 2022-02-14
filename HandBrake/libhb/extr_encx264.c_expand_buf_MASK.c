
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {int height; int width; } ;
struct TYPE_9__ {TYPE_2__* plane; TYPE_1__ f; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_8__ {int height; int width; int stride; scalar_t__* data; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static hb_buffer_t * FUNC_1(int VAR_1, hb_buffer_t *VAR_2)
{
    hb_buffer_t *VAR_3;
    int VAR_4;
    int VAR_5 = VAR_1 - 8;

    VAR_3 = FUNC_0(VAR_0,
                               VAR_2->f.width, VAR_2->f.height);
    for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
    {
        int VAR_6, VAR_7;
        uint8_t *VAR_8 = VAR_2->plane[VAR_4].data;
        uint16_t *VAR_9 = (uint16_t*)VAR_3->plane[VAR_4].data;
        for (VAR_7 = 0; VAR_7 < VAR_2->plane[VAR_4].height; VAR_7++)
        {
            for (VAR_6 = 0; VAR_6 < VAR_2->plane[VAR_4].width; VAR_6++)
            {
                VAR_9[VAR_6] = (uint16_t)VAR_8[VAR_6] << VAR_5;
            }
            VAR_8 += VAR_2->plane[VAR_4].stride;
            VAR_9 += VAR_3->plane[VAR_4].stride / 2;
        }
    }
    return VAR_3;
}
