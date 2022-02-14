
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(int VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_3(VAR_0);

 VAR_3 &= ~((1 << 11) | (1 << 15) | (1 << 16));
 VAR_3 |= VAR_2 ? (1 << 11) : 0;

 VAR_3 |= 1 << 15;
 VAR_3 |= VAR_2 ? 0 : (1 << 16);
 FUNC_4(VAR_0, VAR_3);


 VAR_3 = FUNC_1(FUNC_0(VAR_1));
 VAR_3 |= VAR_2 ? 0 : (1 << 1);
 FUNC_2(VAR_3, FUNC_0(VAR_1));
}
