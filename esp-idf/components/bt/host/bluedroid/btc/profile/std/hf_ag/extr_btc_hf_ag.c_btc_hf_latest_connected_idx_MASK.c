
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_5__ {scalar_t__ connection_state; TYPE_1__ connected_timestamp; } ;
struct TYPE_6__ {TYPE_2__ btc_hf_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct timespec*) ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static int FUNC_1(void)
{
    struct timespec VAR_5, VAR_6;
    int VAR_7 = VAR_0;
    FUNC_0(VAR_1, &VAR_5);
    VAR_6.tv_sec = VAR_5.tv_sec;

    for (int VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
        if (VAR_4[VAR_8].btc_hf_cb.connection_state == VAR_2) {
            if ((VAR_5.tv_sec - VAR_4[VAR_8].btc_hf_cb.connected_timestamp.tv_sec) < VAR_6.tv_sec) {
                VAR_6.tv_sec = VAR_5.tv_sec - VAR_4[VAR_8].btc_hf_cb.connected_timestamp.tv_sec;
                VAR_7 = VAR_8;
            }
        }
    }
    return VAR_7;
}
