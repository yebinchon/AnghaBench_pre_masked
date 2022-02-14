
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_4__* esp_http_client_handle_t ;
struct TYPE_8__ {size_t method; char* path; char* query; } ;
struct TYPE_11__ {int buffer_size_tx; TYPE_3__* request; TYPE_1__ connection_info; } ;
struct TYPE_10__ {TYPE_2__* buffer; int headers; } ;
struct TYPE_9__ {scalar_t__ data; } ;


 char* VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,char*,char*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,char*,char*,int) ;
 int FUNC_4 (scalar_t__,int,char*,char const*,...) ;

__attribute__((used)) static int FUNC_5(esp_http_client_handle_t VAR_4, int VAR_5)
{
    if (VAR_5 >= 0) {
        FUNC_3(VAR_4->request->headers, "Content-Length", "%d", VAR_5);
    } else {
        FUNC_1(VAR_4, "Transfer-Encoding", "chunked");
        FUNC_2(VAR_4, VAR_2);
    }

    const char *VAR_6 = VAR_1[VAR_4->connection_info.method];

    int VAR_7 = FUNC_4(VAR_4->request->buffer->data,
                                  VAR_4->buffer_size_tx, "%s %s",
                                  VAR_6,
                                  VAR_4->connection_info.path);
    if (VAR_7 >= VAR_4->buffer_size_tx) {
        FUNC_0(VAR_3, "Out of buffer");
        return -1;
    }

    if (VAR_4->connection_info.query) {
        VAR_7 += FUNC_4(VAR_4->request->buffer->data + VAR_7,
                                   VAR_4->buffer_size_tx - VAR_7, "?%s", VAR_4->connection_info.query);
        if (VAR_7 >= VAR_4->buffer_size_tx) {
            FUNC_0(VAR_3, "Out of buffer");
            return -1;

        }
    }
    VAR_7 += FUNC_4(VAR_4->request->buffer->data + VAR_7,
                               VAR_4->buffer_size_tx - VAR_7, " %s\r\n", VAR_0);
    if (VAR_7 >= VAR_4->buffer_size_tx) {
        FUNC_0(VAR_3, "Out of buffer");
        return -1;
    }
    return VAR_7;
}
