
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_5__ {scalar_t__ i2eValid; scalar_t__ i2eFatal; int * i2eFatalTrap; scalar_t__ i2eFifoOutInts; scalar_t__ i2eFifoInInts; scalar_t__* i2eLeadoffWord; scalar_t__ i2eChannelCnt; int * i2eChannelPtr; scalar_t__ i2eOutMailWaiting; scalar_t__ i2eWaitingForEmptyFifo; int i2eUsingIrq; int i2eState; scalar_t__ i2eBase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(i2eBordStrPtr VAR_7)
{

 if (VAR_7->i2eValid != VAR_3)
 {
  FUNC_0(VAR_7, VAR_1);
 }

 FUNC_2(0, VAR_7->i2eBase + VAR_0);
 FUNC_1(VAR_7, 50);
 FUNC_2(0, VAR_7->i2eBase + VAR_0);
 VAR_7->i2eState = VAR_5;

 VAR_6 = 0;





 VAR_7->i2eUsingIrq = VAR_4;
 VAR_7->i2eWaitingForEmptyFifo = 0;
 VAR_7->i2eOutMailWaiting = 0;
 VAR_7->i2eChannelPtr = ((void*)0);
 VAR_7->i2eChannelCnt = 0;

 VAR_7->i2eLeadoffWord[0] = 0;
 VAR_7->i2eFifoInInts = 0;
 VAR_7->i2eFifoOutInts = 0;
 VAR_7->i2eFatalTrap = ((void*)0);
 VAR_7->i2eFatal = 0;

 FUNC_0(VAR_7, VAR_2);
}
