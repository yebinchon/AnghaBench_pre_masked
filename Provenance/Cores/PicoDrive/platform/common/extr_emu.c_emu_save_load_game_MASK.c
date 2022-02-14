
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* bram; } ;
struct TYPE_3__ {unsigned char* data; int size; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__ VAR_5 ;
 char* FUNC_1 (int,int,int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (unsigned char*,int,int,int *) ;
 int FUNC_6 (unsigned char*,int,int,int *) ;
 int FUNC_7 (char*,int,int,char*) ;
 int FUNC_8 (int*,int*,int) ;
 int VAR_6 ;
 int FUNC_9 () ;

int FUNC_10(int VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 char *VAR_10;


 VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_6, ((void*)0));
 if (VAR_10 == ((void*)0)) {
  if (!VAR_8)
   FUNC_2(VAR_7 ? "LOAD FAILED (missing file)" : "SAVE FAILED");
  return -1;
 }

 FUNC_7("saveLoad (%i, %i): %s\n", VAR_7, VAR_8, VAR_10);

 if (VAR_8)
 {
  FILE *VAR_11;
  int VAR_12;
  unsigned char *VAR_13;
  int VAR_14 = 1;
  if (VAR_2 & VAR_0)
  {
   if (VAR_3 & VAR_1) {
    VAR_12 = 0x12000;
    VAR_13 = VAR_5.data;
    if (VAR_13)
     FUNC_8((int *)VAR_13, (int *)VAR_4->bram, 0x2000/4);
   } else {
    VAR_12 = 0x2000;
    VAR_13 = VAR_4->bram;
    VAR_14 = 0;
   }
  } else {
   VAR_12 = VAR_5.size;
   VAR_13 = VAR_5.data;
  }
  if (VAR_13 == ((void*)0))
   return 0;

  if (VAR_7)
  {
   VAR_11 = FUNC_4(VAR_10, "rb");
   if (!VAR_11)
    return -1;
   VAR_9 = FUNC_5(VAR_13, 1, VAR_12, VAR_11);
   VAR_9 = VAR_9 > 0 ? 0 : -1;
   FUNC_3(VAR_11);
   if ((VAR_2 & VAR_0) && (VAR_3&VAR_1))
    FUNC_8((int *)VAR_4->bram, (int *)VAR_13, 0x2000/4);
  } else {


   for (; VAR_12 > 0; VAR_12--)
    if (VAR_13[VAR_12-1]) break;

   if (VAR_12) {
    VAR_11 = FUNC_4(VAR_10, VAR_14 ? "wb" : "r+b");
    if (!VAR_11) VAR_11 = FUNC_4(VAR_10, "wb");
    if (!VAR_11) return -1;
    VAR_9 = FUNC_6(VAR_13, 1, VAR_12, VAR_11);
    VAR_9 = (VAR_9 != VAR_12) ? -1 : 0;
    FUNC_3(VAR_11);



   }
  }
  return VAR_9;
 }
 else
 {
  VAR_9 = FUNC_0(VAR_10, !VAR_7);
  if (!VAR_9) {



   FUNC_2(VAR_7 ? "STATE LOADED" : "STATE SAVED");
  } else {
   FUNC_2(VAR_7 ? "LOAD FAILED" : "SAVE FAILED");
   VAR_9 = -1;
  }

  return VAR_9;
 }
}
