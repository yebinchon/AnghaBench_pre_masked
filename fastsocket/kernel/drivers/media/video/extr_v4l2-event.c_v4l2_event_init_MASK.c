
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fh {TYPE_1__* events; } ;
struct TYPE_2__ {int sequence; int subscribed; int available; int free; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int,int ) ;

int FUNC_3(struct v4l2_fh *VAR_2)
{
 VAR_2->events = FUNC_2(sizeof(*VAR_2->events), VAR_1);
 if (VAR_2->events == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_2->events->wait);

 FUNC_0(&VAR_2->events->free);
 FUNC_0(&VAR_2->events->available);
 FUNC_0(&VAR_2->events->subscribed);

 VAR_2->events->sequence = -1;

 return 0;
}
