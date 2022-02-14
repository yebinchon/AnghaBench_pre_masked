
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int ,int *) ;
 unsigned int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int * VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static inline int FUNC_7(GetBitContext *VAR_3)
{
    unsigned int VAR_4;
    FUNC_3(VAR_2, VAR_3);
    FUNC_4(VAR_2, VAR_3);
    VAR_4 = FUNC_1(VAR_2, VAR_3);

    VAR_4 >>= 32 - 9;
    FUNC_2(VAR_2, VAR_3, VAR_0[VAR_4]);
    FUNC_0(VAR_2, VAR_3);


    return VAR_1[VAR_4];
}
