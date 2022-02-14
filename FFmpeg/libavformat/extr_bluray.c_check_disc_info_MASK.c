
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {int bdplus_handled; scalar_t__ bdplus_detected; int libaacs_detected; int aacs_handled; scalar_t__ aacs_detected; int bluray_detected; } ;
struct TYPE_8__ {int bd; } ;
typedef TYPE_2__ BlurayContext ;
typedef TYPE_3__ BLURAY_DISC_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 TYPE_3__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_1)
{
    BlurayContext *VAR_2 = VAR_1->priv_data;
    const BLURAY_DISC_INFO *VAR_3;

    VAR_3 = FUNC_1(VAR_2->bd);
    if (!VAR_3) {
        FUNC_0(VAR_1, VAR_0, "bd_get_disc_info() failed\n");
        return -1;
    }

    if (!VAR_3->bluray_detected) {
        FUNC_0(VAR_1, VAR_0, "BluRay disc not detected\n");
        return -1;
    }


    if (VAR_3->aacs_detected && !VAR_3->aacs_handled) {
        if (!VAR_3->libaacs_detected) {
            FUNC_0(VAR_1, VAR_0,
                   "Media stream encrypted with AACS, install and configure libaacs\n");
        } else {
            FUNC_0(VAR_1, VAR_0, "Your libaacs can't decrypt this media\n");
        }
        return -1;
    }


    if (VAR_3->bdplus_detected && !VAR_3->bdplus_handled) {






            FUNC_0(VAR_1, VAR_0, "Unable to decrypt BD+ encrypted media\n");

        return -1;
    }

    return 0;
}
