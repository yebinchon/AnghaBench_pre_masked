
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static inline void FUNC_3(PutBitContext *VAR_1, GetBitContext *VAR_2)
{
    int VAR_3 = FUNC_1(VAR_2);
    while (VAR_3 >= VAR_0) {
        FUNC_2(VAR_1, VAR_0, FUNC_0(VAR_2, VAR_0));
        VAR_3 -= VAR_0;
    }
    if (VAR_3 > 0)
        FUNC_2(VAR_1, VAR_3, FUNC_0(VAR_2, VAR_3));
}
