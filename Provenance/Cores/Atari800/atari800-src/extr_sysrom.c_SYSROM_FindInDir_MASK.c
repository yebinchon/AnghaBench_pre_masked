
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dirent {char* d_name; } ;
typedef scalar_t__ ULONG ;
struct TYPE_2__ {int size; scalar_t__ crc32; int filename; scalar_t__ unset; } ;
typedef int FILE ;
typedef int DIR ;


 int FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,char const*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 scalar_t__ VAR_6 ;
 int * FUNC_10 (char const*) ;
 struct dirent* FUNC_11 (int *) ;
 int FUNC_12 (int ,char*) ;
 scalar_t__ FUNC_13 (char) ;

int FUNC_14(char const *VAR_7, int VAR_8)
{
 DIR *VAR_9;
 struct dirent *VAR_10;

 if (VAR_8 && VAR_6 == 0)

  return VAR_5;

 if ((VAR_9 = FUNC_10(VAR_7)) == ((void*)0))
  return VAR_1;

 while ((VAR_10 = FUNC_11(VAR_9)) != ((void*)0)) {
  char VAR_11[VAR_2];
  FILE *VAR_12;
  int VAR_13;
  int VAR_14;
  ULONG VAR_15;
  int VAR_16 = VAR_1;
  FUNC_4(VAR_11, VAR_7, VAR_10->d_name);
  if ((VAR_12 = FUNC_9(VAR_11, "rb")) == ((void*)0))

   continue;

  VAR_13 = FUNC_5(VAR_12);

  if (!FUNC_2(VAR_13)){
   FUNC_8(VAR_12);
   continue;
  }
  FUNC_6(VAR_12);

  if (!FUNC_0(VAR_12, &VAR_15)) {
   FUNC_8(VAR_12);
   continue;
  }
  FUNC_8(VAR_12);


  for (VAR_14 = 0; VAR_14 < VAR_3; ++VAR_14) {
   if ((!VAR_8 || VAR_4[VAR_14].unset)
       && VAR_4[VAR_14].size == VAR_13
       && VAR_4[VAR_14].crc32 != VAR_0 && VAR_4[VAR_14].crc32 == VAR_15) {
    FUNC_12(VAR_4[VAR_14].filename, VAR_11);
    FUNC_1(VAR_14);
    VAR_16 = VAR_5;
    break;
   }
  }

  if (!VAR_16) {

   char *VAR_17 = VAR_10->d_name;
   while (*VAR_17 != 0) {
    *VAR_17 = (char)FUNC_13(*VAR_17);
    ++VAR_17;
   }

   VAR_14 = FUNC_3(VAR_10->d_name, VAR_13, VAR_8);
   if (VAR_14 >= 0){
    FUNC_12(VAR_4[VAR_14].filename, VAR_11);
    FUNC_1(VAR_14);
   }
  }
 }

 FUNC_7(VAR_9);
 return VAR_5;
}
