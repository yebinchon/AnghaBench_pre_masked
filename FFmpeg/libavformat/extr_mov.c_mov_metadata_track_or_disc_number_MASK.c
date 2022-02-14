
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
struct TYPE_5__ {TYPE_1__* fc; } ;
struct TYPE_4__ {int metadata; int event_flags; } ;
typedef TYPE_2__ MOVContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,char*,int ) ;
 short FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,short,...) ;

__attribute__((used)) static int FUNC_3(MOVContext *VAR_1, AVIOContext *VAR_2,
                                             unsigned VAR_3, const char *VAR_4)
{
    char VAR_5[16];

    short VAR_6, VAR_7 = 0;
    FUNC_1(VAR_2);
    VAR_6 = FUNC_1(VAR_2);
    if (VAR_3 >= 6)
        VAR_7 = FUNC_1(VAR_2);
    if (!VAR_7)
        FUNC_2(VAR_5, sizeof(VAR_5), "%d", VAR_6);
    else
        FUNC_2(VAR_5, sizeof(VAR_5), "%d/%d", VAR_6, VAR_7);
    VAR_1->fc->event_flags |= VAR_0;
    FUNC_0(&VAR_1->fc->metadata, VAR_4, VAR_5, 0);

    return 0;
}
