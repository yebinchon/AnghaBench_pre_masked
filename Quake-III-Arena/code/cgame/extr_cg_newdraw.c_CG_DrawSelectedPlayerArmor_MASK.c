
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * vec4_t ;
struct TYPE_5__ {int w; scalar_t__ h; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ rectDef_t ;
typedef scalar_t__ qhandle_t ;
typedef int num ;
struct TYPE_6__ {scalar_t__ armor; } ;
typedef TYPE_2__ clientInfo_t ;
struct TYPE_7__ {TYPE_2__* clientinfo; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int,scalar_t__,scalar_t__) ;
 size_t FUNC_1 () ;
 int FUNC_2 (scalar_t__,scalar_t__,float,int *,char*,int ,int ,int) ;
 int FUNC_3 (char*,float,int ) ;
 int FUNC_4 (char*,int,char*,scalar_t__) ;
 TYPE_3__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4, qhandle_t VAR_5, int VAR_6 ) {
 clientInfo_t *VAR_7;
 int VAR_8;
 char VAR_9[16];
  VAR_7 = VAR_0.clientinfo + VAR_1[FUNC_1()];
  if (VAR_7) {
    if (VAR_7->armor > 0) {
   if (VAR_5) {
    FUNC_5( VAR_4 );
    FUNC_0(VAR_2->x, VAR_2->y, VAR_2->w, VAR_2->h, VAR_5);
    FUNC_5( ((void*)0) );
   } else {
    FUNC_4 (VAR_9, sizeof(VAR_9), "%i", VAR_7->armor);
    VAR_8 = FUNC_3(VAR_9, VAR_3, 0);
    FUNC_2(VAR_2->x + (VAR_2->w - VAR_8) / 2, VAR_2->y + VAR_2->h, VAR_3, VAR_4, VAR_9, 0, 0, VAR_6);
   }
  }
  }
}
