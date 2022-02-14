
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh2lib_handle {char const* hostname; } ;
typedef int sh2lib_putpost_data_cb_t ;
typedef int sh2lib_frame_data_recv_cb_t ;
typedef int nva ;
typedef int nghttp2_nv ;


 int const FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct sh2lib_handle*,int const*,int,int ,int ) ;

int FUNC_2(struct sh2lib_handle *VAR_0, const char *VAR_1,
                  sh2lib_putpost_data_cb_t VAR_2,
                  sh2lib_frame_data_recv_cb_t VAR_3)
{
    const nghttp2_nv VAR_4[] = { FUNC_0(":method", "PUT"),
                               FUNC_0(":scheme", "https"),
                               FUNC_0(":authority", VAR_0->hostname),
                               FUNC_0(":path", VAR_1),
                             };
    return FUNC_1(VAR_0, VAR_4, sizeof(VAR_4) / sizeof(VAR_4[0]), VAR_2, VAR_3);
}
