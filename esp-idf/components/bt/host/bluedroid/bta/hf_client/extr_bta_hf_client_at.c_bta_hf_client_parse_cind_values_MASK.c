
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef scalar_t__ UINT16 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (char*,char*,int *,int*) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0)
{

    UINT16 VAR_1 = 0;
    UINT32 VAR_2 = 0;

    int VAR_3;
    int VAR_4;

    while ((VAR_4 = FUNC_2(VAR_0, "%u%n", &VAR_2, &VAR_3)) > 0) {

        FUNC_1(VAR_1, VAR_2);

        VAR_0 += VAR_3;


        if (*VAR_0 != ',') {
            break;
        }

        VAR_1++;
        VAR_0++;
    }

    if (VAR_4 > 0) {
        FUNC_0(VAR_0);
        return VAR_0;
    }

    return ((void*)0);
}
