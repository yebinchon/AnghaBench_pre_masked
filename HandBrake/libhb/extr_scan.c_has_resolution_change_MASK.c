
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; } ;
struct TYPE_6__ {TYPE_1__ geometry; } ;
struct TYPE_7__ {TYPE_2__ info; scalar_t__ count; } ;
typedef TYPE_3__ info_list_t ;



__attribute__((used)) static int FUNC_0( info_list_t *VAR_0 )
{
    int VAR_1, VAR_2, VAR_3;

    if( !VAR_0[0].count )
        return 0;
    VAR_1 = VAR_0[0].info.geometry.width;
    VAR_2 = VAR_0[0].info.geometry.height;
    for ( VAR_3 = 1; VAR_0[VAR_3].count; ++VAR_3 )
    {
        if (VAR_1 != VAR_0[VAR_3].info.geometry.width ||
            VAR_2 != VAR_0[VAR_3].info.geometry.height)
            return 1;
    }
    return 0;
}
