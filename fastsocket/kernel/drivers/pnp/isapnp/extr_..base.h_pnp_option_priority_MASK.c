
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_option {unsigned int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct pnp_option *VAR_2)
{
 return (VAR_2->flags >> VAR_1) &
     VAR_0;
}
