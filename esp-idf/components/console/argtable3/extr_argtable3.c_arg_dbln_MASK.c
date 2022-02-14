
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* shortopts; char const* longopts; char const* datatype; char const* glossary; int mincount; int maxcount; int * errorfn; int * checkfn; int * scanfn; int * resetfn; struct arg_dbl* parent; int flag; } ;
struct arg_dbl {double* dval; scalar_t__ count; TYPE_1__ hdr; } ;
typedef int arg_scanfn ;
typedef int arg_resetfn ;
typedef int arg_errorfn ;
typedef int arg_checkfn ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (size_t) ;

struct arg_dbl * FUNC_2(
    const char * VAR_5,
    const char * VAR_6,
    const char *VAR_7,
    int VAR_8,
    int VAR_9,
    const char *VAR_10)
{
    size_t VAR_11;
    struct arg_dbl *VAR_12;


    VAR_9 = (VAR_9 < VAR_8) ? VAR_8 : VAR_9;

    VAR_11 = sizeof(struct arg_dbl)
             + (VAR_9 + 1) * sizeof(double);

    VAR_12 = (struct arg_dbl *)FUNC_1(VAR_11);
    if (VAR_12)
    {
        size_t VAR_13;
        size_t VAR_14;


        VAR_12->hdr.flag = VAR_0;
        VAR_12->hdr.shortopts = VAR_5;
        VAR_12->hdr.longopts = VAR_6;
        VAR_12->hdr.datatype = VAR_7 ? VAR_7 : "<double>";
        VAR_12->hdr.glossary = VAR_10;
        VAR_12->hdr.mincount = VAR_8;
        VAR_12->hdr.maxcount = VAR_9;
        VAR_12->hdr.parent = VAR_12;
        VAR_12->hdr.resetfn = (arg_resetfn *)VAR_3;
        VAR_12->hdr.scanfn = (arg_scanfn *)VAR_4;
        VAR_12->hdr.checkfn = (arg_checkfn *)VAR_1;
        VAR_12->hdr.errorfn = (arg_errorfn *)VAR_2;






        VAR_13 = (size_t)(VAR_12 + 1);
        VAR_14 = VAR_13 % sizeof(double);
        VAR_12->dval = (double *)(VAR_13 + sizeof(double) - VAR_14);
        FUNC_0(("addr=%p, dval=%p, sizeof(double)=%d rem=%d\n", VAR_13, VAR_12->dval, (int)sizeof(double), (int)VAR_14));

        VAR_12->count = 0;
    }

    FUNC_0(("arg_dbln() returns %p\n", VAR_12));
    return VAR_12;
}
