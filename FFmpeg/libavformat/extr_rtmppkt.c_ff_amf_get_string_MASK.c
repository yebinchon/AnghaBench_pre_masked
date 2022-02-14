
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int GetByteContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;

int FUNC_5(GetByteContext *VAR_2, uint8_t *VAR_3,
                      int VAR_4, int *VAR_5)
{
    int VAR_6 = 0;
    int VAR_7;
    VAR_6 = FUNC_3(VAR_2);
    if (VAR_6 + 1 > VAR_4)
        return FUNC_0(VAR_1);
    VAR_7 = FUNC_4(VAR_2, VAR_3, VAR_6);
    if (VAR_7 != VAR_6) {
        FUNC_2(((void*)0), VAR_0,
               "Unable to read as many bytes as AMF string signaled\n");
    }
    VAR_3[VAR_7] = '\0';
    *VAR_5 = FUNC_1(VAR_6, VAR_7);
    return 0;
}
