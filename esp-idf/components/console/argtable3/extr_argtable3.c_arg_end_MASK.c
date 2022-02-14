
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mincount; int maxcount; int * errorfn; int * checkfn; int * scanfn; int * resetfn; struct arg_end* parent; int * glossary; int * datatype; int * longopts; int * shortopts; int flag; } ;
struct arg_end {int* error; void** parent; char const** argval; TYPE_1__ hdr; } ;
typedef int arg_resetfn ;
typedef int arg_errorfn ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (size_t) ;

struct arg_end * FUNC_2(int VAR_3)
{
    size_t VAR_4;
    struct arg_end *VAR_5;

    VAR_4 = sizeof(struct arg_end)
             + VAR_3 * sizeof(int)
             + VAR_3 * sizeof(void *)
             + VAR_3 * sizeof(char *);

    VAR_5 = (struct arg_end *)FUNC_1(VAR_4);
    if (VAR_5)
    {

        VAR_5->hdr.flag = VAR_0;
        VAR_5->hdr.shortopts = ((void*)0);
        VAR_5->hdr.longopts = ((void*)0);
        VAR_5->hdr.datatype = ((void*)0);
        VAR_5->hdr.glossary = ((void*)0);
        VAR_5->hdr.mincount = 1;
        VAR_5->hdr.maxcount = VAR_3;
        VAR_5->hdr.parent = VAR_5;
        VAR_5->hdr.resetfn = (arg_resetfn *)VAR_2;
        VAR_5->hdr.scanfn = ((void*)0);
        VAR_5->hdr.checkfn = ((void*)0);
        VAR_5->hdr.errorfn = (arg_errorfn *)VAR_1;


        VAR_5->error = (int *)(VAR_5 + 1);


        VAR_5->parent = (void * *)(VAR_5->error + VAR_3 );


        VAR_5->argval = (const char * *)(VAR_5->parent + VAR_3 );
    }

    FUNC_0(("arg_end(%d) returns %p\n", VAR_3, VAR_5));
    return VAR_5;
}
