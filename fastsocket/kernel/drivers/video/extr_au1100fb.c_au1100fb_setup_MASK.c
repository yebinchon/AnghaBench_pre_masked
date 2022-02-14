
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int panel_idx; char* opt_mode; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 TYPE_1__* VAR_4 ;
 char* FUNC_2 (char*,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char**,char*) ;

int FUNC_9(char *VAR_6)
{
 char* VAR_7;
 int VAR_8 = FUNC_0(VAR_4);
 char* VAR_9 = ((void*)0);
 int VAR_10 = 0;

 if (VAR_8 <= 0) {
  FUNC_3("No LCD panels supported by driver!");
  return -VAR_0;
   }

 if (VAR_6) {
  while ((VAR_7 = FUNC_8(&VAR_6,",")) != ((void*)0)) {

   if (!FUNC_7(VAR_7, "panel:", 6)) {
    int VAR_11;
    VAR_7 += 6;
    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
     if (!FUNC_7(VAR_7,
                 VAR_4[VAR_11].name,
       FUNC_6(VAR_7))) {
      VAR_10 = VAR_11;
      break;
     }
    }
    if (VAR_11 >= VAR_8) {
      FUNC_5("Panel %s not supported!", VAR_7);
    }
   }
   if (!FUNC_7(VAR_7, "nocursor", 8)) {
    VAR_7 += 8;
    VAR_5 = 1;
    FUNC_4("Cursor disabled");
   }

   else if (FUNC_1(VAR_7[0])) {
    VAR_9 = FUNC_2(VAR_7, VAR_2);
    if (!VAR_9) {
     FUNC_3("memory allocation failed");
     return -VAR_1;
    }
   }

   else {
    FUNC_5("Unsupported option \"%s\"", VAR_7);
   }
  }
 }

 VAR_3.panel_idx = VAR_10;
 VAR_3.opt_mode = VAR_9;

 FUNC_4("Panel=%s Mode=%s",
   VAR_4[VAR_3.panel_idx].name,
         VAR_3.opt_mode ? VAR_3.opt_mode : "default");

 return 0;
}
