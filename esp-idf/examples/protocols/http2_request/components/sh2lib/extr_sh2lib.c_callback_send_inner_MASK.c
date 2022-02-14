
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sh2lib_handle {int http2_tls; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(struct sh2lib_handle *VAR_4, const uint8_t *VAR_5,
                                   size_t VAR_6)
{
    int VAR_7 = FUNC_0(VAR_4->http2_tls, VAR_5, VAR_6);
    if (VAR_7 <= 0) {
        if (VAR_7 == VAR_0 || VAR_7 == VAR_1) {
            VAR_7 = VAR_3;
        } else {
            VAR_7 = VAR_2;
        }
    }
    return VAR_7;
}
