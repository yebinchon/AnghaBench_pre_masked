
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int URLContext ;
typedef int BIO ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;

__attribute__((used)) static int FUNC_5(BIO *VAR_2, char *VAR_3, int VAR_4)
{
    URLContext *VAR_5 = FUNC_3(VAR_2);
    int VAR_6 = FUNC_4(VAR_5, VAR_3, VAR_4);
    if (VAR_6 >= 0)
        return VAR_6;
    FUNC_1(VAR_2);
    if (VAR_6 == FUNC_0(VAR_1))
        FUNC_2(VAR_2);
    if (VAR_6 == VAR_0)
        return 0;
    return -1;
}
