
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char uint8_t ;
typedef int ssize_t ;
struct TYPE_10__ {scalar_t__ content_len; char* uri; } ;
typedef TYPE_2__ httpd_req_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_11__ {int sec_inst; TYPE_1__* sec; } ;
struct TYPE_9__ {scalar_t__ (* close_transport_session ) (int ,int) ;scalar_t__ (* new_transport_session ) (int ,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char*,size_t) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 TYPE_3__* VAR_6 ;
 scalar_t__ FUNC_8 (TYPE_3__*,char const*,int,char*,size_t,char**,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ,int) ;

__attribute__((used)) static esp_err_t FUNC_11(httpd_req_t *VAR_8)
{
    esp_err_t VAR_9;
    uint8_t *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);
    const char *VAR_12 = ((void*)0);
    ssize_t VAR_13;

    int VAR_14 = FUNC_5(VAR_8);

    if (VAR_14 != VAR_7) {

        if (VAR_7 != VAR_4) {
            FUNC_0(VAR_5, "Closing session with ID: %d", VAR_7);


            if (VAR_6->sec && VAR_6->sec->close_transport_session) {
                VAR_9 = VAR_6->sec->close_transport_session(VAR_6->sec_inst, VAR_7);
                if (VAR_9 != VAR_2) {
                    FUNC_2(VAR_5, "Error closing session with ID: %d", VAR_7);
                }
            }
            VAR_7 = VAR_4;
        }
        if (VAR_6->sec && VAR_6->sec->new_transport_session) {
            VAR_9 = VAR_6->sec->new_transport_session(VAR_6->sec_inst, VAR_14);
            if (VAR_9 != VAR_2) {
                FUNC_1(VAR_5, "Failed to launch new session with ID: %d", VAR_14);
                VAR_9 = VAR_1;
                goto out;
            }
        }
        VAR_7 = VAR_14;
        FUNC_0(VAR_5, "New session with ID: %d", VAR_14);
    }

    if (VAR_8->content_len <= 0) {
        FUNC_1(VAR_5, "Content length not found");
        VAR_9 = VAR_1;
        goto out;
    } else if (VAR_8->content_len > VAR_3) {
        FUNC_1(VAR_5, "Request content length should be less than 4kb");
        VAR_9 = VAR_1;
        goto out;
    }

    VAR_11 = (char *) FUNC_7(VAR_8->content_len);
    if (!VAR_11) {
        FUNC_1(VAR_5, "Unable to allocate for request length %d", VAR_8->content_len);
        VAR_9 = VAR_0;
        goto out;
    }

    size_t VAR_15 = 0;
    while (VAR_15 < VAR_8->content_len) {
        VAR_9 = FUNC_4(VAR_8, VAR_11 + VAR_15, VAR_8->content_len - VAR_15);
        if (VAR_9 < 0) {
            VAR_9 = VAR_1;
            goto out;
        }
        VAR_15 += VAR_9;
    }


    VAR_12 = VAR_8->uri + 1;

    VAR_9 = FUNC_8(VAR_6, VAR_12, VAR_7,
                               (uint8_t *)VAR_11, VAR_15, &VAR_10, &VAR_13);

    if (VAR_9 != VAR_2) {
        FUNC_1(VAR_5, "Data handler failed");
        VAR_9 = VAR_1;
        goto out;
    }

    VAR_9 = FUNC_6(VAR_8, (char *)VAR_10, VAR_13);
    if (VAR_9 != VAR_2) {
        FUNC_1(VAR_5, "HTTP send failed");
        VAR_9 = VAR_1;
        goto out;
    }
    VAR_9 = VAR_2;
out:
    if (VAR_11) {
        FUNC_3(VAR_11);
    }
    if (VAR_10) {
        FUNC_3(VAR_10);
    }
    return VAR_9;
}
