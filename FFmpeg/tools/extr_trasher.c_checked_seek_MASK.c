
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(FILE *VAR_1, int64_t VAR_2, int VAR_3)
{
    VAR_2 = FUNC_2(VAR_1, VAR_2, VAR_3);
    if (VAR_2 < 0) {
        FUNC_1(VAR_0, "seek failed\n");
        FUNC_0(1);
    }
}
