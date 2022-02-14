
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct SRTPContext {int dummy; } ;


 int FUNC_0 (struct SRTPContext*,int *,int*) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct SRTPContext *VAR_0, const uint8_t *VAR_1, int VAR_2,
                        uint8_t *VAR_3)
{
    FUNC_1(VAR_3, VAR_1, VAR_2);
    if (!FUNC_0(VAR_0, VAR_3, &VAR_2)) {
        FUNC_2(VAR_3, VAR_2);
        return VAR_2;
    } else
        return -1;
}
