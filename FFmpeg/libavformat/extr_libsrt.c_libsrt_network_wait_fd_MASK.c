
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int URLContext ;
typedef int SRTSOCKET ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int,int,int*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int,int *,int*,int *,int*,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(URLContext *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10 = 1;
    int VAR_11 = VAR_8 ? VAR_3 : VAR_2;
    SRTSOCKET VAR_12[1];

    if (FUNC_2(VAR_6, VAR_7, &VAR_11) < 0)
        return FUNC_1(VAR_5);
    if (VAR_8) {
        VAR_9 = FUNC_4(VAR_6, 0, 0, VAR_12, &VAR_10, VAR_1, 0, 0, 0, 0);
    } else {
        VAR_9 = FUNC_4(VAR_6, VAR_12, &VAR_10, 0, 0, VAR_1, 0, 0, 0, 0);
    }
    if (VAR_9 < 0) {
        if (FUNC_5(((void*)0)) == VAR_4)
            VAR_9 = FUNC_0(VAR_0);
        else
            VAR_9 = FUNC_1(VAR_5);
    } else {
        VAR_9 = 0;
    }
    if (FUNC_3(VAR_6, VAR_7) < 0)
        return FUNC_1(VAR_5);
    return VAR_9;
}
