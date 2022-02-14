
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef enum AVRounding { ____Placeholder_AVRounding } AVRounding ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_1, int64_t VAR_2, int VAR_3, enum AVRounding VAR_4)
{
    int VAR_5 = VAR_2 / VAR_0;
    int VAR_6 = VAR_2 % VAR_0;
    int VAR_7 = VAR_5 / 60;
    int VAR_8 = VAR_7 / 60;
    VAR_6 = FUNC_0(VAR_6, FUNC_2(10, VAR_3), VAR_0, VAR_4);
    VAR_5 %= 60;
    VAR_7 %= 60;
    FUNC_1(VAR_1, "PT");
    if (VAR_8)
        FUNC_1(VAR_1, "%dH", VAR_8);
    if (VAR_8 || VAR_7)
        FUNC_1(VAR_1, "%dM", VAR_7);
    FUNC_1(VAR_1, "%d.%0*dS", VAR_5, VAR_3, VAR_6);
}
