
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_secure_user {int dummy; } ;
struct dst_secure {int sec_entry; int sec; } ;
struct dst_node {int security_lock; int security_list; } ;
struct dst_ctl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dst_secure* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,void*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dst_node *VAR_4, struct dst_ctl *VAR_5,
  void *VAR_6, unsigned int VAR_7)
{
 struct dst_secure *VAR_8;

 if (!VAR_4)
  return -VAR_1;

 if (VAR_7 != sizeof(struct dst_secure_user))
  return -VAR_0;

 VAR_8 = FUNC_0(sizeof(struct dst_secure), VAR_3);
 if (!VAR_8)
  return -VAR_2;

 FUNC_2(&VAR_8->sec, VAR_6, VAR_7);

 FUNC_3(&VAR_4->security_lock);
 FUNC_1(&VAR_8->sec_entry, &VAR_4->security_list);
 FUNC_4(&VAR_4->security_lock);

 return 0;
}
