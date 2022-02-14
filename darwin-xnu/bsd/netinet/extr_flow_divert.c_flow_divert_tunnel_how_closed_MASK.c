
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_divert_pcb {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct flow_divert_pcb *VAR_5)
{
 if ((VAR_5->flags & (VAR_0|VAR_1)) ==
   (VAR_0|VAR_1))
 {
  return VAR_3;
 } else if (VAR_5->flags & VAR_0) {
  return VAR_2;
 } else if (VAR_5->flags & VAR_1) {
  return VAR_4;
 }

 return -1;
}
