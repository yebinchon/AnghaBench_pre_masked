
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct mISDNtimerdev {int work; int next_id; int lock; int pending; int wait; } ;
struct TYPE_3__ {long data; scalar_t__ expires; int function; } ;
struct mISDNtimer {int id; TYPE_1__ tl; struct mISDNtimerdev* dev; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 struct mISDNtimer* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct mISDNtimerdev *VAR_5, int VAR_6)
{
 int VAR_7;
 u_long VAR_8;
 struct mISDNtimer *VAR_9;

 if (!VAR_6) {
  VAR_5->work = 1;
  FUNC_6(&VAR_5->wait);
  VAR_7 = 0;
 } else {
  VAR_9 = FUNC_2(sizeof(struct mISDNtimer), VAR_1);
  if (!VAR_9)
   return -VAR_0;
  FUNC_4(&VAR_5->lock, VAR_8);
  VAR_9->id = VAR_5->next_id++;
  if (VAR_5->next_id < 0)
   VAR_5->next_id = 1;
  FUNC_3(&VAR_9->list, &VAR_5->pending);
  FUNC_5(&VAR_5->lock, VAR_8);
  VAR_9->dev = VAR_5;
  VAR_9->tl.data = (long)VAR_9;
  VAR_9->tl.function = VAR_3;
  FUNC_1(&VAR_9->tl);
  VAR_9->tl.expires = VAR_4 + ((VAR_2 * (u_long)VAR_6) / 1000);
  FUNC_0(&VAR_9->tl);
  VAR_7 = VAR_9->id;
 }
 return VAR_7;
}
