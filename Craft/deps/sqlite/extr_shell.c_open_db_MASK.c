
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_data {scalar_t__ db; char* zDbFilename; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 char* FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,scalar_t__*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(struct callback_data *VAR_5){
  if( VAR_5->db==0 ){
    FUNC_6();
    FUNC_7(VAR_5->zDbFilename, &VAR_5->db);
    VAR_2 = VAR_5->db;
    if( VAR_2 && FUNC_4(VAR_2)==VAR_0 ){
      FUNC_2(VAR_2, "shellstatic", 0, VAR_1, 0,
          VAR_3, 0, 0);
    }
    if( VAR_2==0 || VAR_0!=FUNC_4(VAR_2) ){
      FUNC_1(VAR_4,"Error: unable to open database \"%s\": %s\n",
          VAR_5->zDbFilename, FUNC_5(VAR_2));
      FUNC_0(1);
    }

    FUNC_3(VAR_5->db, 1);

  }
}
