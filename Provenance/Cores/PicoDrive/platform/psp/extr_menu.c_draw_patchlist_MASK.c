
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; char* name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,char*,int,int) ;
 int FUNC_3 (int,int,char*) ;

__attribute__((used)) static void FUNC_4(int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = 13 - VAR_2;

 FUNC_0();

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = VAR_3 + VAR_4;
  if (VAR_5 < 0) continue;
  if (VAR_5 > 26) break;
  VAR_6 = VAR_1[VAR_4].active;
  FUNC_2(14, VAR_5*10, VAR_6 ? "ON " : "OFF", VAR_6 ? 0xfff6 : 0xffff, 3);
  FUNC_2(14+6*4, VAR_5*10, VAR_1[VAR_4].name, VAR_6 ? 0xfff6 : 0xffff, 53-6);
 }
 VAR_5 = VAR_3 + VAR_4;
 if (VAR_5 < 27) FUNC_2(14, VAR_5*10, "done", 0xffff, 4);

 FUNC_3(5, 130, ">");
 FUNC_1();
}
