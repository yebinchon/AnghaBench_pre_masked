
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int authused; } ;
struct TYPE_10__ {TYPE_4__* conn; } ;
struct imap_conn {int mailbox_uidvalidity; int mailbox; TYPE_1__ sasl; TYPE_5__ pp; } ;
struct TYPE_7__ {struct imap_conn imapc; } ;
struct connectdata {TYPE_2__ proto; } ;
struct TYPE_8__ {scalar_t__ protoconnstart; } ;
struct TYPE_9__ {TYPE_3__ bits; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct connectdata*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct connectdata*,int ) ;
 int FUNC_4 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_2, bool VAR_3)
{
  struct imap_conn *VAR_4 = &VAR_2->proto.imapc;







  if(!VAR_3 && VAR_4->pp.conn && VAR_4->pp.conn->bits.protoconnstart)
    if(!FUNC_4(VAR_2))
      (void)FUNC_3(VAR_2, VAR_1);


  FUNC_0(&VAR_4->pp);


  FUNC_2(VAR_2, VAR_4->sasl.authused);


  FUNC_1(VAR_4->mailbox);
  FUNC_1(VAR_4->mailbox_uidvalidity);

  return VAR_0;
}
