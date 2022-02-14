
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arguments {char* member_1; char* member_2; int member_7; int member_8; int member_9; int member_10; int member_13; int member_14; int member_18; scalar_t__ isDumpIn; scalar_t__ abort; int member_17; int * member_16; int member_15; int member_12; int member_11; int * member_6; int member_5; int member_4; int member_3; int * member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,char**,int ,int ,struct arguments*) ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct arguments*) ;
 scalar_t__ FUNC_4 (struct arguments*) ;
 scalar_t__ FUNC_5 (struct arguments*) ;

int FUNC_6(int VAR_4, char *VAR_5[]) {
  struct arguments VAR_6 = {

    ((void*)0), "root", "taosdata", 0,

    VAR_0, VAR_0, ((void*)0),

    0, 0,

    0, 0, 0, &VAR_2, 1, 0,

    0, ((void*)0), 0, 0};



  FUNC_0(&VAR_3, VAR_4, VAR_5, 0, 0, &VAR_6);

  if (VAR_6.abort) FUNC_1(10, 0, "ABORTED");

  if (FUNC_3(&VAR_6) < 0) {
    FUNC_2(VAR_1);
  }

  if (VAR_6.isDumpIn) {
    if (FUNC_4(&VAR_6) < 0) return -1;
  } else {
    if (FUNC_5(&VAR_6) < 0) return -1;
  }

  return 0;
}
