
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ int64_t ;
typedef int AVIOContext ;





 int VAR_0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,int ) ;

__attribute__((used)) static uint64_t FUNC_3(AVIOContext *VAR_1, int64_t VAR_2)
{
    uint64_t VAR_3 = 0;

    if (VAR_2 >= 0)


        FUNC_2(VAR_1, VAR_2, VAR_0);
    while (!FUNC_0(VAR_1)) {
        VAR_3 = (VAR_3 << 8) | FUNC_1(VAR_1);
        if ((VAR_3 >> 56) != 'N')
            continue;
        switch (VAR_3) {
        case 130:
        case 129:
        case 128:
        case 131:
        case 132:
            return VAR_3;
        }
    }

    return 0;
}
