
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int nb_in; unsigned int sync_level; TYPE_1__* in; } ;
struct TYPE_6__ {scalar_t__ state; int sync; } ;
typedef TYPE_2__ FFFrameSync ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int ,char*,unsigned int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(FFFrameSync *VAR_2)
{
    unsigned VAR_3, VAR_4 = 0;

    for (VAR_3 = 0; VAR_3 < VAR_2->nb_in; VAR_3++)
        if (VAR_2->in[VAR_3].state != VAR_1)
            VAR_4 = FUNC_0(VAR_4, VAR_2->in[VAR_3].sync);
    FUNC_1(VAR_4 <= VAR_2->sync_level);
    if (VAR_4 < VAR_2->sync_level)
        FUNC_2(VAR_2, VAR_0, "Sync level %u\n", VAR_4);
    if (VAR_4)
        VAR_2->sync_level = VAR_4;
    else
        FUNC_3(VAR_2);
}
