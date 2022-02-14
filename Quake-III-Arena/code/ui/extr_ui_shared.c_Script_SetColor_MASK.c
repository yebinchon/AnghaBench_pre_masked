
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_4__ {float* backColor; float* foreColor; float* borderColor; int flags; } ;
struct TYPE_5__ {TYPE_1__ window; } ;
typedef TYPE_2__ itemDef_t ;


 int FUNC_0 (char**,float*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char**,char const**) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(itemDef_t *VAR_2, char **VAR_3) {
  const char *VAR_4;
  int VAR_5;
  float VAR_6;
  vec4_t *VAR_7;

  if (FUNC_2(VAR_3, &VAR_4)) {
      VAR_7 = ((void*)0);
      if (FUNC_1(VAR_4, "backcolor") == 0) {
        VAR_7 = &VAR_2->window.backColor;
        VAR_2->window.flags |= VAR_0;
      } else if (FUNC_1(VAR_4, "forecolor") == 0) {
        VAR_7 = &VAR_2->window.foreColor;
        VAR_2->window.flags |= VAR_1;
      } else if (FUNC_1(VAR_4, "bordercolor") == 0) {
        VAR_7 = &VAR_2->window.borderColor;
      }

      if (VAR_7) {
        for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
          if (!FUNC_0(VAR_3, &VAR_6)) {
            return;
          }
          (*VAR_7)[VAR_5] = VAR_6;
        }
      }
  }
}
