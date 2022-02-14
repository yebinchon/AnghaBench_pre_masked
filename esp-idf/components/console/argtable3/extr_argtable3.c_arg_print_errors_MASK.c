
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_hdr {int (* errorfn ) (scalar_t__,int *,int ,int ,char const*) ;} ;
struct arg_end {int count; int * argval; int * error; scalar_t__* parent; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int *,int ,int ,char const*) ;

void FUNC_2(FILE * VAR_0, struct arg_end * VAR_1, const char * VAR_2)
{
    int VAR_3;
    FUNC_0(("arg_errors()\n"));
    for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++)
    {
        struct arg_hdr *VAR_4 = (struct arg_hdr *)(VAR_1->parent[VAR_3]);
        if (VAR_4->errorfn)
            VAR_4->errorfn(VAR_1->parent[VAR_3],
                                 VAR_0,
                                 VAR_1->error[VAR_3],
                                 VAR_1->argval[VAR_3],
                                 VAR_2);
    }
}
