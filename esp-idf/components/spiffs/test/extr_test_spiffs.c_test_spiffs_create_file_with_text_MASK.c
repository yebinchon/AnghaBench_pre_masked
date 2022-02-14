
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*,int *) ;

void FUNC_6(const char* VAR_1, const char* VAR_2)
{
    FILE* VAR_3 = FUNC_4(VAR_1, "wb");
    FUNC_1(VAR_3);
    FUNC_2(FUNC_5(VAR_2, VAR_3) != VAR_0);
    FUNC_0(0, FUNC_3(VAR_3));
}
