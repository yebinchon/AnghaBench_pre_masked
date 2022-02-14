
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sh2lib_handle {int dummy; } ;
typedef int ssize_t ;
typedef int (* sh2lib_putpost_data_cb_t ) (struct sh2lib_handle*,char*,size_t,int *) ;
typedef int nghttp2_session ;
struct TYPE_3__ {int (* ptr ) (struct sh2lib_handle*,char*,size_t,int *) ;} ;
typedef TYPE_1__ nghttp2_data_source ;
typedef int int32_t ;


 int FUNC_0 (struct sh2lib_handle*,char*,size_t,int *) ;

ssize_t FUNC_1(nghttp2_session *VAR_0, int32_t VAR_1, uint8_t *VAR_2,
                                size_t VAR_3, uint32_t *VAR_4,
                                nghttp2_data_source *VAR_5, void *VAR_6)
{
    struct sh2lib_handle *VAR_7 = VAR_6;
    sh2lib_putpost_data_cb_t VAR_8 = VAR_5->ptr;
    return (*VAR_8)(VAR_7, (char *)VAR_2, VAR_3, VAR_4);
}
