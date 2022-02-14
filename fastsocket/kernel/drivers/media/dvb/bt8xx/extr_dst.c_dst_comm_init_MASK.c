
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int type_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,char*) ;
 scalar_t__ FUNC_1 (struct dst_state*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct dst_state*) ;
 int VAR_3 ;

int FUNC_4(struct dst_state *VAR_4)
{
 FUNC_0(VAR_3, VAR_1, 1, "Initializing DST.");
 if ((FUNC_1(VAR_4)) < 0) {
  FUNC_0(VAR_3, VAR_0, 1, "PIO Enable Failed");
  return -1;
 }
 if ((FUNC_3(VAR_4)) < 0) {
  FUNC_0(VAR_3, VAR_0, 1, "RDC 8820 State RESET Failed.");
  return -1;
 }
 if (VAR_4->type_flags & VAR_2)
  FUNC_2(100);
 else
  FUNC_2(5);

 return 0;
}
