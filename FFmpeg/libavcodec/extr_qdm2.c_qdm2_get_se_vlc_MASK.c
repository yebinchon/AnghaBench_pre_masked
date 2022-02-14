
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VLC ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int const*,int ,int) ;

__attribute__((used)) static int FUNC_1(const VLC *VAR_0, GetBitContext *VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_0(VAR_1, VAR_0, 0, VAR_2);

    return (VAR_3 & 1) ? ((VAR_3 + 1) >> 1) : -(VAR_3 >> 1);
}
