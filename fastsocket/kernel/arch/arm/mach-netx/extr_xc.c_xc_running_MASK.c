
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xc {scalar_t__ xpec_base; scalar_t__ xmac_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;

int FUNC_1(struct xc *VAR_6)
{
 return (FUNC_0(VAR_6->xmac_base + VAR_0) & VAR_3)
     || (FUNC_0(VAR_6->xmac_base + VAR_1) & VAR_4)
     || (FUNC_0(VAR_6->xpec_base + VAR_2) & VAR_5) ?
  0 : 1;
}
