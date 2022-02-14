
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_dmaring {scalar_t__ index; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static u16 FUNC_1(struct b43_dmaring *VAR_0, int VAR_1)
{
 u16 VAR_2;
 VAR_2 = (((u16)VAR_0->index + 1) << 12);
 FUNC_0(VAR_1 & ~0x0FFF);
 VAR_2 |= (u16)VAR_1;

 return VAR_2;
}
