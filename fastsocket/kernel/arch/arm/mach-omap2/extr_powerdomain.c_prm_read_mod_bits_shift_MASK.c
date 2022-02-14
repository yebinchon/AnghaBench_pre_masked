
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static u32 FUNC_2(s16 VAR_0, s16 VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_3 &= VAR_2;
 VAR_3 >>= FUNC_0(VAR_2);

 return VAR_3;
}
