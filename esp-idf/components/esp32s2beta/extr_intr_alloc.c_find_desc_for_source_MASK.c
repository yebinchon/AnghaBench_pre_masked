
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int source; int cpu; struct TYPE_5__* next; TYPE_2__* shared_vec_info; } ;
typedef TYPE_1__ vector_desc_t ;
struct TYPE_6__ {int source; struct TYPE_6__* next; } ;
typedef TYPE_2__ shared_vector_desc_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static vector_desc_t * FUNC_1(int VAR_2, int VAR_3)
{
    vector_desc_t *VAR_4=VAR_1;
    while(VAR_4!=((void*)0)) {
        if ( !(VAR_4->flags & VAR_0) ) {
            if ( VAR_4->source == VAR_2 && VAR_3 == VAR_4->cpu ) break;
        } else if ( VAR_4->cpu == VAR_3 ) {

            bool VAR_5 = 0;
            shared_vector_desc_t *VAR_6 = VAR_4->shared_vec_info;
            FUNC_0(VAR_6 != ((void*)0) );
            while(VAR_6) {
                if ( VAR_6->source == VAR_2 ) {
                    VAR_5 = 1;
                    break;
                }
                VAR_6 = VAR_6->next;
            }
            if ( VAR_5 ) break;
        }
        VAR_4=VAR_4->next;
    }
    return VAR_4;
}
