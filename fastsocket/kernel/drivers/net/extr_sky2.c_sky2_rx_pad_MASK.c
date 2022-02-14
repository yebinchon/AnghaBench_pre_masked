
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_hw {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned FUNC_0(const struct sky2_hw *VAR_1)
{
 return (VAR_1->flags & VAR_0) ? 8 : 2;
}
