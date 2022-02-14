
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bios_names_t {char* us; char* eu; char* jp; } ;
struct TYPE_3__ {int id; } ;
typedef TYPE_1__ menu_entry ;






 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int,int,char*,char*) ;

__attribute__((used)) static void FUNC_3(const menu_entry *VAR_1, int VAR_2, int VAR_3, void *VAR_4)
{
 struct bios_names_t *VAR_5 = VAR_4;
 char VAR_6[16];

 switch (VAR_1->id)
 {
  case 128: FUNC_2(VAR_2, VAR_3, "USA BIOS:     %s", VAR_5->us); break;
  case 130: FUNC_2(VAR_2, VAR_3, "EUR BIOS:     %s", VAR_5->eu); break;
  case 129: FUNC_2(VAR_2, VAR_3, "JAP BIOS:     %s", VAR_5->jp); break;
  case 131:
   if (VAR_0 > 1) FUNC_0(VAR_6, "%5iK", VAR_0 * 2);
   else FUNC_1(VAR_6, "     OFF");
   FUNC_2(VAR_2, VAR_3, "ReadAhead buffer      %s", VAR_6);
   break;
  default:break;
 }
}
