
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (void*,int ,char*,char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, int64_t VAR_3){
    if(VAR_3 && VAR_3 != VAR_0 && !(VAR_3&(VAR_3-1))) {
        char VAR_4[128];
        FUNC_0(VAR_4, sizeof(VAR_4), -1, VAR_3);
        FUNC_1(VAR_2, VAR_1, "Treating %s as mono\n", VAR_4);
        return VAR_0;
    }

    return VAR_3;
}
