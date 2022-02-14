
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct af9013_state {int dummy; } ;


 int FUNC_0 (struct af9013_state*,int,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct af9013_state *VAR_0, u16 VAR_1, u8 *VAR_2,
 u8 VAR_3)
{
 u8 VAR_4 = (1 << 0)|(1 << 1)|((VAR_3 - 1) << 2)|(0 << 6)|(0 << 7);
 return FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);
}
