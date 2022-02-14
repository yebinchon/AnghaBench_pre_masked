
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int * sds ;
typedef int count ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (char*,int *,size_t) ;
 size_t FUNC_2 (int *) ;

char *FUNC_3(char *VAR_0, sds VAR_1) {
    size_t VAR_2 = VAR_1 ? FUNC_2(VAR_1) : 0;
    uint32_t VAR_3 = FUNC_0(VAR_2);

    FUNC_1(VAR_0,&VAR_3,sizeof(VAR_3));
    if (VAR_1) FUNC_1(VAR_0+sizeof(VAR_3),VAR_1,VAR_2);
    return VAR_0 + sizeof(VAR_3) + VAR_2;
}
