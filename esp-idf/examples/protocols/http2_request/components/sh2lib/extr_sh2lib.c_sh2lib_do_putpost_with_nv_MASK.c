
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh2lib_handle {int http2_sess; } ;
typedef int sh2lib_putpost_data_cb_t ;
typedef int sh2lib_frame_data_recv_cb_t ;
typedef int nghttp2_nv ;
struct TYPE_4__ {int ptr; } ;
struct TYPE_5__ {TYPE_1__ source; int read_callback; } ;
typedef TYPE_2__ nghttp2_data_provider ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int const*,size_t,TYPE_2__*,int ) ;
 int VAR_1 ;

int FUNC_2(struct sh2lib_handle *VAR_2, const nghttp2_nv *VAR_3, size_t VAR_4,
                              sh2lib_putpost_data_cb_t VAR_5,
                              sh2lib_frame_data_recv_cb_t VAR_6)
{

    nghttp2_data_provider VAR_7;
    VAR_7.read_callback = VAR_1;
    VAR_7.source.ptr = VAR_5;
    int VAR_8 = FUNC_1(VAR_2->http2_sess, ((void*)0), VAR_3, VAR_4, &VAR_7, VAR_6);
    if (VAR_8 < 0) {
        FUNC_0(VAR_0, "[sh2-do-putpost] HEADERS call failed");
        return -1;
    }
    return VAR_8;
}
