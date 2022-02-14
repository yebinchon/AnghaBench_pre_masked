
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short STS; unsigned short* Parm; } ;
struct net_local {TYPE_1__ ssb; } ;
typedef TYPE_1__ SSB ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;

__attribute__((used)) static unsigned char FUNC_0(struct net_local *VAR_4, unsigned short VAR_5)
{
 SSB *VAR_6 = &VAR_4->ssb;
 if(VAR_5 != VAR_3
  && VAR_5 != VAR_1
  && VAR_5 != VAR_0
  && VAR_5 != VAR_2)
 {
  return (1);
 }







 if(VAR_6->STS == (unsigned short) -1)
  return (0);
 if(VAR_5 == VAR_0)
  return (1);
 if(VAR_6->Parm[0] == (unsigned short) -1)
  return (0);
 if(VAR_5 == VAR_2)
  return (1);


 if(VAR_6->Parm[1] == (unsigned short) -1)
  return (0);
 if(VAR_6->Parm[2] == (unsigned short) -1)
  return (0);

 return (1);
}
