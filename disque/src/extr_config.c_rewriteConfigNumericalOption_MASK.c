
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rewriteConfigState {int dummy; } ;
typedef int sds ;


 int FUNC_0 (struct rewriteConfigState*,char*,int ,int) ;
 int FUNC_1 (int ,char*,char*,long long) ;
 int FUNC_2 () ;

void FUNC_3(struct rewriteConfigState *VAR_0, char *VAR_1, long long VAR_2, long long VAR_3) {
    int VAR_4 = VAR_2 != VAR_3;
    sds VAR_5 = FUNC_1(FUNC_2(),"%s %lld",VAR_1,VAR_2);

    FUNC_0(VAR_0,VAR_1,VAR_5,VAR_4);
}
