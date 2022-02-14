
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_state {int type_flags; int dst_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct dst_state*) ;
 scalar_t__ FUNC_2 (struct dst_state*) ;
 scalar_t__ FUNC_3 (struct dst_state*) ;
 scalar_t__ FUNC_4 (struct dst_state*) ;
 scalar_t__ FUNC_5 (struct dst_state*) ;
 scalar_t__ FUNC_6 (struct dst_state*) ;
 scalar_t__ FUNC_7 (struct dst_state*) ;
 int FUNC_8 (struct dst_state*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct dst_state*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_12(struct dst_state *VAR_8)
{
 FUNC_10(&VAR_8->dst_mutex);
 if (VAR_6 & VAR_2) {
  if ((FUNC_11(VAR_8)) < 0) {
   FUNC_0(VAR_7, VAR_0, 1, "RDC 8820 RESET Failed.");
   return -1;
  }
  FUNC_9(4000);
 } else {
  FUNC_9(100);
 }
 if ((FUNC_2(VAR_8)) < 0) {
  FUNC_0(VAR_7, VAR_0, 1, "DST Initialization Failed.");
  return -1;
 }
 FUNC_9(100);
 if (FUNC_4(VAR_8) < 0) {
  FUNC_0(VAR_7, VAR_0, 1, "unknown device.");
  return -1;
 }
 if (FUNC_5(VAR_8) < 0) {
  FUNC_0(VAR_7, VAR_1, 1, "MAC: Unsupported command");
 }
 if ((VAR_8->type_flags & VAR_4) || (VAR_8->type_flags & VAR_3)) {
  if (FUNC_6(VAR_8) < 0)
   FUNC_0(VAR_7, VAR_1, 1, "Tuner: Unsupported command");
 }
 if (VAR_8->type_flags & VAR_5) {
  FUNC_8(VAR_8, 204);
 }
 if (VAR_8->type_flags & VAR_3) {
  if (FUNC_3(VAR_8) < 0) {
   FUNC_0(VAR_7, VAR_1, 1, "FW: Unsupported command");
   return 0;
  }
  if (FUNC_1(VAR_8) < 0) {
   FUNC_0(VAR_7, VAR_1, 1, "Card: Unsupported command");
   return 0;
  }
  if (FUNC_7(VAR_8) < 0) {
   FUNC_0(VAR_7, VAR_1, 1, "Vendor: Unsupported command");
   return 0;
  }
 }

 return 0;
}
