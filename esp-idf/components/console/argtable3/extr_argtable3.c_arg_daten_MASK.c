
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm {int dummy; } ;
struct TYPE_2__ {char const* shortopts; char const* longopts; char const* datatype; char const* glossary; int mincount; int maxcount; int * errorfn; int * checkfn; int * scanfn; int * resetfn; struct arg_date* parent; int flag; } ;
struct arg_date {char const* format; scalar_t__ count; struct tm* tmval; TYPE_1__ hdr; } ;
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
 scalar_t__ FUNC_1 (int,size_t) ;

struct arg_date * FUNC_2(
    const char * VAR_5,
    const char * VAR_6,
    const char * VAR_7,
    const char *VAR_8,
    int VAR_9,
    int VAR_10,
    const char *VAR_11)
{
    size_t VAR_12;
    struct arg_date *VAR_13;


    VAR_10 = (VAR_10 < VAR_9) ? VAR_9 : VAR_10;


    if (!VAR_7)
        VAR_7 = "%x";

    VAR_12 = sizeof(struct arg_date)
        + VAR_10 * sizeof(struct tm);



    VAR_13 = (struct arg_date *)FUNC_1(1, VAR_12);
    if (VAR_13)
    {

        VAR_13->hdr.flag = VAR_0;
        VAR_13->hdr.shortopts = VAR_5;
        VAR_13->hdr.longopts = VAR_6;
        VAR_13->hdr.datatype = VAR_8 ? VAR_8 : VAR_7;
        VAR_13->hdr.glossary = VAR_11;
        VAR_13->hdr.mincount = VAR_9;
        VAR_13->hdr.maxcount = VAR_10;
        VAR_13->hdr.parent = VAR_13;
        VAR_13->hdr.resetfn = (arg_resetfn *)VAR_3;
        VAR_13->hdr.scanfn = (arg_scanfn *)VAR_4;
        VAR_13->hdr.checkfn = (arg_checkfn *)VAR_1;
        VAR_13->hdr.errorfn = (arg_errorfn *)VAR_2;


        VAR_13->tmval = (struct tm *)(VAR_13 + 1);


        VAR_13->count = 0;
        VAR_13->format = VAR_7;
    }

    FUNC_0(("arg_daten() returns %p\n", VAR_13));
    return VAR_13;
}
