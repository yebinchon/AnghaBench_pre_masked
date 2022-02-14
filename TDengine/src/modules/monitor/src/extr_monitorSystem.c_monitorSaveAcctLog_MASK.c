
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int8_t ;
typedef int int64_t ;
struct TYPE_2__ {int conn; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*,char*,char*,char*,char*,char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int ) ;
 int FUNC_2 (int ,char*,int ,char*) ;
 char* VAR_2 ;

void FUNC_3(char *VAR_3, int64_t VAR_4, int64_t VAR_5,
                        int64_t VAR_6, int64_t VAR_7, int64_t VAR_8, int64_t VAR_9,
                        int64_t VAR_10, int64_t VAR_11, int64_t VAR_12, int64_t VAR_13,
                        int64_t VAR_14, int64_t VAR_15, int64_t VAR_16, int64_t VAR_17,
                        int64_t VAR_18, int64_t VAR_19, int64_t VAR_20, int64_t VAR_21,
                        int64_t VAR_22, int64_t VAR_23, int8_t VAR_24) {
  char VAR_25[1024] = {0};
  FUNC_1(VAR_25,
          "insert into %s.acct_%s using %s.acct tags('%s') values(now"
          ", %ld, %ld "
          ", %ld, %ld"
          ", %ld, %ld"
          ", %ld, %ld"
          ", %ld, %ld"
          ", %ld, %ld"
          ", %ld, %ld"
          ", %ld, %ld"
          ", %ld, %ld"
          ", %ld, %ld"
          ", %d)",
          VAR_2, VAR_3, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
          VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22,
          VAR_23, VAR_24);

  FUNC_0("monitor:%p, save account info, sql %s", VAR_1->conn, VAR_25);
  FUNC_2(VAR_1->conn, VAR_25, VAR_0, "account");
}
