
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_hdr {int flag; int parent; int (* resetfn ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static
void FUNC_1(void * *VAR_1)
{
    struct arg_hdr * *VAR_2 = (struct arg_hdr * *)VAR_1;
    int VAR_3 = 0;

    do
    {
        if (VAR_2[VAR_3]->resetfn)
            VAR_2[VAR_3]->resetfn(VAR_2[VAR_3]->parent);
    } while(!(VAR_2[VAR_3++]->flag & VAR_0));
}
