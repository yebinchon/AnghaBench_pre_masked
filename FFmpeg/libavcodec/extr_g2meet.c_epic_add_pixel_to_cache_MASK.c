
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {struct TYPE_6__* next; int pixel; } ;
typedef TYPE_1__ ePICPixListElem ;
struct TYPE_7__ {TYPE_1__* list; } ;
typedef TYPE_2__ ePICPixHashElem ;
typedef int ePICPixHash ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 TYPE_2__* FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(ePICPixHash *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
    ePICPixListElem *VAR_4;
    ePICPixHashElem *VAR_5 = FUNC_3(VAR_1, VAR_2);

    if (!VAR_5) {
        if (!(VAR_5 = FUNC_2(VAR_1, VAR_2)))
            return FUNC_0(VAR_0);
    }

    VAR_4 = FUNC_1(sizeof(*VAR_4));
    if (!VAR_4)
        return FUNC_0(VAR_0);

    VAR_4->pixel = VAR_3;
    VAR_4->next = VAR_5->list;
    VAR_5->list = VAR_4;

    return 0;
}
