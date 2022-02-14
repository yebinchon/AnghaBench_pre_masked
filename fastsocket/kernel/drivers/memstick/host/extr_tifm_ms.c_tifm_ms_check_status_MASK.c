
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tifm_ms {int cmd_flags; TYPE_1__* req; } ;
struct TYPE_2__ {scalar_t__ need_card_int; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct tifm_ms *VAR_3)
{
 if (!VAR_3->req->error) {
  if (!(VAR_3->cmd_flags & VAR_1))
   return 1;
  if (!(VAR_3->cmd_flags & VAR_2))
   return 1;
  if (VAR_3->req->need_card_int
      && !(VAR_3->cmd_flags & VAR_0))
   return 1;
 }
 return 0;
}
