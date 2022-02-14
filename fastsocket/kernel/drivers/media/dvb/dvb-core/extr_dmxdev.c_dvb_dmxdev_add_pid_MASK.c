
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int ts; } ;
struct TYPE_4__ {scalar_t__ output; } ;
struct TYPE_5__ {TYPE_1__ pes; } ;
struct dmxdev_filter {scalar_t__ type; scalar_t__ state; TYPE_3__ feed; TYPE_2__ params; } ;
struct dmxdev_feed {int next; int pid; } ;
struct dmxdev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dmxdev*,struct dmxdev_filter*,struct dmxdev_feed*) ;
 struct dmxdev_feed* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dmxdev *VAR_7,
         struct dmxdev_filter *VAR_8, u16 VAR_9)
{
 struct dmxdev_feed *VAR_10;

 if ((VAR_8->type != VAR_2) ||
     (VAR_8->state < VAR_1))
  return -VAR_4;


 if ((VAR_8->params.pes.output != VAR_3) &&
     (!FUNC_3(&VAR_8->feed.ts)))
  return -VAR_4;

 VAR_10 = FUNC_1(sizeof(struct dmxdev_feed), VAR_6);
 if (VAR_10 == ((void*)0))
  return -VAR_5;

 VAR_10->pid = VAR_9;
 FUNC_2(&VAR_10->next, &VAR_8->feed.ts);

 if (VAR_8->state >= VAR_0)
  return FUNC_0(VAR_7, VAR_8, VAR_10);

 return 0;
}
