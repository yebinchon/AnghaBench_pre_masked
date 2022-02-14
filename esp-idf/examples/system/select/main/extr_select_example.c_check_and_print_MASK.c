
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;
typedef int buf ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char*,int,char const*,char*) ;
 scalar_t__ FUNC_2 (int,int const*) ;
 int VAR_0 ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void FUNC_4(int VAR_1, const fd_set *VAR_2, const char *VAR_3)
{
    char VAR_4[100];
    int VAR_5;

    if (FUNC_2(VAR_1, VAR_2)) {
        if ((VAR_5 = FUNC_3(VAR_1, VAR_4, sizeof(VAR_4)-1)) > 0) {
            VAR_4[VAR_5] = '\0';
            FUNC_1(VAR_0, "%d bytes were received through %s: %s", VAR_5, VAR_3, VAR_4);
        } else {
            FUNC_0(VAR_0, "%s read error", VAR_3);
        }
    }
}
