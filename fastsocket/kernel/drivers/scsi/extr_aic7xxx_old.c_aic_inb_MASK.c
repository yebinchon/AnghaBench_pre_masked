
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {scalar_t__ base; scalar_t__ maddr; } ;


 unsigned char FUNC_0 (scalar_t__) ;
 unsigned char FUNC_1 (scalar_t__) ;

__attribute__((used)) static unsigned char
FUNC_2(struct aic7xxx_host *VAR_0, long VAR_1)
{
  return(FUNC_0(VAR_0->base + VAR_1));

}
