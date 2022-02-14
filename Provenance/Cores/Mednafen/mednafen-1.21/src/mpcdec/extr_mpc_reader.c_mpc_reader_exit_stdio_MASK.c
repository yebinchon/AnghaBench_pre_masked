
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ magic; int p_file; } ;
typedef TYPE_1__ mpc_reader_stdio ;
struct TYPE_6__ {int * data; } ;
typedef TYPE_2__ mpc_reader ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(mpc_reader *VAR_1)
{
    mpc_reader_stdio *VAR_2 = (mpc_reader_stdio*) VAR_1->data;
    if(VAR_2->magic != VAR_0) return;
    FUNC_0(VAR_2->p_file);
    FUNC_1(VAR_2);
    VAR_1->data = ((void*)0);
}
