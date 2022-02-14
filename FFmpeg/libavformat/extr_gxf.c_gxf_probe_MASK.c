
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int startcode ;
typedef int endcode ;
struct TYPE_3__ {int * buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1) {
    static const uint8_t VAR_2[] = {0, 0, 0, 0, 1, 0xbc};
    static const uint8_t VAR_3[] = {0, 0, 0, 0, 0xe1, 0xe2};
    if (!FUNC_0(VAR_1->buf, VAR_2, sizeof(VAR_2)) &&
        !FUNC_0(&VAR_1->buf[16 - sizeof(VAR_3)], VAR_3, sizeof(VAR_3)))
        return VAR_0;
    return 0;
}
