
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tiger_hw {int auxd; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, u8 VAR_3, u8 *VAR_4, int VAR_5)
{
 struct tiger_hw *VAR_6 = VAR_2;

 VAR_6->auxd &= 0xfc;
 FUNC_1(VAR_6->auxd, VAR_6->base + VAR_0);
 FUNC_0(VAR_6->base + VAR_1, VAR_4, VAR_5);
}
