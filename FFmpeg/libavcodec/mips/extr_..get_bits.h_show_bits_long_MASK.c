
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 unsigned int FUNC_0 (int *,int) ;
 unsigned int FUNC_1 (int *,int) ;

__attribute__((used)) static inline unsigned int FUNC_2(GetBitContext *VAR_1, int VAR_2)
{
    if (VAR_2 <= VAR_0) {
        return FUNC_1(VAR_1, VAR_2);
    } else {
        GetBitContext VAR_3 = *VAR_1;
        return FUNC_0(&VAR_3, VAR_2);
    }
}
