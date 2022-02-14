
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fcoe_fcf {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct fcoe_fcf *VAR_2)
{
 u16 VAR_3 = VAR_1 | VAR_0;

 return (VAR_2->flags & VAR_3) == VAR_3;
}
