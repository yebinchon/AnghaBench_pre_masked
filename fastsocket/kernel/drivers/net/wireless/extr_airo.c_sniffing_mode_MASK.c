
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rmode; } ;
struct airo_info {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(struct airo_info *VAR_2)
{
 return FUNC_0(VAR_2->config.rmode & VAR_0) >=
  FUNC_0(VAR_1);
}
