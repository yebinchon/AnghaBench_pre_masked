
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int * kextExecutable; } ;
struct TYPE_6__ {TYPE_1__ split_info; int * file; } ;
typedef TYPE_2__ KXLDObject ;


 int FUNC_0 (TYPE_2__ const*) ;
 scalar_t__ VAR_0 ;

const u_char *
FUNC_1(const KXLDObject *VAR_1)
{
    const u_char *VAR_2;

    FUNC_0(VAR_1);

    if (VAR_0) {
        VAR_2 = VAR_1->file;
    }
    else {
        VAR_2 = VAR_1->split_info.kextExecutable;
    }

    return VAR_2;
}
