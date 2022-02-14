
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* work_interval_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct work_interval_notification {int create_flags; int notify_flags; int next_start; int deadline; int finish; int start; } ;
typedef int notification ;
struct TYPE_3__ {int work_interval_id; int create_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct work_interval_notification*,int) ;
 int VAR_2 ;

int
FUNC_1(work_interval_t VAR_3, uint64_t VAR_4,
                     uint64_t VAR_5, uint64_t VAR_6, uint64_t VAR_7,
                     uint32_t VAR_8)
{
 int VAR_9;
 uint64_t VAR_10;
 struct work_interval_notification VAR_11 = {
  .start = VAR_4,
  .finish = VAR_5,
  .deadline = VAR_6,
  .next_start = VAR_7,
  .notify_flags = VAR_8
 };

 if (VAR_3 == ((void*)0)) {
  VAR_2 = VAR_0;
  return -1;
 }

 VAR_11.create_flags = VAR_3->create_flags;
 VAR_10 = VAR_3->work_interval_id;

 VAR_9 = FUNC_0(VAR_1, VAR_10,
                           &VAR_11, sizeof(VAR_11));
 return VAR_9;
}
