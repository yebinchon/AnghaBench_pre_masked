
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {scalar_t__ level; int level_guess; int level_warned; } ;
typedef TYPE_1__ H265MetadataContext ;
typedef TYPE_2__ AVBSFContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static void FUNC_1(AVBSFContext *VAR_3,
                                       uint8_t *VAR_4)
{
    H265MetadataContext *VAR_5 = VAR_3->priv_data;

    if (VAR_5->level != VAR_2) {
        if (VAR_5->level == VAR_1) {
            if (VAR_5->level_guess) {
                *VAR_4 = VAR_5->level_guess;
            } else {
                if (!VAR_5->level_warned) {
                    FUNC_0(VAR_3, VAR_0, "Unable to determine level "
                           "of stream: using level 8.5.\n");
                    VAR_5->level_warned = 1;
                }
                *VAR_4 = 255;
            }
        } else {
            *VAR_4 = VAR_5->level;
        }
    }
}
