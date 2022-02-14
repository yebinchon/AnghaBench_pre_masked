
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_3__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_11__ {int first_line_prepared; int data_written_index; int data_write_left; int buffer_size_tx; int post_len; int state; int timeout_ms; TYPE_2__* request; int transport; int header_index; scalar_t__ is_async; } ;
struct TYPE_10__ {TYPE_1__* buffer; int headers; } ;
struct TYPE_9__ {scalar_t__* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,scalar_t__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__*,int) ;
 int FUNC_4 (int ,scalar_t__*,int,int ) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int ,int *,int ) ;
 int FUNC_7 (int ,int ,scalar_t__*,int*) ;

__attribute__((used)) static esp_err_t FUNC_8(esp_http_client_handle_t VAR_5, int VAR_6)
{
    int VAR_7 = 0;
    if (!VAR_5->first_line_prepared) {
        if ((VAR_7 = FUNC_5(VAR_5, VAR_6)) < 0) {
            return VAR_7;
        }
        VAR_5->first_line_prepared = 1;
        VAR_5->header_index = 0;
        VAR_5->data_written_index = 0;
        VAR_5->data_write_left = 0;
    }

    if (VAR_5->data_write_left > 0) {

        int VAR_8 = 0;
        if (((VAR_8 = FUNC_3(VAR_5, VAR_5->request->buffer->data + VAR_5->data_written_index, VAR_5->data_write_left)) < 0)) {
            FUNC_1(VAR_4, "Error write request");
            return VAR_0;
        }
        VAR_5->data_write_left -= VAR_8;
        VAR_5->data_written_index += VAR_8;
        if (VAR_5->is_async && VAR_5->data_write_left > 0) {
            return VAR_0;

        }
    }

    int VAR_9 = VAR_5->buffer_size_tx - VAR_7;
    while ((VAR_5->header_index = FUNC_7(VAR_5->request->headers, VAR_5->header_index, VAR_5->request->buffer->data + VAR_7, &VAR_9))) {
        if (VAR_9 <= 0) {
            break;
        }
        if (VAR_7) {
            VAR_9 += VAR_7;
            VAR_7 = 0;
        }
        VAR_5->request->buffer->data[VAR_9] = 0;
        FUNC_0(VAR_4, "Write header[%d]: %s", VAR_5->header_index, VAR_5->request->buffer->data);

        VAR_5->data_write_left = VAR_9;
        VAR_5->data_written_index = 0;
        while (VAR_5->data_write_left > 0) {
            int VAR_10 = FUNC_4(VAR_5->transport, VAR_5->request->buffer->data + VAR_5->data_written_index, VAR_5->data_write_left, VAR_5->timeout_ms);
            if (VAR_10 <= 0) {
                FUNC_1(VAR_4, "Error write request");
                FUNC_2(VAR_5);
                return VAR_0;
            }
            VAR_5->data_write_left -= VAR_10;
            VAR_5->data_written_index += VAR_10;
        }
        VAR_9 = VAR_5->buffer_size_tx;
    }

    VAR_5->data_written_index = 0;
    VAR_5->data_write_left = VAR_5->post_len;
    FUNC_6(VAR_5, VAR_2, ((void*)0), 0);
    VAR_5->state = VAR_3;
    return VAR_1;
}
