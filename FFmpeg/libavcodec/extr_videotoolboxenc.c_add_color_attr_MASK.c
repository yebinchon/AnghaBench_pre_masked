
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ycbcr_matrix; scalar_t__ transfer_function; scalar_t__ color_primaries; } ;
typedef TYPE_1__ VTEncContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef int CFMutableDictionaryRef ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_3, CFMutableDictionaryRef VAR_4) {
    VTEncContext *VAR_5 = VAR_3->priv_data;

    if (VAR_5->color_primaries) {
        FUNC_0(VAR_4,
                             VAR_0,
                             VAR_5->color_primaries);
    }

    if (VAR_5->transfer_function) {
        FUNC_0(VAR_4,
                             VAR_1,
                             VAR_5->transfer_function);
    }

    if (VAR_5->ycbcr_matrix) {
        FUNC_0(VAR_4,
                             VAR_2,
                             VAR_5->ycbcr_matrix);
    }
}
