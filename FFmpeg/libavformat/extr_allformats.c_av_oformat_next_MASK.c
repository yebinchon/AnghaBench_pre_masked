
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ AVOutputFormat ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void**) ;
 int FUNC_1 (int *,int ) ;

AVOutputFormat *FUNC_2(const AVOutputFormat *VAR_2)
{
    FUNC_1(&VAR_1, VAR_0);

    if (VAR_2)



        return (AVOutputFormat *) VAR_2->next;

    else {
        void *VAR_3 = ((void*)0);
        return (AVOutputFormat *)FUNC_0(&VAR_3);
    }
}
