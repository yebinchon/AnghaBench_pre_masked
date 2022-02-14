
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int timeOffset; struct TYPE_7__* remappedShader; int name; struct TYPE_7__* next; } ;
typedef TYPE_1__ shader_t ;
typedef int qhandle_t ;
struct TYPE_9__ {int (* Printf ) (int ,char*,char const*) ;} ;
struct TYPE_8__ {TYPE_1__* defaultShader; } ;


 int FUNC_0 (char const*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char const*,int ) ;
 TYPE_1__* FUNC_3 (char const*) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,int ) ;
 TYPE_1__** VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_7 (int ,char*,char const*) ;
 int FUNC_8 (int ,char*,char const*) ;
 TYPE_2__ VAR_5 ;

void FUNC_9(const char *VAR_6, const char *VAR_7, const char *VAR_8) {
 char VAR_9[VAR_1];
 int VAR_10;
 shader_t *VAR_11, *VAR_12;
 qhandle_t VAR_13;

 VAR_11 = FUNC_3( VAR_6 );
 if (VAR_11 == ((void*)0) || VAR_11 == VAR_5.defaultShader) {
  VAR_13 = FUNC_2(VAR_6, 0);
  VAR_11 = FUNC_4(VAR_13);
 }
 if (VAR_11 == ((void*)0) || VAR_11 == VAR_5.defaultShader) {
  VAR_4.Printf( VAR_2, "WARNING: R_RemapShader: shader %s not found\n", VAR_6 );
  return;
 }

 VAR_12 = FUNC_3( VAR_7 );
 if (VAR_12 == ((void*)0) || VAR_12 == VAR_5.defaultShader) {
  VAR_13 = FUNC_2(VAR_7, 0);
  VAR_12 = FUNC_4(VAR_13);
 }

 if (VAR_12 == ((void*)0) || VAR_12 == VAR_5.defaultShader) {
  VAR_4.Printf( VAR_2, "WARNING: R_RemapShader: new shader %s not found\n", VAR_7 );
  return;
 }



 FUNC_0( VAR_6, VAR_9 );
 VAR_10 = FUNC_6(VAR_9, VAR_0);
 for (VAR_11 = VAR_3[VAR_10]; VAR_11; VAR_11 = VAR_11->next) {
  if (FUNC_1(VAR_11->name, VAR_9) == 0) {
   if (VAR_11 != VAR_12) {
    VAR_11->remappedShader = VAR_12;
   } else {
    VAR_11->remappedShader = ((void*)0);
   }
  }
 }
 if (VAR_8) {
  VAR_12->timeOffset = FUNC_5(VAR_8);
 }
}
