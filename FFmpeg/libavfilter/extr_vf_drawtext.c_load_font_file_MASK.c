
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int fontfile; int face; int library; } ;
typedef TYPE_1__ DrawTextContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int,int *) ;
 int FUNC_3 (TYPE_2__*,int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_2, const char *VAR_3, int VAR_4)
{
    DrawTextContext *VAR_5 = VAR_2->priv;
    int VAR_6;

    VAR_6 = FUNC_2(VAR_5->library, VAR_3, VAR_4, &VAR_5->face);
    if (VAR_6) {

        FUNC_3(VAR_2, VAR_0, "Could not load font \"%s\": %s\n",
               VAR_5->fontfile, FUNC_1(VAR_6));

        return FUNC_0(VAR_1);
    }
    return 0;
}
