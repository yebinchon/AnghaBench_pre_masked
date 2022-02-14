
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tiger_hw {int auxd; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static u8
FUNC_2(void *VAR_2, u8 VAR_3)
{
 struct tiger_hw *VAR_4 = VAR_2;
 u8 VAR_5;

 VAR_4->auxd &= 0xfc;
 VAR_4->auxd |= (VAR_3 >> 4) & 3;
 FUNC_1(VAR_4->auxd, VAR_4->base + VAR_0);
 VAR_5 = FUNC_0(VAR_4->base + VAR_1 + ((VAR_3 & 0x0f) << 2));
 return VAR_5;
}
