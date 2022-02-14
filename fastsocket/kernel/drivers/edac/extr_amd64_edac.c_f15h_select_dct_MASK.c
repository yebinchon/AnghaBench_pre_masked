
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct amd64_pvt {int F1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct amd64_pvt *VAR_1, u8 VAR_2)
{
 u32 VAR_3 = 0;

 FUNC_0(VAR_1->F1, VAR_0, &VAR_3);
 VAR_3 &= 0xfffffffe;
 VAR_3 |= VAR_2;
 FUNC_1(VAR_1->F1, VAR_0, VAR_3);
}
