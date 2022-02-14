
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ data_write_left; scalar_t__ data_written_index; scalar_t__ post_data; scalar_t__ post_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static esp_err_t FUNC_2(esp_http_client_handle_t VAR_6)
{
    if (VAR_6->state != VAR_4) {
        FUNC_0(VAR_5, "Invalid state");
        return VAR_1;
    }
    if (!(VAR_6->post_data && VAR_6->post_len)) {
        goto success;
    }

    int VAR_7 = FUNC_1(VAR_6, VAR_6->post_data + VAR_6->data_written_index, VAR_6->data_write_left);
    if (VAR_7 < 0) {
        return VAR_7;
    }
    VAR_6->data_write_left -= VAR_7;
    VAR_6->data_written_index += VAR_7;

    if (VAR_6->data_write_left <= 0) {
        goto success;
    } else {
        return VAR_0;
    }

success:
    VAR_6->state = VAR_3;
    return VAR_2;
}
