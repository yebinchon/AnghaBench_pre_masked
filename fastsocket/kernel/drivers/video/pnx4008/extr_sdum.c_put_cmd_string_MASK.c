
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cmdstring {int channelnr; int prestringlen; int poststringlen; int postcmd; int precmd; } ;
typedef int cmds ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int,int*) ;

__attribute__((used)) static int FUNC_4(struct cmdstring VAR_4)
{
 u16 *VAR_5;
 u32 *VAR_6;
 u32 VAR_7;

 int VAR_8 = VAR_4.channelnr;

 if (VAR_8 < 0 || VAR_8 > VAR_3)
  return -VAR_1;
 else if ((VAR_6 =
    (int *)FUNC_1(VAR_0,
      sizeof(int) * VAR_3)) ==
   ((void*)0))
  return -VAR_2;
 else {
  VAR_7 = FUNC_0(&VAR_6[VAR_4.channelnr]);
  if ((VAR_5 =
       (u16 *) FUNC_1(VAR_7,
          sizeof(VAR_4))) == ((void*)0)) {
   FUNC_2(VAR_6);
   return -VAR_2;
  } else {
   int VAR_9;
   for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
    FUNC_3(*((u16 *)&VAR_4.prestringlen + VAR_9),
       VAR_5 + VAR_9);

   for (VAR_9 = 0; VAR_9 < VAR_4.prestringlen / 2; VAR_9++)
     FUNC_3(*((u16 *)&VAR_4.precmd + VAR_9),
        VAR_5 + VAR_9 + 8);

   for (VAR_9 = 0; VAR_9 < VAR_4.poststringlen / 2; VAR_9++)
    FUNC_3(*((u16 *)&VAR_4.postcmd + VAR_9),
       VAR_5 + VAR_9 + 8 +
        VAR_4.prestringlen / 2);

   FUNC_2(VAR_6);
   FUNC_2(VAR_5);
  }
 }

 return 0;
}
