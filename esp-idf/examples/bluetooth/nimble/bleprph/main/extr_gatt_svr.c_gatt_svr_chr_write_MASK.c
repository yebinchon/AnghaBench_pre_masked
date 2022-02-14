
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct os_mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct os_mbuf*) ;
 int FUNC_1 (struct os_mbuf*,void*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct os_mbuf *VAR_2, uint16_t VAR_3, uint16_t VAR_4,
                   void *VAR_5, uint16_t *VAR_6)
{
    uint16_t VAR_7;
    int VAR_8;

    VAR_7 = FUNC_0(VAR_2);
    if (VAR_7 < VAR_3 || VAR_7 > VAR_4) {
        return VAR_0;
    }

    VAR_8 = FUNC_1(VAR_2, VAR_5, VAR_4, VAR_6);
    if (VAR_8 != 0) {
        return VAR_1;
    }

    return 0;
}
