
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,unsigned char const*,int) ;
 int FUNC_6 (unsigned char*,unsigned char const*,int ) ;
 int FUNC_7 (unsigned char*,int ,int ) ;

__attribute__((used)) static const unsigned char *FUNC_8(const unsigned char *VAR_0,
                                                 const unsigned char *VAR_1,
                                                 unsigned char *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    GetBitContext VAR_7;
    int VAR_8[64];


    FUNC_5(&VAR_7, VAR_0, (VAR_1 - VAR_0) * 8);
    for (VAR_4 = 0, VAR_6 = 0; VAR_4 < 64 && VAR_6 < VAR_3; VAR_4++) {
        if (FUNC_3(&VAR_7) < 4)
            return ((void*)0);
        VAR_8[VAR_4] = FUNC_4(&VAR_7, 4);
        VAR_6 += FUNC_0(VAR_8[VAR_4]);
    }
    VAR_0 += (FUNC_2(&VAR_7) + 7) / 8;


    for (VAR_4 = 0; VAR_4 < 64 && VAR_3 > 0; VAR_4++) {
        VAR_5 = VAR_8[VAR_4];
        if (VAR_5 < 0) {
            VAR_5 = -VAR_5;
            if (VAR_1 - VAR_0 < 1)
                return ((void*)0);
            FUNC_7(VAR_2, *VAR_0++, FUNC_1(VAR_5, VAR_3));
        } else {
            if (VAR_1 - VAR_0 < VAR_5)
                return ((void*)0);
            FUNC_6(VAR_2, VAR_0, FUNC_1(VAR_5, VAR_3));
            VAR_0 += VAR_5;
        }
        VAR_2 += VAR_5;
        VAR_3 -= VAR_5;
    }
    return VAR_0;
}
