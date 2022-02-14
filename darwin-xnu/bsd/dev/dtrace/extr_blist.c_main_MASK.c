
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int daddr_t ;
typedef int buf ;
typedef TYPE_1__* blist_t ;
struct TYPE_7__ {int bl_free; int bl_radix; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (char*,int,int ) ;
 int FUNC_8 (int ,char*,char const*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,int*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (char const*,int *,int ) ;

int
FUNC_13(int VAR_3, char **VAR_4)
{
 int VAR_5 = 1024;
 int VAR_6;
 blist_t VAR_7;

 for (VAR_6 = 1; VAR_6 < VAR_3; ++VAR_6) {
  const char *VAR_8 = VAR_4[VAR_6];
  if (*VAR_8 != '-') {
   VAR_5 = FUNC_12(VAR_8, ((void*)0), 0);
   continue;
  }
  VAR_8 += 2;
  FUNC_8(VAR_0, "Bad option: %s\n", VAR_8 - 2);
  FUNC_5(1);
 }
 VAR_7 = FUNC_1(VAR_5);
 FUNC_2(VAR_7, 0, VAR_5);

 for (;;) {
  char VAR_9[1024];
  daddr_t VAR_10 = 0;
  daddr_t VAR_11 = 0;


  FUNC_9("%d/%d/%d> ", VAR_7->bl_free, VAR_5, VAR_7->bl_radix);
  FUNC_6(VAR_2);
  if (FUNC_7(VAR_9, sizeof(VAR_9), VAR_1) == ((void*)0))
   break;
  switch(VAR_9[0]) {
  case 'r':
   if (FUNC_11(VAR_9 + 1, "%d", &VAR_11) == 1) {
    FUNC_4(&VAR_7, VAR_11, 1);
   } else {
    FUNC_9("?\n");
   }
  case 'p':
   FUNC_3(VAR_7);
   break;
  case 'a':
   if (FUNC_11(VAR_9 + 1, "%d", &VAR_11) == 1) {
    daddr_t VAR_12 = FUNC_0(VAR_7, VAR_11);
    FUNC_9("    R=%04x\n", VAR_12);
   } else {
    FUNC_9("?\n");
   }
   break;
  case 'f':
   if (FUNC_11(VAR_9 + 1, "%x %d", &VAR_10, &VAR_11) == 2) {
    FUNC_2(VAR_7, VAR_10, VAR_11);
   } else {
    FUNC_9("?\n");
   }
   break;
  case '?':
  case 'h':
   FUNC_10(
       "p          -print\n"
       "a %d       -allocate\n"
       "f %x %d    -free\n"
       "r %d       -resize\n"
       "h/?        -help"
   );
   break;
  default:
   FUNC_9("?\n");
   break;
  }
 }
 return(0);
}
