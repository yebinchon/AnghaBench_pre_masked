
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_int ;
typedef int u_char ;
typedef int kern_return_t ;
struct TYPE_5__ {scalar_t__ nitems; } ;
struct TYPE_4__ {int flags; int cpusubtype; int cputype; int section_order; TYPE_2__ objects; } ;
typedef int KXLDObject ;
typedef TYPE_1__ KXLDContext ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*,scalar_t__) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,char const*,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static KXLDObject *
FUNC_4(KXLDContext *VAR_1, u_char *VAR_2, u_long VAR_3,
    const char *VAR_4)
{
    KXLDObject *VAR_5 = ((void*)0);
    KXLDObject *VAR_6 = ((void*)0);
    kern_return_t VAR_7 = 0;
    u_int VAR_8 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_1->objects.nitems; ++VAR_8) {
        VAR_6 = FUNC_0(&VAR_1->objects, VAR_8);

        if (!FUNC_1(VAR_6)) {
            VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_3, VAR_4,
                VAR_1->section_order, VAR_1->cputype, VAR_1->cpusubtype, VAR_1->flags);
            FUNC_3(VAR_7, VAR_0);

            VAR_5 = VAR_6;
            break;
        }

        if (FUNC_1(VAR_6) == VAR_2) {
            VAR_5 = VAR_6;
            break;
        }
    }

finish:
    return VAR_5;
}
