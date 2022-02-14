
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sh2lib_handle {int dummy; } ;
typedef int ssize_t ;
typedef int nghttp2_session ;


 int FUNC_0 (struct sh2lib_handle*,int const*,int) ;

__attribute__((used)) static ssize_t FUNC_1(nghttp2_session *VAR_0, const uint8_t *VAR_1,
                             size_t VAR_2, int VAR_3, void *VAR_4)
{
    int VAR_5 = 0;
    struct sh2lib_handle *VAR_6 = VAR_4;

    int VAR_7 = 0;
    int VAR_8 = VAR_2;


    while (VAR_7 != VAR_2) {
        int VAR_9 = VAR_8 > 1000 ? 1000 : VAR_8;
        int VAR_10 = FUNC_0(VAR_6, VAR_1 + VAR_7, VAR_9);
        if (VAR_10 <= 0) {
            if (VAR_7 == 0) {

                VAR_5 = VAR_10;
            }
            break;
        }
        VAR_7 += VAR_10;
        VAR_8 -= VAR_10;
        VAR_5 += VAR_10;
    }
    return VAR_5;
}
