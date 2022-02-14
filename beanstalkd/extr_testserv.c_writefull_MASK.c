
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3;
    for (; VAR_2; VAR_2 -= VAR_3) {
        VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
        if (VAR_3 == -1) {
            FUNC_1("write");
            FUNC_0(1);
        }
        VAR_1 += VAR_3;
    }
}
