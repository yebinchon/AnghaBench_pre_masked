
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {int * kextExecutable; } ;
struct TYPE_9__ {int relocator; TYPE_1__ split_info; int * file; } ;
struct TYPE_8__ {int * data; } ;
typedef int KXLDSym ;
typedef TYPE_2__ KXLDSect ;
typedef int KXLDReloc ;
typedef TYPE_3__ KXLDObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__ const*) ;
 int * FUNC_1 (int *,int const*,int *) ;

const KXLDSym *
FUNC_2(const KXLDObject *VAR_1,
    const KXLDReloc *VAR_2, const KXLDSect *VAR_3)
{
    const KXLDSym *VAR_4 = ((void*)0);
    u_char *VAR_5;

    if (VAR_0) {
        VAR_5 = VAR_1->file;
    }
    else {
        VAR_5 = VAR_1->split_info.kextExecutable;
    }

    if (FUNC_0(VAR_1)) {
       VAR_4 = FUNC_1(&VAR_1->relocator, VAR_2, VAR_5);
   } else {
       VAR_4 = FUNC_1(&VAR_1->relocator, VAR_2, VAR_3->data);
   }
    return VAR_4;
}
