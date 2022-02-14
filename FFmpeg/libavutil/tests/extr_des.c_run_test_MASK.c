
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int AVDES ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int *,int,int *,int) ;
 int FUNC_3 (int *,int ,int,int) ;
 int VAR_0 ;
 int ** VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_4(int VAR_3, int VAR_4)
{
    AVDES VAR_5;
    int VAR_6 = VAR_3 && !VAR_4 ? 2 : 1;
    uint64_t VAR_7;
    FUNC_1(VAR_1[0], 0x4e6f772069732074ULL);
    FUNC_1(VAR_1[1], 0x1234567890abcdefULL);
    FUNC_1(VAR_2, 0x1234567890abcdefULL);
    FUNC_3(&VAR_5, VAR_0, 192, VAR_4);
    FUNC_2(&VAR_5, VAR_1[VAR_6], VAR_1[0], 10000, VAR_3 ? VAR_2 : ((void*)0), VAR_4);
    VAR_7 = FUNC_0(VAR_1[9999 + VAR_6]);
    if (VAR_3) {
        if (VAR_4)
            return VAR_7 == 0xc5cecf63ecec514cULL;
        else
            return VAR_7 == 0xcb191f85d1ed8439ULL;
    } else {
        if (VAR_4)
            return VAR_7 == 0x8325397644091a0aULL;
        else
            return VAR_7 == 0xdd17e8b8b437d232ULL;
    }
}
