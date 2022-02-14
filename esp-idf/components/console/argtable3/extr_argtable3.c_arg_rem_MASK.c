
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* datatype; char const* glossary; int mincount; int maxcount; int * errorfn; int * checkfn; int * scanfn; int * resetfn; struct arg_rem* parent; int * longopts; int * shortopts; scalar_t__ flag; } ;
struct arg_rem {TYPE_1__ hdr; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;

struct arg_rem *FUNC_2(const char *VAR_0, const char *VAR_1)
{
    struct arg_rem *VAR_2 = (struct arg_rem *)FUNC_1(sizeof(struct arg_rem));
    if (VAR_2)
    {
        VAR_2->hdr.flag = 0;
        VAR_2->hdr.shortopts = ((void*)0);
        VAR_2->hdr.longopts = ((void*)0);
        VAR_2->hdr.datatype = VAR_0;
        VAR_2->hdr.glossary = VAR_1;
        VAR_2->hdr.mincount = 1;
        VAR_2->hdr.maxcount = 1;
        VAR_2->hdr.parent = VAR_2;
        VAR_2->hdr.resetfn = ((void*)0);
        VAR_2->hdr.scanfn = ((void*)0);
        VAR_2->hdr.checkfn = ((void*)0);
        VAR_2->hdr.errorfn = ((void*)0);
    }

    FUNC_0(("arg_rem() returns %p\n", VAR_2));
    return VAR_2;
}
