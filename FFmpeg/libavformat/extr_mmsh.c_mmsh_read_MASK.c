
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_10__ {scalar_t__ asf_header_read_size; scalar_t__ asf_header_size; int remaining_in_len; } ;
struct TYPE_9__ {TYPE_3__ mms; } ;
typedef TYPE_2__ MMSHContext ;
typedef TYPE_3__ MMSContext ;


 int FUNC_0 (TYPE_3__*,int *,int) ;
 int FUNC_1 (TYPE_3__*,int *,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(URLContext *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    MMSHContext *VAR_4 = VAR_0->priv_data;
    MMSContext *VAR_5 = &VAR_4->mms;
    do {
        if (VAR_5->asf_header_read_size < VAR_5->asf_header_size) {

            VAR_3 = FUNC_1(VAR_5, VAR_1, VAR_2);
        } else {
            if (!VAR_5->remaining_in_len && (VAR_3 = FUNC_2(VAR_4)))
                return VAR_3;
            VAR_3 = FUNC_0(VAR_5, VAR_1, VAR_2);
        }
    } while (!VAR_3);
    return VAR_3;
}
