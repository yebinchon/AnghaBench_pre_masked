
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* p_attr_list; } ;
typedef TYPE_2__ tGATT_SVC_DB ;
struct TYPE_9__ {TYPE_2__ svc_db; } ;
typedef TYPE_3__ tGATT_HDL_LIST_ELEM ;
struct TYPE_7__ {int * attr_val; } ;
struct TYPE_10__ {TYPE_1__ attr_val; } ;
typedef TYPE_4__ tGATT_ATTR_VALUE ;
struct TYPE_11__ {int mask; struct TYPE_11__* p_next; TYPE_4__* p_value; } ;
typedef TYPE_5__ tGATT_ATTR16 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(tGATT_HDL_LIST_ELEM *VAR_1)
{
    if (VAR_1){
        tGATT_SVC_DB *VAR_2 = &(VAR_1->svc_db);
        tGATT_ATTR16 *VAR_3 = VAR_2->p_attr_list;
        tGATT_ATTR_VALUE *VAR_4 = ((void*)0);

        while(VAR_3){
            if (VAR_3->mask & VAR_0){
                VAR_4 = VAR_3->p_value;
                if ((VAR_4 != ((void*)0)) && (VAR_4->attr_val.attr_val != ((void*)0))){
                    FUNC_0(VAR_4->attr_val.attr_val);
                }
            }
            VAR_3 = VAR_3->p_next;
        }
    }
}
