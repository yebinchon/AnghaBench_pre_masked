
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int premultiplied_coeffs ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_3__ {int * private_data; } ;
typedef TYPE_1__ DCAADPCMEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int const) ;
 scalar_t__ FUNC_1 (int const*,int,int,int) ;
 int * VAR_2 ;

__attribute__((used)) static int64_t FUNC_2(const DCAADPCMEncContext *VAR_3, const int32_t *VAR_4, int VAR_5)
{
    const premultiplied_coeffs *VAR_6 = VAR_3->private_data;
    int VAR_7, VAR_8, VAR_9 = 0;
    int VAR_10 = -1;
    int64_t VAR_11;
    int64_t VAR_12 = 1ll << 62;
    int64_t VAR_13[15];

    for (VAR_7 = 0; VAR_7 <= VAR_0; VAR_7++)
        for (VAR_8 = VAR_7; VAR_8 <= VAR_0; VAR_8++)
            VAR_13[VAR_9++] = FUNC_1(VAR_4+4, VAR_5, VAR_7, VAR_8);

    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
        VAR_11 = FUNC_0(VAR_2[VAR_7], VAR_13, *VAR_6);
        if (VAR_11 < VAR_12) {
            VAR_12 = VAR_11;
            VAR_10 = VAR_7;
        }
        VAR_6++;
    }

    return VAR_10;
}
