
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct in_addr {int dummy; } ;
struct afs_server {int dummy; } ;
struct afs_call {int work; struct afs_server* server; int state; } ;
struct TYPE_2__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,scalar_t__,int) ;
 struct afs_server* FUNC_2 (struct in_addr*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct in_addr*,int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct afs_call *VAR_4,
            struct sk_buff *VAR_5,
            bool VAR_6)
{
 struct afs_server *VAR_7;
 struct in_addr VAR_8;

 FUNC_1(",{%u},%d", VAR_5->len, VAR_6);

 if (VAR_5->len > 0)
  return -VAR_1;
 if (!VAR_6)
  return 0;


 VAR_4->state = VAR_0;



 FUNC_4(&VAR_8, &FUNC_3(VAR_5)->saddr, 4);
 VAR_7 = FUNC_2(&VAR_8);
 if (!VAR_7)
  return -VAR_2;
 VAR_4->server = VAR_7;

 FUNC_0(&VAR_4->work, VAR_3);
 FUNC_5(&VAR_4->work);
 return 0;
}
