
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,char*,struct tm*) ;
 int FUNC_2 (struct tm*) ;
 int FUNC_3 (struct tm*,int ,int) ;

__attribute__((used)) static int64_t FUNC_4(const char *VAR_0)
{
    struct tm VAR_1;
    FUNC_3(&VAR_1, 0, sizeof(struct tm));
    FUNC_1(VAR_0, "%Y%m%d%H%M%S", &VAR_1);
    return FUNC_0(1000000) * FUNC_2(&VAR_1);
}
