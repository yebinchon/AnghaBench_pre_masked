
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeepc_cpufv {int cur; int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct eeepc_cpufv *VAR_2)
{
 VAR_2->cur = FUNC_0(VAR_0);
 VAR_2->num = (VAR_2->cur >> 8) & 0xff;
 VAR_2->cur &= 0xff;
 if (VAR_2->cur < 0 || VAR_2->num <= 0 || VAR_2->num > 12)
  return -VAR_1;
 return 0;
}
