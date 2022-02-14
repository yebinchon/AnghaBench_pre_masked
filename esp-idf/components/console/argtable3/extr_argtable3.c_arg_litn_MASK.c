
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* shortopts; char const* longopts; char const* glossary; int mincount; int maxcount; int * errorfn; int * checkfn; int * scanfn; int * resetfn; struct arg_lit* parent; int * datatype; scalar_t__ flag; } ;
struct arg_lit {scalar_t__ count; TYPE_1__ hdr; } ;
typedef int arg_scanfn ;
typedef int arg_resetfn ;
typedef int arg_errorfn ;
typedef int arg_checkfn ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;

struct arg_lit * FUNC_2(
    const char *VAR_4,
    const char *VAR_5,
    int VAR_6,
    int VAR_7,
    const char *VAR_8)
{
    struct arg_lit *VAR_9;


    VAR_7 = (VAR_7 < VAR_6) ? VAR_6 : VAR_7;

    VAR_9 = (struct arg_lit *)FUNC_1(sizeof(struct arg_lit));
    if (VAR_9)
    {

        VAR_9->hdr.flag = 0;
        VAR_9->hdr.shortopts = VAR_4;
        VAR_9->hdr.longopts = VAR_5;
        VAR_9->hdr.datatype = ((void*)0);
        VAR_9->hdr.glossary = VAR_8;
        VAR_9->hdr.mincount = VAR_6;
        VAR_9->hdr.maxcount = VAR_7;
        VAR_9->hdr.parent = VAR_9;
        VAR_9->hdr.resetfn = (arg_resetfn *)VAR_2;
        VAR_9->hdr.scanfn = (arg_scanfn *)VAR_3;
        VAR_9->hdr.checkfn = (arg_checkfn *)VAR_0;
        VAR_9->hdr.errorfn = (arg_errorfn *)VAR_1;


        VAR_9->count = 0;
    }

    FUNC_0(("arg_litn() returns %p\n", VAR_9));
    return VAR_9;
}
