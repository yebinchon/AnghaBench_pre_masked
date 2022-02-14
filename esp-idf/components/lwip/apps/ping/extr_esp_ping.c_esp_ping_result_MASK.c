
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int esp_ping_found ;
typedef int esp_err_t ;
struct TYPE_4__ {scalar_t__ min_time; scalar_t__ max_time; int recv_count; int total_time; int timeout_count; int send_count; int total_bytes; scalar_t__ resp_time; scalar_t__ bytes; scalar_t__ ping_err; } ;
struct TYPE_5__ {TYPE_1__ ping_res; int (* ping_res_fn ) (int ,TYPE_1__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int ,TYPE_1__*) ;

esp_err_t FUNC_2(uint8_t VAR_5, uint16_t VAR_6, uint32_t VAR_7)
{
    esp_err_t VAR_8 = VAR_0;

    VAR_4->ping_res.ping_err = VAR_5;

    if (VAR_5 != VAR_1) {
        VAR_4->ping_res.bytes = VAR_6;
        VAR_4->ping_res.resp_time = VAR_7;
        VAR_4->ping_res.total_bytes += VAR_6;
        VAR_4->ping_res.send_count ++;

        if (VAR_5 == VAR_2) {
            VAR_4->ping_res.timeout_count ++;
        } else {
            if (!VAR_4->ping_res.min_time || (VAR_7 < VAR_4->ping_res.min_time)) {
                VAR_4->ping_res.min_time = VAR_7;
            }

            if (VAR_7 > VAR_4->ping_res.max_time) {
                VAR_4->ping_res.max_time = VAR_7;
            }


            VAR_4->ping_res.total_time += VAR_7;
            VAR_4->ping_res.recv_count ++;
        }
    }

    if (VAR_4->ping_res_fn) {
        VAR_4->ping_res_fn(VAR_3, &VAR_4->ping_res);
        if (VAR_5 == VAR_1) {
            FUNC_0(&VAR_4->ping_res, 0, sizeof(esp_ping_found));
        }
    }

    return VAR_8;
}
