
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int AVIOContext ;
typedef int AVBPrint ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int64_t FUNC_5(AVBPrint *VAR_0, AVIOContext *VAR_1)
{
    int64_t VAR_2 = FUNC_4(VAR_1);

    FUNC_1(VAR_0);
    while(!FUNC_2(VAR_1)) {
        int VAR_3 = FUNC_3(VAR_1);
        if(VAR_3 != '\r') {
            FUNC_0(VAR_0, VAR_3, 1);
        }
        if(VAR_3 == '\n') {
            break;
        }
    }
    return VAR_2;
}
