
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_9__ {scalar_t__ nitems; } ;
struct TYPE_8__ {TYPE_6__ sects; } ;
struct TYPE_7__ {int sectname; int segname; } ;
typedef TYPE_1__ KXLDSect ;
typedef TYPE_2__ KXLDObject ;


 TYPE_1__* FUNC_0 (TYPE_6__*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int) ;

KXLDSect *
FUNC_2(const KXLDObject *VAR_0, const char *VAR_1,
    const char *VAR_2)
{
    KXLDSect *VAR_3 = ((void*)0);
    u_int VAR_4 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_0->sects.nitems; ++VAR_4) {
        VAR_3 = FUNC_0(&VAR_0->sects, VAR_4);

        if (FUNC_1(VAR_1, VAR_3->segname, sizeof(VAR_3->segname)) &&
            FUNC_1(VAR_2, VAR_3->sectname, sizeof(VAR_3->sectname)))
        {
            break;
        }

        VAR_3 = ((void*)0);
    }

    return VAR_3;
}
