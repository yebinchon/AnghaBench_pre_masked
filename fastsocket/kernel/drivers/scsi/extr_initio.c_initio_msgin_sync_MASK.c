
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct initio_host {char* msg; TYPE_1__* active_tc; } ;
struct TYPE_2__ {size_t flags; } ;


 char VAR_0 ;
 size_t VAR_1 ;
 char* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct initio_host * VAR_3)
{
 char VAR_4;

 VAR_4 = VAR_2[VAR_3->active_tc->flags & VAR_1];
 if (VAR_3->msg[3] > VAR_0) {
  VAR_3->msg[3] = VAR_0;
  if (VAR_3->msg[2] < VAR_4) {
   VAR_3->msg[2] = VAR_4;
   return 1;
  }
  if (VAR_3->msg[2] >= 59)
   VAR_3->msg[3] = 0;
  return 1;
 }

 if (VAR_3->msg[3] == 0) {
  return 0;
 }
 if (VAR_3->msg[2] < VAR_4) {
  VAR_3->msg[2] = VAR_4;
  return 1;
 }
 if (VAR_3->msg[2] >= 59) {
  VAR_3->msg[3] = 0;
  return 1;
 }
 return 0;
}
