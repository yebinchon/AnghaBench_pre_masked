
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVDictionary ;


 int FUNC_0 (int **,char*,char*,int ) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static int FUNC_3(AVDictionary ** VAR_0, const char * VAR_1)
{
    if (VAR_1 == ((void*)0))
    {

        FUNC_0( VAR_0, "deadline", "good", 0);
        FUNC_0( VAR_0, "cpu-used", "2", 0);
    }
    else if (!FUNC_2("veryfast", VAR_1))
    {
        FUNC_0( VAR_0, "deadline", "good", 0);
        FUNC_0( VAR_0, "cpu-used", "5", 0);
    }
    else if (!FUNC_2("faster", VAR_1))
    {
        FUNC_0( VAR_0, "deadline", "good", 0);
        FUNC_0( VAR_0, "cpu-used", "4", 0);
    }
    else if (!FUNC_2("fast", VAR_1))
    {
        FUNC_0( VAR_0, "deadline", "good", 0);
        FUNC_0( VAR_0, "cpu-used", "3", 0);
    }
    else if (!FUNC_2("medium", VAR_1))
    {
        FUNC_0( VAR_0, "deadline", "good", 0);
        FUNC_0( VAR_0, "cpu-used", "2", 0);
    }
    else if (!FUNC_2("slow", VAR_1))
    {
        FUNC_0( VAR_0, "deadline", "good", 0);
        FUNC_0( VAR_0, "cpu-used", "1", 0);
    }
    else if (!FUNC_2("slower", VAR_1))
    {
        FUNC_0( VAR_0, "deadline", "good", 0);
        FUNC_0( VAR_0, "cpu-used", "0", 0);
    }
    else if (!FUNC_2("veryslow", VAR_1))
    {
        FUNC_0( VAR_0, "deadline", "best", 0);
        FUNC_0( VAR_0, "cpu-used", "0", 0);
    }
    else
    {

        FUNC_1("apply_vpx_preset: Unknown VPx encoder preset %s", VAR_1);
        return -1;
    }

    return 0;
}
