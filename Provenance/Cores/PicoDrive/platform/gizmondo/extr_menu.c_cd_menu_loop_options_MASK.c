
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bios_names_t {scalar_t__* jp; scalar_t__* eu; scalar_t__* us; } ;
typedef int menu_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,struct bios_names_t*) ;
 scalar_t__ FUNC_1 (int,char**) ;
 int VAR_13 ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 scalar_t__* VAR_14 ;
 int FUNC_5 (scalar_t__*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__*,char*,int) ;

__attribute__((used)) static void FUNC_8(void)
{
 static int VAR_15 = 0;
 int VAR_16 = 10;
 unsigned long VAR_17 = 0;
 struct bios_names_t VAR_18;
 menu_id VAR_19;
 char *VAR_20, *VAR_21;

 if (FUNC_1(4, &VAR_20)) {
  for (VAR_21 = VAR_20+FUNC_6(VAR_20)-1; VAR_21 > VAR_20 && *VAR_21 != '/'; VAR_21--);
  if (*VAR_21 == '/') VAR_21++;
  FUNC_7(VAR_18.us, VAR_21, sizeof(VAR_18.us)); VAR_18.us[sizeof(VAR_18.us)-1] = 0;
 } else FUNC_5(VAR_18.us, "NOT FOUND");

 if (FUNC_1(8, &VAR_20)) {
  for (VAR_21 = VAR_20+FUNC_6(VAR_20)-1; VAR_21 > VAR_20 && *VAR_21 != '/'; VAR_21--);
  if (*VAR_21 == '/') VAR_21++;
  FUNC_7(VAR_18.eu, VAR_21, sizeof(VAR_18.eu)); VAR_18.eu[sizeof(VAR_18.eu)-1] = 0;
 } else FUNC_5(VAR_18.eu, "NOT FOUND");

 if (FUNC_1(1, &VAR_20)) {
  for (VAR_21 = VAR_20+FUNC_6(VAR_20)-1; VAR_21 > VAR_20 && *VAR_21 != '/'; VAR_21--);
  if (*VAR_21 == '/') VAR_21++;
  FUNC_7(VAR_18.jp, VAR_21, sizeof(VAR_18.jp)); VAR_18.jp[sizeof(VAR_18.jp)-1] = 0;
 } else FUNC_5(VAR_18.jp, "NOT FOUND");

 for(;;)
 {
  FUNC_0(VAR_15, &VAR_18);
  VAR_17 = FUNC_2(VAR_9|VAR_3|VAR_4|VAR_7|VAR_5|VAR_8|VAR_6);
  if (VAR_17 & VAR_9 ) { VAR_15--; if (VAR_15 < 0) VAR_15 = VAR_16; }
  if (VAR_17 & VAR_3) { VAR_15++; if (VAR_15 > VAR_16) VAR_15 = 0; }
  VAR_19 = FUNC_3(VAR_12, VAR_0, VAR_15);
  if (VAR_17 & (VAR_4|VAR_7)) {
   if (!FUNC_4(VAR_12, VAR_0, VAR_19, (VAR_17&VAR_7) ? 1 : 0) &&
       VAR_19 == VAR_2) {
    if (VAR_17 & VAR_4) {
     VAR_11 >>= 1;
     if (VAR_11 < 2) VAR_11 = 0;
    } else {
     if (VAR_11 < 2) VAR_11 = 2;
     else VAR_11 <<= 1;
     if (VAR_11 > 8*1024) VAR_11 = 8*1024;
    }
   }
  }
  if (VAR_17 & VAR_5) {
   if (!FUNC_4(VAR_12, VAR_0, VAR_19, 1) &&
       VAR_19 == VAR_1) {
    return;
   }
   switch (VAR_19) {
    case 128:
     if (FUNC_1(4, &VAR_20)) {
      FUNC_5(VAR_14, VAR_20);
      VAR_13 = VAR_10;
      return;
     }
     break;
    case 130:
     if (FUNC_1(8, &VAR_20)) {
      FUNC_5(VAR_14, VAR_20);
      VAR_13 = VAR_10;
      return;
     }
     break;
    case 129:
     if (FUNC_1(1, &VAR_20)) {
      FUNC_5(VAR_14, VAR_20);
      VAR_13 = VAR_10;
      return;
     }
     break;
    default:
     break;
   }
  }
  if (VAR_17 & (VAR_8|VAR_6)) return;
 }
}
