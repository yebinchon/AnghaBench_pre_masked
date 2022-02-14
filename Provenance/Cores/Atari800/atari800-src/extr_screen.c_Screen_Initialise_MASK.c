
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UBYTE ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(int *VAR_10, char *VAR_11[])
{
 int VAR_12;
 int VAR_13;
 int VAR_14 = VAR_0;

 for (VAR_12 = VAR_13 = 1; VAR_12 < *VAR_10; VAR_12++) {
  int VAR_15 = (VAR_12 + 1 < *VAR_10);
  int VAR_16 = VAR_0;

  if (FUNC_5(VAR_11[VAR_12], "-screenshots") == 0) {
   if (VAR_15)
    FUNC_2(VAR_11[++VAR_12]);
   else VAR_16 = VAR_9;
  }
  else if (FUNC_5(VAR_11[VAR_12], "-showspeed") == 0) {
   VAR_8 = VAR_9;
  }
  else {
   if (FUNC_5(VAR_11[VAR_12], "-help") == 0) {
    VAR_14 = VAR_9;
    FUNC_0("\t-screenshots <p> Set filename pattern for screenshots");
    FUNC_0("\t-showspeed       Show percentage of actual speed");
   }
   VAR_11[VAR_13++] = VAR_11[VAR_12];
  }

  if (VAR_16) {
   FUNC_0("Missing argument for '%s'", VAR_11[VAR_12]);
   return VAR_0;
  }
 }
 *VAR_10 = VAR_13;


 if (VAR_14)
  return VAR_9;

 if (VAR_3 == ((void*)0)) {
  VAR_3 = (ULONG *) FUNC_3(VAR_1 * VAR_2);

  FUNC_4(VAR_3, 0, VAR_1 * VAR_2);
 }

 return VAR_9;
}
