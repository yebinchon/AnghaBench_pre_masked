
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct afs_call {int work; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,scalar_t__,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct afs_call *VAR_3,
       struct sk_buff *VAR_4, bool VAR_5)
{
 FUNC_1(",{%u},%d", VAR_4->len, VAR_5);

 if (VAR_4->len > 0)
  return -VAR_1;
 if (!VAR_5)
  return 0;


 VAR_3->state = VAR_0;

 FUNC_0(&VAR_3->work, VAR_2);
 FUNC_2(&VAR_3->work);
 return 0;
}
