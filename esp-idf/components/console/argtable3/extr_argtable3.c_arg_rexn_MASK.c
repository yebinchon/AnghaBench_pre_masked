
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct privhdr {char const* pattern; int flags; } ;
struct TYPE_2__ {char const* shortopts; char const* longopts; char const* datatype; char const* glossary; int mincount; int maxcount; struct arg_rex* priv; int * errorfn; int * checkfn; int * scanfn; int * resetfn; struct arg_rex* parent; int flag; } ;
struct arg_rex {char const** sval; scalar_t__ count; TYPE_1__ hdr; } ;
typedef int arg_scanfn ;
typedef int arg_resetfn ;
typedef int arg_errorfn ;
typedef int arg_checkfn ;
typedef int TRexChar ;
typedef int TRex ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int const* FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char const*,int const**,int) ;
 int FUNC_6 (int *) ;

struct arg_rex * FUNC_7(const char * VAR_5,
                          const char * VAR_6,
                          const char * VAR_7,
                          const char *VAR_8,
                          int VAR_9,
                          int VAR_10,
                          int VAR_11,
                          const char *VAR_12)
{
    size_t VAR_13;
    struct arg_rex *VAR_14;
    struct privhdr *VAR_15;
    int VAR_16;
    const TRexChar *VAR_17 = ((void*)0);
    TRex *VAR_18 = ((void*)0);

    if (!VAR_7)
    {
        FUNC_4(
            "argtable: ERROR - illegal regular expression pattern \"(NULL)\"\n");
        FUNC_4("argtable: Bad argument table.\n");
        return ((void*)0);
    }


    VAR_10 = (VAR_10 < VAR_9) ? VAR_9 : VAR_10;

    VAR_13 = sizeof(struct arg_rex)
             + sizeof(struct privhdr)
             + VAR_10 * sizeof(char *);

    VAR_14 = (struct arg_rex *)FUNC_3(VAR_13);
    if (VAR_14 == ((void*)0))
        return VAR_14;


    VAR_14->hdr.flag = VAR_0;
    VAR_14->hdr.shortopts = VAR_5;
    VAR_14->hdr.longopts = VAR_6;
    VAR_14->hdr.datatype = VAR_8 ? VAR_8 : VAR_7;
    VAR_14->hdr.glossary = VAR_12;
    VAR_14->hdr.mincount = VAR_9;
    VAR_14->hdr.maxcount = VAR_10;
    VAR_14->hdr.parent = VAR_14;
    VAR_14->hdr.resetfn = (arg_resetfn *)VAR_3;
    VAR_14->hdr.scanfn = (arg_scanfn *)VAR_4;
    VAR_14->hdr.checkfn = (arg_checkfn *)VAR_1;
    VAR_14->hdr.errorfn = (arg_errorfn *)VAR_2;


    VAR_14->hdr.priv = VAR_14 + 1;
    VAR_15 = (struct privhdr *)(VAR_14->hdr.priv);
    VAR_15->pattern = VAR_7;
    VAR_15->flags = VAR_11;


    VAR_14->sval = (const char * *)(VAR_15 + 1);
    VAR_14->count = 0;


    for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
        VAR_14->sval[VAR_16] = "";







    VAR_18 = FUNC_5(VAR_15->pattern, &VAR_17, VAR_15->flags);
    if (VAR_18 == ((void*)0))
    {
        FUNC_0(("argtable: %s \"%s\"\n", VAR_17 ? VAR_17 : FUNC_2("undefined"), VAR_15->pattern));
        FUNC_0(("argtable: Bad argument table.\n"));
    }

    FUNC_6(VAR_18);

    FUNC_1(("arg_rexn() returns %p\n", VAR_14));
    return VAR_14;
}
