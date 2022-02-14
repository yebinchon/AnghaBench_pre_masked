
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mask; } ;
typedef TYPE_1__ me_bind_action ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_1__ const*,int,int,int,int,int,int) ;
 int FUNC_2 (int,int,int,int,int ) ;
 int FUNC_3 (int,int ,int*) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,int *,int) ;
 int const FUNC_6 (int *,int) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int*,int*,int *,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(const me_bind_action *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8 = 0, VAR_9 = VAR_5 - 1, VAR_10 = 0;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;

 for (VAR_7 = 0, VAR_11 = -1, VAR_13 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (FUNC_4(VAR_7, 1, 0) != ((void*)0)) {
   VAR_13++;
   if (VAR_11 < 0)
    VAR_11 = VAR_7;
  }
 }

 if (VAR_11 == -1) {
  FUNC_9("no devs, can't do config\n");
  return;
 }

 VAR_11 = -1;
 VAR_19 = 0;
 if (VAR_6 == 1)
  VAR_19 = 16;
 VAR_18 = VAR_6 >= 0 ? VAR_1 : VAR_0;

 for (;;)
 {
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_8, VAR_11, VAR_13, 0);
  VAR_16 = FUNC_5(128|134|133|129
    |131|130|132, ((void*)0), 100);
  switch (VAR_16) {
   case 128: VAR_8--; if (VAR_8 < 0) VAR_8 = VAR_9; continue;
   case 134: VAR_8++; if (VAR_8 > VAR_9) VAR_8 = 0; continue;
   case 133:
    for (VAR_7 = 0, VAR_11--; VAR_7 < VAR_3 + 1; VAR_7++, VAR_11--) {
     if (VAR_11 < -1)
      VAR_11 = VAR_3 - 1;
     if (VAR_11 == -1 || FUNC_4(VAR_11, 0, 0) != ((void*)0))
      break;
    }
    continue;
   case 129:
    for (VAR_7 = 0, VAR_11++; VAR_7 < VAR_3; VAR_7++, VAR_11++) {
     if (VAR_11 >= VAR_3)
      VAR_11 = -1;
     if (VAR_11 == -1 || FUNC_4(VAR_11, 0, 0) != ((void*)0))
      break;
    }
    continue;
   case 131:
    return;
   case 130:
    if (VAR_8 >= VAR_5)
     return;
    while (FUNC_6(((void*)0), 30) & 130)
     ;
    break;
   case 132:
    FUNC_7(VAR_11, VAR_4[VAR_8].mask << VAR_19, VAR_18);
    continue;
   default:continue;
  }

  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_8, VAR_11, VAR_13, 1);


  for (VAR_15 = 1; VAR_15; )
   VAR_14 = FUNC_8(&VAR_12, &VAR_15, ((void*)0), -1);

  VAR_7 = FUNC_0(VAR_12, VAR_4[VAR_8].mask << VAR_19, VAR_18);
  VAR_17 = (VAR_7 > 0);


  FUNC_3(VAR_12, VAR_2, &VAR_10);
  if (VAR_7 == 1 && VAR_18 == VAR_0 && VAR_10)
   VAR_17 = 0;

  if (VAR_17)
   FUNC_7(VAR_12, VAR_4[VAR_8].mask << VAR_19, VAR_18);

  FUNC_2(VAR_12, VAR_14, VAR_4[VAR_8].mask << VAR_19, VAR_18, 0);
 }
}
