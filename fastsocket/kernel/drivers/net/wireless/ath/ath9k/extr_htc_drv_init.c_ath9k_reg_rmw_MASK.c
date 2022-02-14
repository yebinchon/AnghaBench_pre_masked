
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,int ) ;

__attribute__((used)) static u32 FUNC_2(void *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 VAR_4 &= ~VAR_3;
 VAR_4 |= VAR_2;
 FUNC_1(VAR_0, VAR_4, VAR_1);
 return VAR_4;
}
