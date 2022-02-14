
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct in_addr {int dummy; } ;
struct afs_server {int dummy; } ;
struct afs_call {int work; struct afs_server* server; int state; } ;
struct TYPE_2__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int) ;
 struct afs_server* FUNC_2 (struct in_addr*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct in_addr*,int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct afs_call *VAR_3,
      struct sk_buff *VAR_4,
      bool VAR_5)
{
 struct afs_server *VAR_6;
 struct in_addr VAR_7;

 FUNC_1(",{%u},%d", VAR_4->len, VAR_5);

 if (!VAR_5)
  return 0;


 VAR_3->state = VAR_0;



 FUNC_4(&VAR_7, &FUNC_3(VAR_4)->saddr, 4);
 VAR_6 = FUNC_2(&VAR_7);
 if (!VAR_6)
  return -VAR_1;
 VAR_3->server = VAR_6;

 FUNC_0(&VAR_3->work, VAR_2);
 FUNC_5(&VAR_3->work);
 return 0;
}
