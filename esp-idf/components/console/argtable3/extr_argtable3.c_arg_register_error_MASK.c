
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t maxcount; } ;
struct arg_end {size_t count; int* error; char const** argval; TYPE_1__ hdr; struct arg_end** parent; } ;


 int VAR_0 ;

__attribute__((used)) static
void FUNC_0(struct arg_end *VAR_1,
                        void *VAR_2,
                        int VAR_3,
                        const char *VAR_4)
{

    if (VAR_1->count < VAR_1->hdr.maxcount)
    {
        VAR_1->error[VAR_1->count] = VAR_3;
        VAR_1->parent[VAR_1->count] = VAR_2;
        VAR_1->argval[VAR_1->count] = VAR_4;
        VAR_1->count++;
    }
    else
    {
        VAR_1->error[VAR_1->hdr.maxcount - 1] = VAR_0;
        VAR_1->parent[VAR_1->hdr.maxcount - 1] = VAR_1;
        VAR_1->argval[VAR_1->hdr.maxcount - 1] = ((void*)0);
    }
}
