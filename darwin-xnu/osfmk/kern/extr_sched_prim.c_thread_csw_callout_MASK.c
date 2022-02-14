
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* thread_t ;
typedef int perfcontrol_event ;
struct TYPE_6__ {int state; int same_pri_latency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(
 thread_t VAR_3,
 thread_t VAR_4,
 uint64_t VAR_5)
{
 perfcontrol_event VAR_6 = (VAR_4->state & VAR_2) ? VAR_1 : VAR_0;
 uint64_t VAR_7 = (VAR_4->state & VAR_2) ? 0 : VAR_4->same_pri_latency;
 FUNC_0(VAR_6, VAR_5, 0,
  VAR_7, VAR_3, VAR_4);
}
