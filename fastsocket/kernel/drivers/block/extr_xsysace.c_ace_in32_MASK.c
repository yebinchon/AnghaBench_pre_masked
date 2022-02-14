
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ace_device {int dummy; } ;


 int FUNC_0 (struct ace_device*,int) ;

__attribute__((used)) static inline u32 FUNC_1(struct ace_device *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0, VAR_1) | (FUNC_0(VAR_0, VAR_1 + 2) << 16);
}
