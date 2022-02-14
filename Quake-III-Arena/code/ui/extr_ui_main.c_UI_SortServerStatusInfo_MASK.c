
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numLines; char*** lines; } ;
typedef TYPE_1__ serverStatusInfo_t ;
struct TYPE_5__ {char* altName; scalar_t__ name; } ;


 int FUNC_0 (scalar_t__,char*) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2( serverStatusInfo_t *VAR_1 ) {
 int VAR_2, VAR_3, VAR_4;
 char *VAR_5, *VAR_6;




 VAR_4 = 0;
 for (VAR_2 = 0; VAR_0[VAR_2].name; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_1->numLines; VAR_3++) {
   if ( !VAR_1->lines[VAR_3][1] || VAR_1->lines[VAR_3][1][0] ) {
    continue;
   }
   if ( !FUNC_0(VAR_0[VAR_2].name, VAR_1->lines[VAR_3][0]) ) {

    VAR_5 = VAR_1->lines[VAR_4][0];
    VAR_6 = VAR_1->lines[VAR_4][3];
    VAR_1->lines[VAR_4][0] = VAR_1->lines[VAR_3][0];
    VAR_1->lines[VAR_4][3] = VAR_1->lines[VAR_3][3];
    VAR_1->lines[VAR_3][0] = VAR_5;
    VAR_1->lines[VAR_3][3] = VAR_6;

    if ( FUNC_1(VAR_0[VAR_2].altName) ) {
     VAR_1->lines[VAR_4][0] = VAR_0[VAR_2].altName;
    }
    VAR_4++;
   }
  }
 }
}
