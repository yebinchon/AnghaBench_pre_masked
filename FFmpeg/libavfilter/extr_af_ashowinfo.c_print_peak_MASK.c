
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int AVFilterContext ;


 int VAR_0 ;
 float VAR_1 ;
 int FUNC_0 (int *,int ,char*,...) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_2, const char *VAR_3, uint32_t VAR_4)
{
    FUNC_0(VAR_2, VAR_0, "%s - ", VAR_3);
    if (!VAR_4)
        FUNC_0(VAR_2, VAR_0, "unknown");
    else
        FUNC_0(VAR_2, VAR_0, "%f", (float)VAR_4 / VAR_1);
    FUNC_0(VAR_2, VAR_0, ", ");
}
