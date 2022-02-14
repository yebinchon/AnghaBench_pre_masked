
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
typedef int uint32_t ;
struct AVDES {int dummy; } ;
struct TYPE_8__ {TYPE_1__* priv_data; } ;
struct TYPE_7__ {unsigned int k_size; int rid; int r_val; } ;
typedef TYPE_1__ OMAContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct AVDES* FUNC_2 () ;
 int FUNC_3 (struct AVDES*,int ,int *,int,int *,int) ;
 int FUNC_4 (struct AVDES*,int const*,int,int) ;
 int FUNC_5 (struct AVDES*) ;
 int FUNC_6 (TYPE_2__*,int ,char*) ;
 int FUNC_7 (TYPE_2__*,int ,int *,int) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (TYPE_2__*,int *,unsigned int,int ) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_3, uint8_t *VAR_4, unsigned VAR_5,
                  const uint8_t *VAR_6)
{
    OMAContext *VAR_7 = VAR_3->priv_data;
    uint64_t VAR_8;
    uint32_t VAR_9, VAR_10;
    struct AVDES *VAR_11;

    if (!VAR_4 || !VAR_6 ||
        VAR_5 < VAR_2 + VAR_7->k_size + 4)
        return -1;

    VAR_8 = VAR_2 + VAR_7->k_size;
    if (!FUNC_8(&VAR_4[VAR_8], "EKB ", 4))
        VAR_8 += 32;

    if (VAR_5 < VAR_8 + 44)
        return -1;

    if (FUNC_1(&VAR_4[VAR_8]) != VAR_7->rid)
        FUNC_6(VAR_3, VAR_0, "Mismatching RID\n");

    VAR_9 = FUNC_1(&VAR_4[VAR_8 + 32]);
    VAR_10 = FUNC_1(&VAR_4[VAR_8 + 36]) >> 4;

    VAR_8 += 44LL + VAR_9;

    if (VAR_8 + (((uint64_t)VAR_10) << 4) > VAR_5)
        return -1;

    VAR_11 = FUNC_2();
    if (!VAR_11)
        return FUNC_0(VAR_1);

    FUNC_4(VAR_11, VAR_6, 192, 1);
    while (VAR_10-- > 0) {
        FUNC_3(VAR_11, VAR_7->r_val, &VAR_4[VAR_8], 2, ((void*)0), 1);
        FUNC_7(VAR_3, VAR_7->r_val, ((void*)0), 16);
        if (!FUNC_9(VAR_3, VAR_4, VAR_5, VAR_7->r_val)) {
            FUNC_5(VAR_11);
            return 0;
        }
        VAR_8 += 16;
    }

    FUNC_5(VAR_11);
    return -1;
}
