
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {unsigned int flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct resource *VAR_3)
{
 unsigned int VAR_4 = VAR_0 | VAR_1;

 VAR_4 |= VAR_3->flags & VAR_2;

 return VAR_4;
}
