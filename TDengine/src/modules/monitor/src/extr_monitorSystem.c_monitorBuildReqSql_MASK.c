
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int httpReqNum; int insertReqNum; int selectReqNum; } ;
typedef TYPE_1__ SCountInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,int,int,int) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(char *VAR_0) {
  SCountInfo VAR_1;
  VAR_1.httpReqNum = VAR_1.insertReqNum = VAR_1.selectReqNum = 0;
  FUNC_0)(&VAR_1);

  return FUNC_1(VAR_0, ", %d, %d, %d)", VAR_1.httpReqNum, VAR_1.selectReqNum, VAR_1.insertReqNum);
}
