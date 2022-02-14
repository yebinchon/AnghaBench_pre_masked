
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char,int ) ;
 int FUNC_1 (char*,size_t,char const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(char *VAR_3, size_t VAR_4, const char *VAR_5) {
    int VAR_6;

    if (VAR_4 == 0) {
        VAR_1 = VAR_0;
        return -1;
    }

    VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
    FUNC_0('\n', VAR_2);
    return VAR_6;
}
