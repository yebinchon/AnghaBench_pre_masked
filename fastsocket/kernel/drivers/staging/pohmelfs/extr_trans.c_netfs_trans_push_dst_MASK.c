
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_trans_dst {int trans_entry; struct netfs_trans* trans; struct netfs_state* state; scalar_t__ send_time; scalar_t__ retries; } ;
struct netfs_trans {int result; int dst_lock; int dst_list; } ;
struct netfs_state {int trans_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 struct netfs_trans_dst* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct netfs_trans_dst*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct netfs_trans*) ;
 int FUNC_6 (struct netfs_trans_dst*,struct netfs_state*) ;
 int FUNC_7 (struct netfs_trans*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct netfs_trans *VAR_3, struct netfs_state *VAR_4)
{
 struct netfs_trans_dst *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->retries = 0;
 VAR_5->send_time = 0;
 VAR_5->state = VAR_4;
 VAR_5->trans = VAR_3;
 FUNC_5(VAR_3);

 FUNC_3(&VAR_4->trans_lock);
 VAR_6 = FUNC_6(VAR_5, VAR_4);
 FUNC_4(&VAR_4->trans_lock);

 if (VAR_6)
  goto err_out_free;

 FUNC_8(&VAR_3->dst_lock);
 FUNC_0(&VAR_5->trans_entry, &VAR_3->dst_list);
 FUNC_9(&VAR_3->dst_lock);

 return 0;

err_out_free:
 VAR_3->result = VAR_6;
 FUNC_7(VAR_3);
 FUNC_2(VAR_5, VAR_2);
 return VAR_6;
}
