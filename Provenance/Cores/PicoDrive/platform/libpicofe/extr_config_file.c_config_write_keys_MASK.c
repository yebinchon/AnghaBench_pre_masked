
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mask; int * name; } ;
struct TYPE_3__ {int mask; int * name; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (int *,char*,...) ;
 int* VAR_5 ;
 int FUNC_3 (int,int ,int*) ;
 int* FUNC_4 (int) ;
 char* FUNC_5 (int,int ,int ) ;
 char* FUNC_6 (int,int) ;
 TYPE_1__* VAR_6 ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (char*,int *,int) ;

void FUNC_9(FILE *VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
 {
  const int *VAR_9 = FUNC_4(VAR_8);
  const char *VAR_10 = FUNC_5(VAR_8, 0, 0);
  int VAR_11, VAR_12 = 0;

  if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
   continue;

  FUNC_2(VAR_7, "binddev = %s\n", VAR_10);
  FUNC_3(VAR_8, VAR_2, &VAR_12);

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
  {
   int VAR_13, VAR_14, VAR_15;
   char VAR_16[32];

   VAR_16[0] = VAR_16[31] = 0;
   VAR_10 = FUNC_6(VAR_8, VAR_11);

   VAR_14 = VAR_9[FUNC_0(VAR_11, VAR_1)];
   for (VAR_13 = 0; VAR_14 && VAR_6[VAR_13].name != ((void*)0); VAR_13++) {
    VAR_15 = VAR_6[VAR_13].mask;
    if (VAR_15 & VAR_14) {
     FUNC_8(VAR_16, VAR_6[VAR_13].name, 31);
     FUNC_2(VAR_7, "bind %s = player1 %s\n", VAR_10, FUNC_7(VAR_16));
     VAR_14 &= ~VAR_15;
    }
    VAR_15 = VAR_6[VAR_13].mask << 16;
    if (VAR_15 & VAR_14) {
     FUNC_8(VAR_16, VAR_6[VAR_13].name, 31);
     FUNC_2(VAR_7, "bind %s = player2 %s\n", VAR_10, FUNC_7(VAR_16));
     VAR_14 &= ~VAR_15;
    }
   }

   VAR_14 = VAR_9[FUNC_0(VAR_11, VAR_0)];
   for (VAR_13 = 0; VAR_14 && VAR_4[VAR_13].name != ((void*)0); VAR_13++) {
    VAR_15 = VAR_4[VAR_13].mask;
    if (VAR_15 & VAR_14) {
     FUNC_8(VAR_16, VAR_4[VAR_13].name, 31);
     FUNC_2(VAR_7, "bind %s = %s\n", VAR_10, FUNC_7(VAR_16));
     VAR_14 &= ~VAR_15;
    }
   }
  }
 }
}
