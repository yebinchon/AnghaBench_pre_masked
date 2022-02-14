
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
 unsigned long FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 scalar_t__* VAR_14 ;
 scalar_t__* VAR_15 ;
 int FUNC_5 (scalar_t__*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__*,char*,int) ;

__attribute__((used)) static void FUNC_8(void)
{
 static int VAR_16 = 0;
 int VAR_17 = 10;
 unsigned long VAR_18 = 0;
 struct bios_names_t VAR_19;
 menu_id VAR_20;
 char *VAR_21, *VAR_22;

 if (FUNC_1(4, &VAR_21)) {
  for (VAR_22 = VAR_21+FUNC_6(VAR_21)-1; VAR_22 > VAR_21 && *VAR_22 != '/'; VAR_22--);
  if (*VAR_22 == '/') VAR_22++;
  FUNC_7(VAR_19.us, VAR_22, sizeof(VAR_19.us)); VAR_19.us[sizeof(VAR_19.us)-1] = 0;
 } else FUNC_5(VAR_19.us, "NOT FOUND");

 if (FUNC_1(8, &VAR_21)) {
  for (VAR_22 = VAR_21+FUNC_6(VAR_21)-1; VAR_22 > VAR_21 && *VAR_22 != '/'; VAR_22--);
  if (*VAR_22 == '/') VAR_22++;
  FUNC_7(VAR_19.eu, VAR_22, sizeof(VAR_19.eu)); VAR_19.eu[sizeof(VAR_19.eu)-1] = 0;
 } else FUNC_5(VAR_19.eu, "NOT FOUND");

 if (FUNC_1(1, &VAR_21)) {
  for (VAR_22 = VAR_21+FUNC_6(VAR_21)-1; VAR_22 > VAR_21 && *VAR_22 != '/'; VAR_22--);
  if (*VAR_22 == '/') VAR_22++;
  FUNC_7(VAR_19.jp, VAR_22, sizeof(VAR_19.jp)); VAR_19.jp[sizeof(VAR_19.jp)-1] = 0;
 } else FUNC_5(VAR_19.jp, "NOT FOUND");

 VAR_14[0] = 0;

 for (;;)
 {
  FUNC_0(VAR_16, &VAR_19);
  VAR_18 = FUNC_2(VAR_8|VAR_4|VAR_5|VAR_6|VAR_9|VAR_3|VAR_7, 0);
  if (VAR_18 & VAR_8 ) { VAR_16--; if (VAR_16 < 0) VAR_16 = VAR_17; }
  if (VAR_18 & VAR_4) { VAR_16++; if (VAR_16 > VAR_17) VAR_16 = 0; }
  VAR_20 = FUNC_3(VAR_12, VAR_0, VAR_16);
  if (VAR_18 & (VAR_5|VAR_6)) {
   if (!FUNC_4(VAR_12, VAR_0, VAR_20, (VAR_18&VAR_6) ? 1 : 0) &&
       VAR_20 == VAR_2) {
    if (VAR_18 & VAR_5) {
     VAR_11 >>= 1;
     if (VAR_11 < 2) VAR_11 = 0;
    } else {
     if (VAR_11 < 2) VAR_11 = 2;
     else VAR_11 <<= 1;
     if (VAR_11 > 8*1024) VAR_11 = 8*1024;
    }
   }
  }
  if (VAR_18 & VAR_3)
   if (!FUNC_4(VAR_12, VAR_0, VAR_20, 1) &&
       VAR_20 == VAR_1) {
    return;
   }
  if (VAR_18 & VAR_7) {
   switch (VAR_20) {
    case 128:
     if (FUNC_1(4, &VAR_21)) {
      FUNC_5(VAR_15, VAR_21);
      VAR_13 = VAR_10;
      return;
     }
     break;
    case 130:
     if (FUNC_1(8, &VAR_21)) {
      FUNC_5(VAR_15, VAR_21);
      VAR_13 = VAR_10;
      return;
     }
     break;
    case 129:
     if (FUNC_1(1, &VAR_21)) {
      FUNC_5(VAR_15, VAR_21);
      VAR_13 = VAR_10;
      return;
     }
     break;
    default:
     break;
   }
  }
  if (VAR_18 & VAR_9) return;
 }
}
