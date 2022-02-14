
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
 int FUNC_0 (int *,char const*,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(MOVContext *VAR_1, AVIOContext *VAR_2,
                                            unsigned VAR_3, const char *VAR_4)
{

    FUNC_1(VAR_2);
    FUNC_1(VAR_2);
    FUNC_1(VAR_2);

    VAR_1->fc->event_flags |= VAR_0;
    FUNC_0(&VAR_1->fc->metadata, VAR_4, FUNC_1(VAR_2), 0);

    return 0;
}
