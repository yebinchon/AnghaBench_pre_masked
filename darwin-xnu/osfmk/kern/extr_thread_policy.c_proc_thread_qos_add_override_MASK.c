
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
typedef scalar_t__ task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {scalar_t__ task; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ,int ,int,int ,int ) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__,int ,int) ;
 TYPE_1__* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(task_t VAR_7,
                             thread_t VAR_8,
                             uint64_t VAR_9,
                             int VAR_10,
                             boolean_t VAR_11,
                             user_addr_t VAR_12,
                             int VAR_13)
{
 boolean_t VAR_14 = VAR_2;
 int VAR_15 = 0;

 if (VAR_8 == VAR_5) {
  VAR_8 = FUNC_4(VAR_7, VAR_9);


  if (VAR_8 == VAR_5) {
   FUNC_1((FUNC_0(VAR_4, VAR_3)) | VAR_0,
          VAR_9, 0, 0xdead, 0, 0);
   return VAR_1;
  }
  VAR_14 = VAR_6;
 } else {
  FUNC_2(VAR_8->task == VAR_7);
 }
 VAR_15 = FUNC_3(VAR_8, VAR_10,
   VAR_11, VAR_12, VAR_13);
 if (VAR_14) {
  FUNC_5(VAR_8);
 }

 return VAR_15;
}
