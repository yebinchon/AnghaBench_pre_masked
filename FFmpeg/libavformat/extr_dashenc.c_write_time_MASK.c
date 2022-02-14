
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(AVIOContext *VAR_1, int64_t VAR_2)
{
    int VAR_3 = VAR_2 / VAR_0;
    int VAR_4 = VAR_2 % VAR_0;
    int VAR_5 = VAR_3 / 60;
    int VAR_6 = VAR_5 / 60;
    VAR_3 %= 60;
    VAR_5 %= 60;
    FUNC_0(VAR_1, "PT");
    if (VAR_6)
        FUNC_0(VAR_1, "%dH", VAR_6);
    if (VAR_6 || VAR_5)
        FUNC_0(VAR_1, "%dM", VAR_5);
    FUNC_0(VAR_1, "%d.%dS", VAR_3, VAR_4 / (VAR_0 / 10));
}
