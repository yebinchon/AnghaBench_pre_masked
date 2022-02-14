
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int) ;

int64_t FUNC_3(const char *VAR_1, const char *VAR_2,
                          int VAR_3)
{
    int64_t VAR_4;
    if (FUNC_1(&VAR_4, VAR_2, VAR_3) < 0) {
        FUNC_0(((void*)0), VAR_0, "Invalid %s specification for %s: %s\n",
               VAR_3 ? "duration" : "date", VAR_1, VAR_2);
        FUNC_2(1);
    }
    return VAR_4;
}
