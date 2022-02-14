
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; } ;
struct TYPE_6__ {TYPE_1__ ts; } ;
typedef TYPE_2__ hb_stream_t ;
typedef int hb_buffer_t ;
typedef int hb_buffer_list_t ;


 int * FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;

__attribute__((used)) static hb_buffer_t * FUNC_3( hb_stream_t *VAR_0 )
{
    hb_buffer_list_t VAR_1;
    hb_buffer_t *VAR_2;
    int VAR_3;

    FUNC_2(&VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_0->ts.count; VAR_3++)
    {
        VAR_2 = FUNC_0(VAR_0, VAR_3);
        FUNC_1(&VAR_1, VAR_2);
    }
    return FUNC_2(&VAR_1);
}
