
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_defrouter {int flags; } ;


 int VAR_0 ;


 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_1(struct nd_defrouter *VAR_6)
{
 switch (VAR_6->flags & VAR_1) {
 case 131:
  return (VAR_2);
 case 129:
 case 128:
  return (VAR_5);
 case 130:
  return (VAR_4);
 default:





  FUNC_0(VAR_0, "rtpref: impossible RA flag %x\n", VAR_6->flags);
  return (VAR_3);
 }

}
