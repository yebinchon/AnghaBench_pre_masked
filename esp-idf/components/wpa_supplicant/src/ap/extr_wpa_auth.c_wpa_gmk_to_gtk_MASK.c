
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int const*,int ,char const*,int *,int,int *,size_t) ;
 int FUNC_3 (int const*,int ,char const*,int *,int,int *,size_t) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(const u8 *VAR_3, const char *VAR_4, const u8 *VAR_5,
              const u8 *VAR_6, u8 *VAR_7, size_t VAR_8)
{
    u8 VAR_9[VAR_0 + VAR_2 + 8 + 16];
    u8 *VAR_10;
    int VAR_11 = 0;
    FUNC_0(VAR_9, VAR_5, VAR_0);
    FUNC_0(VAR_9 + VAR_0, VAR_6, VAR_2);
    VAR_10 = VAR_9 + VAR_0 + VAR_2;
    FUNC_4(VAR_10);
    VAR_10 += 8;
    if (FUNC_1(VAR_10, 16) < 0)
        VAR_11 = -1;




    if (FUNC_2(VAR_3, VAR_1, VAR_4, VAR_9, sizeof(VAR_9), VAR_7, VAR_8) < 0)
        VAR_11 = -1;


    return VAR_11;
}
