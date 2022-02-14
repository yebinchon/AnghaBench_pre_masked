
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Type ;


 int FUNC_0 (char*,char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static Type *FUNC_1(char *VAR_5) {
    if (!FUNC_0(VAR_5, "u"))
        return VAR_2;
    if (!FUNC_0(VAR_5, "l"))
        return VAR_1;
    if (!FUNC_0(VAR_5, "ul") || !FUNC_0(VAR_5, "lu"))
        return VAR_4;
    if (!FUNC_0(VAR_5, "ll"))
        return VAR_0;
    if (!FUNC_0(VAR_5, "ull") || !FUNC_0(VAR_5, "llu"))
        return VAR_3;
    return ((void*)0);
}
