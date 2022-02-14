
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIntMsg ;
typedef int SDnodeObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (char*,int,int *) ;
 int FUNC_4 (char*,int,int *) ;
 int FUNC_5 (char*,int,int *) ;
 int * VAR_8 ;

void FUNC_6(char *VAR_9, int VAR_10, int VAR_11, SDnodeObj *VAR_12) {
  if (VAR_11 == VAR_4) {
    FUNC_3(VAR_9, VAR_10 - sizeof(SIntMsg), VAR_12);
  } else if (VAR_11 == VAR_7) {
    FUNC_5(VAR_9, VAR_10 - sizeof(SIntMsg), VAR_12);
  } else if (VAR_11 == VAR_2) {
    FUNC_1(VAR_9, VAR_10 - sizeof(SIntMsg), VAR_12);
  } else if (VAR_11 == VAR_5) {

  } else if (VAR_11 == VAR_6) {
    FUNC_4(VAR_9, VAR_10 - sizeof(SIntMsg), VAR_12);
  } else if (VAR_11 == VAR_3) {
    FUNC_2(VAR_9, VAR_10 - sizeof(SIntMsg), VAR_12);
  } else if (VAR_11 == VAR_1) {

  } else if (VAR_11 == VAR_0) {

  } else {
    FUNC_0("%s from dnode is not processed", VAR_8[VAR_11]);
  }
}
