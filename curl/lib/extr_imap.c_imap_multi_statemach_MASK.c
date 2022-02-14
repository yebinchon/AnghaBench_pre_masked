
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imap_conn {scalar_t__ state; int pp; int ssldone; } ;
struct TYPE_3__ {struct imap_conn imapc; } ;
struct connectdata {TYPE_2__* handler; TYPE_1__ proto; } ;
struct TYPE_4__ {int flags; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (struct connectdata*,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_6, bool *VAR_7)
{
  CURLcode VAR_8 = VAR_0;
  struct imap_conn *VAR_9 = &VAR_6->proto.imapc;

  if((VAR_6->handler->flags & VAR_4) && !VAR_9->ssldone) {
    VAR_8 = FUNC_1(VAR_6, VAR_2, &VAR_9->ssldone);
    if(VAR_8 || !VAR_9->ssldone)
      return VAR_8;
  }

  VAR_8 = FUNC_0(&VAR_9->pp, VAR_1, VAR_1);
  *VAR_7 = (VAR_9->state == VAR_3) ? VAR_5 : VAR_1;

  return VAR_8;
}
