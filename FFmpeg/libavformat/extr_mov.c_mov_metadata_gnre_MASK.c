
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* fc; } ;
struct TYPE_4__ {int metadata; int event_flags; } ;
typedef TYPE_2__ MOVContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int *,char const*,int ,int ) ;
 short FUNC_1 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_2(MOVContext *VAR_3, AVIOContext *VAR_4,
                             unsigned VAR_5, const char *VAR_6)
{
    short VAR_7;

    FUNC_1(VAR_4);

    VAR_7 = FUNC_1(VAR_4);
    if (VAR_7 < 1 || VAR_7 > VAR_1)
        return 0;
    VAR_3->fc->event_flags |= VAR_0;
    FUNC_0(&VAR_3->fc->metadata, VAR_6, VAR_2[VAR_7-1], 0);

    return 0;
}
