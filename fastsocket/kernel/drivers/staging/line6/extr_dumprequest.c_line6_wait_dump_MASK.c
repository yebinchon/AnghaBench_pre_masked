
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct line6_dump_request {int wait; scalar_t__ in_progress; } ;
struct TYPE_4__ {int state; } ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;

int FUNC_5(struct line6_dump_request *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 FUNC_0(VAR_5, VAR_4);
 FUNC_1(&VAR_6->wait, &VAR_5);
 VAR_4->state = VAR_2;

 while (VAR_6->in_progress) {
  if (VAR_7) {
   VAR_8 = -VAR_0;
   break;
  }

  if (FUNC_4(VAR_4)) {
   VAR_8 = -VAR_1;
   break;
  } else
   FUNC_3();
 }

 VAR_4->state = VAR_3;
 FUNC_2(&VAR_6->wait, &VAR_5);
 return VAR_8;
}
