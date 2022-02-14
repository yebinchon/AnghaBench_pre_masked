
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* attrset; } ;
struct nfs4_opendata {TYPE_1__ o_res; } ;
struct iattr {int ia_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline void FUNC_0(struct nfs4_opendata *VAR_6, struct iattr *VAR_7)
{
 if ((VAR_6->o_res.attrset[1] & VAR_4) &&
     !(VAR_7->ia_valid & VAR_1))
  VAR_7->ia_valid |= VAR_0;

 if ((VAR_6->o_res.attrset[1] & VAR_5) &&
     !(VAR_7->ia_valid & VAR_3))
  VAR_7->ia_valid |= VAR_2;
}
