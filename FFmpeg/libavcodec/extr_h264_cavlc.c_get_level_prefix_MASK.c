
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int ,int *) ;
 unsigned int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_6(GetBitContext *VAR_1){
    unsigned int VAR_2;
    int VAR_3;

    FUNC_3(VAR_0, VAR_1);
    FUNC_4(VAR_0, VAR_1);
    VAR_2=FUNC_1(VAR_0, VAR_1);

    VAR_3= 32 - FUNC_5(VAR_2);

    FUNC_2(VAR_0, VAR_1, VAR_3);
    FUNC_0(VAR_0, VAR_1);

    return VAR_3-1;
}
