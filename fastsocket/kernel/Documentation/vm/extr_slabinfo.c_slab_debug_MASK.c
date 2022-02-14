
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {char* name; scalar_t__ trace; scalar_t__ store_user; scalar_t__ poison; scalar_t__ red_zone; scalar_t__ sanity_checks; } ;


 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct slabinfo*,char*,int) ;
 scalar_t__ FUNC_2 (struct slabinfo*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_4(struct slabinfo *VAR_7)
{
 if (FUNC_3(VAR_7->name, "*") == 0)
  return;

 if (VAR_2 && !VAR_7->sanity_checks) {
  FUNC_1(VAR_7, "sanity", 1);
 }
 if (!VAR_2 && VAR_7->sanity_checks) {
  if (FUNC_2(VAR_7))
   FUNC_1(VAR_7, "sanity", 0);
  else
   FUNC_0(VAR_4, "%s not empty cannot disable sanity checks\n", VAR_7->name);
 }
 if (VAR_1 && !VAR_7->red_zone) {
  if (FUNC_2(VAR_7))
   FUNC_1(VAR_7, "red_zone", 1);
  else
   FUNC_0(VAR_4, "%s not empty cannot enable redzoning\n", VAR_7->name);
 }
 if (!VAR_1 && VAR_7->red_zone) {
  if (FUNC_2(VAR_7))
   FUNC_1(VAR_7, "red_zone", 0);
  else
   FUNC_0(VAR_4, "%s not empty cannot disable redzoning\n", VAR_7->name);
 }
 if (VAR_0 && !VAR_7->poison) {
  if (FUNC_2(VAR_7))
   FUNC_1(VAR_7, "poison", 1);
  else
   FUNC_0(VAR_4, "%s not empty cannot enable poisoning\n", VAR_7->name);
 }
 if (!VAR_0 && VAR_7->poison) {
  if (FUNC_2(VAR_7))
   FUNC_1(VAR_7, "poison", 0);
  else
   FUNC_0(VAR_4, "%s not empty cannot disable poisoning\n", VAR_7->name);
 }
 if (VAR_6 && !VAR_7->store_user) {
  if (FUNC_2(VAR_7))
   FUNC_1(VAR_7, "store_user", 1);
  else
   FUNC_0(VAR_4, "%s not empty cannot enable tracking\n", VAR_7->name);
 }
 if (!VAR_6 && VAR_7->store_user) {
  if (FUNC_2(VAR_7))
   FUNC_1(VAR_7, "store_user", 0);
  else
   FUNC_0(VAR_4, "%s not empty cannot disable tracking\n", VAR_7->name);
 }
 if (VAR_5 && !VAR_7->trace) {
  if (VAR_3 == 1)
   FUNC_1(VAR_7, "trace", 1);
  else
   FUNC_0(VAR_4, "%s can only enable trace for one slab at a time\n", VAR_7->name);
 }
 if (!VAR_5 && VAR_7->trace)
  FUNC_1(VAR_7, "trace", 1);
}
