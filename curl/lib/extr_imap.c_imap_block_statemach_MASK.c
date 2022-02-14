
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imap_conn {scalar_t__ state; int pp; } ;
struct TYPE_2__ {struct imap_conn imapc; } ;
struct connectdata {TYPE_1__ proto; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static CURLcode FUNC_1(struct connectdata *VAR_3,
                                     bool VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  struct imap_conn *VAR_6 = &VAR_3->proto.imapc;

  while(VAR_6->state != VAR_1 && !VAR_5)
    VAR_5 = FUNC_0(&VAR_6->pp, VAR_2, VAR_4);

  return VAR_5;
}
