
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct request_context {int killed; int refcount; int state; TYPE_1__* outurb; } ;
struct TYPE_2__ {int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct request_context*) ;
 int FUNC_3 (struct request_context*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(u_long VAR_4)
{
 struct request_context *VAR_5 = (void *) VAR_4;

 VAR_5->outurb->transfer_flags |= VAR_3;
 if (FUNC_4(VAR_5->outurb) == -VAR_0) {
  VAR_5->state = VAR_1;
 } else {
  VAR_5->state = VAR_2;
  FUNC_1("couldn't unlink");
  FUNC_0(&VAR_5->refcount);
  VAR_5->killed = 1;
  FUNC_2(VAR_5);
  FUNC_3(VAR_5);
 }
}
