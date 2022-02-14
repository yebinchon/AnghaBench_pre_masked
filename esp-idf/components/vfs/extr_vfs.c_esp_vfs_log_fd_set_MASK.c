
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2, const fd_set *VAR_3)
{
    if (VAR_2 && VAR_3) {
        FUNC_0(VAR_1, "FDs in %s =", VAR_2);
        for (int VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
            if (FUNC_1(VAR_4, VAR_3)) {
                FUNC_0(VAR_1, "%d", VAR_4);
            }
        }
    }
}
