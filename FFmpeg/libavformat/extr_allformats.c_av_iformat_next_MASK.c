
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ AVInputFormat ;


 scalar_t__ FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

AVInputFormat *FUNC_2(const AVInputFormat *VAR_2)
{
    FUNC_1(&VAR_1, VAR_0);

    if (VAR_2)



        return (AVInputFormat *) VAR_2->next;

    else {
        void *VAR_3 = ((void*)0);
        return (AVInputFormat *)FUNC_0(&VAR_3);
    }
}
