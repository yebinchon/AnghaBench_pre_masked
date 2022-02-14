
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* insertReqNum; void* selectReqNum; int httpReqNum; } ;
typedef TYPE_1__ SCountInfo ;


 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(SCountInfo *VAR_2) {
  FUNC_1(&VAR_2->httpReqNum);
  VAR_2->selectReqNum = FUNC_0(&VAR_1, 0);
  VAR_2->insertReqNum = FUNC_0(&VAR_0, 0);
}
