
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int buf_stailq_t ;
struct TYPE_7__ {scalar_t__ owner; } ;
typedef TYPE_1__ buf_desc_t ;
struct TYPE_8__ {int recv_link_list; } ;


 TYPE_1__* FUNC_0 (int * const) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline buf_desc_t* FUNC_2(void)
{
    buf_stailq_t *const VAR_2 = &VAR_0.recv_link_list;
    buf_desc_t *VAR_3 = FUNC_0(VAR_2);
    while(VAR_3 && VAR_3->owner == 0) {
        VAR_3 = FUNC_1(VAR_3, VAR_1);
    }
    return VAR_3;
}
