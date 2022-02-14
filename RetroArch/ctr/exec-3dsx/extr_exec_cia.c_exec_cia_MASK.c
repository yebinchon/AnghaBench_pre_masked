
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_5__ {size_t argc; char* args; } ;
typedef TYPE_1__ ciaParam ;
struct TYPE_6__ {int titleID; int version; } ;
typedef int Result ;
typedef int Handle ;
typedef int FS_Archive ;
typedef TYPE_2__ AM_TitleEntry ;


 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int ,char const*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (char const*,struct stat*) ;
 int FUNC_19 (char*,char const*) ;
 scalar_t__ FUNC_20 (char const*) ;

int FUNC_21(const char* VAR_10, const char** VAR_11){
 struct stat VAR_12;
 bool VAR_13;
 bool VAR_14;

 if(VAR_10 == ((void*)0) || VAR_10[0] == '\0'){
  VAR_9 = VAR_1;
  return -1;
 }

 VAR_13 = FUNC_18(VAR_10, &VAR_12) == 0;
 if(!VAR_13){
  VAR_9 = VAR_2;
  return -1;
 }
 else if(FUNC_9(VAR_12.st_mode)){
  VAR_9 = VAR_1;;
  return -1;
 }

 VAR_14 = FUNC_8(FUNC_11()) && FUNC_8(FUNC_14());
 if(VAR_14){
  Result VAR_15;
  AM_TitleEntry VAR_16;
  FS_Archive VAR_17;
  Handle VAR_18;
  int VAR_19;
  ciaParam VAR_20;
  int VAR_21;


  VAR_15 = FUNC_5(&VAR_17, VAR_0, FUNC_15(VAR_7, ""));
  if(FUNC_7(VAR_15))
   FUNC_12("Cant open SD FS archive.");

  VAR_15 = FUNC_6(&VAR_18, VAR_17, FUNC_15(VAR_6, VAR_10 + 5 ), VAR_4, 0);
  if(FUNC_7(VAR_15))
   FUNC_12("Cant open CIA file.");

  VAR_15 = FUNC_0(VAR_5, &VAR_16, VAR_18);
  if(FUNC_7(VAR_15))
   FUNC_12("Cant get CIA file info.");

  VAR_19 = FUNC_17(VAR_16.titleID, VAR_16.version);
  if(VAR_19 == -1){

   FUNC_12("Could not read title id list.");
  }
  else if(VAR_19 == 0){

   int VAR_22 = FUNC_16(VAR_18);
   if(VAR_22 == -1)
    FUNC_12("Cant install CIA.");
  }

  FUNC_3(VAR_18);
  FUNC_4(VAR_17);

  VAR_20.argc = 0;
  VAR_21 = 0;
  char* VAR_23 = VAR_20.args;
  while(VAR_11[VAR_20.argc] != ((void*)0)){
   FUNC_19(VAR_23, VAR_11[VAR_20.argc]);
   VAR_23 += FUNC_20(VAR_11[VAR_20.argc]) + 1;
   VAR_21 += FUNC_20(VAR_11[VAR_20.argc]) + 1;
   VAR_20.argc++;
  }

  VAR_15 = FUNC_2(0, VAR_16.titleID, 0x1);
  if(FUNC_7(VAR_15))
   FUNC_12("CIA cant run, cant prepare.");

  VAR_15 = FUNC_1(&VAR_20, sizeof(VAR_20.argc) + VAR_21, VAR_8);
  if(FUNC_7(VAR_15))
   FUNC_12("CIA cant run, cant jump.");


  while(1);
 }


 FUNC_10();
 FUNC_13();
 VAR_9 = VAR_3;
 return -1;
}
