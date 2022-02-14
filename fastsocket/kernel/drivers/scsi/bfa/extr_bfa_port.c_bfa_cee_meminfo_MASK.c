
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bfa_cee_stats_s {int dummy; } ;
struct bfa_cee_attr_s {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;

u32
FUNC_1(void)
{
 return FUNC_0(sizeof(struct bfa_cee_attr_s), VAR_0) +
  FUNC_0(sizeof(struct bfa_cee_stats_s), VAR_0);
}
