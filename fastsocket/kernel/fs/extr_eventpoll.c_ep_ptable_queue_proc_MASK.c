
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wait_queue_head_t ;
struct file {int f_mode; } ;
struct TYPE_3__ {int flags; } ;
struct eppoll_entry {int llink; TYPE_1__ wait; struct epitem* base; int * whead; } ;
struct epitem {int nwait; int pwqlist; } ;
typedef int poll_table ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 struct epitem* FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 struct eppoll_entry* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct file *VAR_5, wait_queue_head_t *VAR_6,
     poll_table *VAR_7)
{
 struct epitem *VAR_8 = FUNC_1(VAR_7);
 struct eppoll_entry *VAR_9;

 if (VAR_8->nwait >= 0 && (VAR_9 = FUNC_3(VAR_4, VAR_1))) {
  FUNC_2(&VAR_9->wait, VAR_3);
  VAR_9->whead = VAR_6;
  VAR_9->base = VAR_8;
  if (VAR_5->f_mode & VAR_0) {
   VAR_9->wait.flags |= VAR_2;
  }
  FUNC_0(VAR_6, &VAR_9->wait);
  FUNC_4(&VAR_9->llink, &VAR_8->pwqlist);
  VAR_8->nwait++;
 } else {

  VAR_8->nwait = -1;
 }
}
