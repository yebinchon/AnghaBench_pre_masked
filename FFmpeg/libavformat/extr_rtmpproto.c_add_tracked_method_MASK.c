
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int id; int name; } ;
struct TYPE_4__ {int nb_tracked_methods; int tracked_methods_size; TYPE_2__* tracked_methods; } ;
typedef TYPE_1__ RTMPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__**,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(RTMPContext *VAR_1, const char *VAR_2, int VAR_3)
{
    int VAR_4;

    if (VAR_1->nb_tracked_methods + 1 > VAR_1->tracked_methods_size) {
        VAR_1->tracked_methods_size = (VAR_1->nb_tracked_methods + 1) * 2;
        if ((VAR_4 = FUNC_1(&VAR_1->tracked_methods, VAR_1->tracked_methods_size *
                               sizeof(*VAR_1->tracked_methods))) < 0) {
            VAR_1->nb_tracked_methods = 0;
            VAR_1->tracked_methods_size = 0;
            return VAR_4;
        }
    }

    VAR_1->tracked_methods[VAR_1->nb_tracked_methods].name = FUNC_2(VAR_2);
    if (!VAR_1->tracked_methods[VAR_1->nb_tracked_methods].name)
        return FUNC_0(VAR_0);
    VAR_1->tracked_methods[VAR_1->nb_tracked_methods].id = VAR_3;
    VAR_1->nb_tracked_methods++;

    return 0;
}
