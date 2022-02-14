
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(char *VAR_3, int VAR_4) {
    int VAR_5;
    if ((VAR_5 = FUNC_3(VAR_4, VAR_1, 0)) == -1) {
        FUNC_0(VAR_3, "creating socket: %s", FUNC_4(VAR_2));
        return VAR_0;
    }



    if (FUNC_1(VAR_3,VAR_5) == VAR_0) {
        FUNC_2(VAR_5);
        return VAR_0;
    }
    return VAR_5;
}
