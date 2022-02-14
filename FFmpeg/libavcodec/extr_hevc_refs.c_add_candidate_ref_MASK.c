
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* ref; } ;
struct TYPE_12__ {int poc; } ;
struct TYPE_11__ {size_t nb_refs; TYPE_2__** ref; int * list; } ;
typedef TYPE_1__ RefPicList ;
typedef TYPE_2__ HEVCFrame ;
typedef TYPE_3__ HEVCContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(HEVCContext *VAR_3, RefPicList *VAR_4,
                             int VAR_5, int VAR_6)
{
    HEVCFrame *VAR_7 = FUNC_1(VAR_3, VAR_5);

    if (VAR_7 == VAR_3->ref || VAR_4->nb_refs >= VAR_2)
        return VAR_0;

    if (!VAR_7) {
        VAR_7 = FUNC_2(VAR_3, VAR_5);
        if (!VAR_7)
            return FUNC_0(VAR_1);
    }

    VAR_4->list[VAR_4->nb_refs] = VAR_7->poc;
    VAR_4->ref[VAR_4->nb_refs] = VAR_7;
    VAR_4->nb_refs++;

    FUNC_3(VAR_7, VAR_6);
    return 0;
}
