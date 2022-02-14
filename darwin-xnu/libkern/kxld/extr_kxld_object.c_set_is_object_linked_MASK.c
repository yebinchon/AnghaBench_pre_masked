
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_13__ {scalar_t__ nitems; } ;
struct TYPE_10__ {int nitems; } ;
struct TYPE_12__ {int is_linked; TYPE_8__ sects; TYPE_2__ extrelocs; scalar_t__ is_final_image; } ;
struct TYPE_9__ {scalar_t__ nitems; } ;
struct TYPE_11__ {TYPE_1__ relocs; } ;
typedef TYPE_3__ KXLDSect ;
typedef TYPE_4__ KXLDObject ;


 int VAR_0 ;
 void* VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_8__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2(KXLDObject *VAR_2)
{
    u_int VAR_3 = 0;

    if (FUNC_1(VAR_2)) {
        VAR_2->is_linked = VAR_1;
        return;
    }

    if (VAR_2->is_final_image) {
        VAR_2->is_linked = !VAR_2->extrelocs.nitems;
        return;
    }

    VAR_2->is_linked = VAR_1;
    for (VAR_3 = 0; VAR_3 < VAR_2->sects.nitems; ++VAR_3) {
        KXLDSect *VAR_4 = FUNC_0(&VAR_2->sects, VAR_3);
        if (VAR_4->relocs.nitems) {
            VAR_2->is_linked = VAR_0;
            break;
        }
    }
}
