
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ taskStatus; scalar_t__ failureCount; int taskCallString; } ;
typedef TYPE_1__ WorkerTask ;
typedef scalar_t__ TaskStatus ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(WorkerTask *VAR_7, char *VAR_8)
{
 TaskStatus VAR_9 = VAR_5;

 VAR_9 = VAR_7->taskStatus;
 FUNC_0(VAR_9 != VAR_5);
 if (VAR_9 == VAR_6 || VAR_9 == VAR_3 ||
  VAR_9 == VAR_2)
 {

 }
 else if (VAR_9 == VAR_4)
 {
  FUNC_1(VAR_7->taskCallString, VAR_8, VAR_0);
  VAR_7->failureCount = 0;
  VAR_7->taskStatus = VAR_1;
 }
 else
 {
  FUNC_1(VAR_7->taskCallString, VAR_8, VAR_0);
  VAR_7->failureCount = 0;
 }
}
