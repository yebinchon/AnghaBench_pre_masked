
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int COST_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (char*,char*) ;

COST_TYPE FUNC_2(char *VAR_7)
{
    if (FUNC_1(VAR_7, "seg")==0) return VAR_2;
    if (FUNC_1(VAR_7, "sse")==0) return VAR_4;
    if (FUNC_1(VAR_7, "masked")==0) return VAR_1;
    if (FUNC_1(VAR_7, "smooth")==0) return VAR_3;
    if (FUNC_1(VAR_7, "L1")==0) return VAR_0;
    if (FUNC_1(VAR_7, "wgan")==0) return VAR_5;
    FUNC_0(VAR_6, "Couldn't find cost type %s, going with SSE\n", VAR_7);
    return VAR_4;
}
