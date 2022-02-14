
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cirrusfb_info {scalar_t__ btype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const struct cirrusfb_info *VAR_2)
{
 return VAR_2->btype == VAR_0 || VAR_2->btype == VAR_1;
}
