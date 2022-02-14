
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct hw_data {int dummy; } ;


 unsigned char FUNC_0 (struct hw_data*,int,int *) ;

__attribute__((used)) static unsigned char FUNC_1(struct hw_data *VAR_0, u16 VAR_1, u32 * VAR_2)
{
 if (VAR_1 < 0x1000)
  VAR_1 += 0x1000;
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
