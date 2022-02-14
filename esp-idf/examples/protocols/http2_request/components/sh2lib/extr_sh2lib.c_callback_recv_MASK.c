
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sh2lib_handle {int http2_tls; } ;
typedef int ssize_t ;
typedef int nghttp2_session ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(nghttp2_session *VAR_5, uint8_t *VAR_6,
                             size_t VAR_7, int VAR_8, void *VAR_9)
{
    struct sh2lib_handle *VAR_10 = VAR_9;
    int VAR_11;
    VAR_11 = FUNC_0(VAR_10->http2_tls, (char *)VAR_6, (int)VAR_7);
    if (VAR_11 < 0) {
        if (VAR_11 == VAR_0 || VAR_11 == VAR_1) {
            VAR_11 = VAR_4;
        } else {
            VAR_11 = VAR_2;
        }
    } else if (VAR_11 == 0) {
        VAR_11 = VAR_3;
    }
    return VAR_11;
}
