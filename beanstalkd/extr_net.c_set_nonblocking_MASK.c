
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(int VAR_3)
{
    int VAR_4, VAR_5;

    VAR_4 = FUNC_0(VAR_3, VAR_0, 0);
    if (VAR_4 < 0) {
        FUNC_1("getting flags");
        return -1;
    }
    VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_4 | VAR_2);
    if (VAR_5 == -1) {
        FUNC_1("setting O_NONBLOCK");
        return -1;
    }
    return 0;
}
