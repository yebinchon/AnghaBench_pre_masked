
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* plane; } ;
typedef TYPE_2__ hb_buffer_t ;
struct TYPE_4__ {int height; int stride; int * data; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(hb_buffer_t * VAR_0)
{
    int VAR_1, VAR_2;

    for (VAR_1 = 0; VAR_1 < 3; VAR_1++)
    {
        uint8_t * VAR_3, * VAR_4;

        VAR_3 = VAR_0->plane[VAR_1].data + (VAR_0->plane[VAR_1].height - 1) *
              VAR_0->plane[VAR_1].stride;
        VAR_4 = VAR_0->plane[VAR_1].data + VAR_0->plane[VAR_1].height *
              VAR_0->plane[VAR_1].stride;
        for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
        {
            FUNC_0(VAR_4, VAR_3, VAR_0->plane[VAR_1].stride);
            VAR_4 += VAR_0->plane[VAR_1].stride;
        }
    }
}
