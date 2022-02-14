
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef enum ID3v2Encoding { ____Placeholder_ID3v2Encoding } ID3v2Encoding ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(AVIOContext *VAR_1, const uint8_t *VAR_2,
                               enum ID3v2Encoding VAR_3)
{
    int (*VAR_4)(AVIOContext*, const char*);

    if (VAR_3 == VAR_0) {
        FUNC_2(VAR_1, 0xFEFF);
        VAR_4 = FUNC_1;
    } else
        VAR_4 = FUNC_0;

    VAR_4(VAR_1, VAR_2);
}
