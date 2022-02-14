
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int QDM2SubPNode ;
typedef int QDM2Context ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5(QDM2Context *VAR_0, QDM2SubPNode *VAR_1)
{
    QDM2SubPNode *VAR_2[4];

    VAR_2[0] = FUNC_4(VAR_1, 9);
    if (VAR_2[0])
        FUNC_3(VAR_0, VAR_2[0]);

    VAR_2[1] = FUNC_4(VAR_1, 10);
    if (VAR_2[1])
        FUNC_0(VAR_0, VAR_2[1]);
    else
        FUNC_0(VAR_0, ((void*)0));

    VAR_2[2] = FUNC_4(VAR_1, 11);
    if (VAR_2[0] && VAR_2[1] && VAR_2[2])
        FUNC_1(VAR_0, VAR_2[2]);
    else
        FUNC_1(VAR_0, ((void*)0));

    VAR_2[3] = FUNC_4(VAR_1, 12);
    if (VAR_2[0] && VAR_2[1] && VAR_2[3])
        FUNC_2(VAR_0, VAR_2[3]);
    else
        FUNC_2(VAR_0, ((void*)0));
}
