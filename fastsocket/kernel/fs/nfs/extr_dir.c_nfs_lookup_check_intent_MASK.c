
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct nameidata *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->flags & (VAR_0|VAR_1))
  return 0;
 return VAR_2->flags & VAR_3;
}
