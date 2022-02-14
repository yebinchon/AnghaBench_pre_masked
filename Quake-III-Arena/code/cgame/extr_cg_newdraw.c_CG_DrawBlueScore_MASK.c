
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec4_t ;
struct TYPE_4__ {scalar_t__ h; scalar_t__ y; scalar_t__ w; scalar_t__ x; } ;
typedef TYPE_1__ rectDef_t ;
typedef int qhandle_t ;
typedef int num ;
struct TYPE_5__ {scalar_t__ scores2; } ;


 int FUNC_0 (scalar_t__,scalar_t__,float,int ,char*,int ,int ,int) ;
 int FUNC_1 (char*,float,int ) ;
 int FUNC_2 (char*,int,char*,...) ;
 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_3(rectDef_t *VAR_2, float VAR_3, vec4_t VAR_4, qhandle_t VAR_5, int VAR_6 ) {
 int VAR_7;
 char VAR_8[16];

 if ( VAR_1.scores2 == VAR_0 ) {
  FUNC_2 (VAR_8, sizeof(VAR_8), "-");
 }
 else {
  FUNC_2 (VAR_8, sizeof(VAR_8), "%i", VAR_1.scores2);
 }
 VAR_7 = FUNC_1(VAR_8, VAR_3, 0);
 FUNC_0(VAR_2->x + VAR_2->w - VAR_7, VAR_2->y + VAR_2->h, VAR_3, VAR_4, VAR_8, 0, 0, VAR_6);
}
