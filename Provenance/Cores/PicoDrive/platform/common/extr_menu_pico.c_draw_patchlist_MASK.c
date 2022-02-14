
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; char* name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int,char*,int) ;
 int FUNC_3 (int,int,char*) ;

__attribute__((used)) static void FUNC_4(int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_6 = VAR_2 / VAR_3;
 VAR_7 = VAR_6 / 2 - VAR_5;

 FUNC_0(1, 0);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_9 = VAR_7 + VAR_8;
  if (VAR_9 < 0) continue;
  if (VAR_9 >= VAR_6) break;
  VAR_10 = VAR_1[VAR_8].active;
  FUNC_2(14, VAR_9 * VAR_3, VAR_10 ? "ON " : "OFF", VAR_10 ? 0xfff6 : 0xffff);
  FUNC_2(14 + VAR_4*4, VAR_9 * VAR_3, VAR_1[VAR_8].name, VAR_10 ? 0xfff6 : 0xffff);
 }
 VAR_9 = VAR_7 + VAR_8;
 if (VAR_9 < VAR_6)
  FUNC_2(14, VAR_9 * VAR_3, "done", 0xffff);

 FUNC_3(5, VAR_6 / 2 * VAR_3, ">");
 FUNC_1();
}
