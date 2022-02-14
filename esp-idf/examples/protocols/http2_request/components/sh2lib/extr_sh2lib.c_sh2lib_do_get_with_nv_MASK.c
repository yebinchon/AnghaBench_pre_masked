
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh2lib_handle {int http2_sess; } ;
typedef int sh2lib_frame_data_recv_cb_t ;
typedef int nghttp2_nv ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int const*,size_t,int *,int ) ;

int FUNC_2(struct sh2lib_handle *VAR_1, const nghttp2_nv *VAR_2, size_t VAR_3, sh2lib_frame_data_recv_cb_t VAR_4)
{
    int VAR_5 = FUNC_1(VAR_1->http2_sess, ((void*)0), VAR_2, VAR_3, ((void*)0), VAR_4);
    if (VAR_5 < 0) {
        FUNC_0(VAR_0, "[sh2-do-get] HEADERS call failed");
        return -1;
    }
    return VAR_5;
}
