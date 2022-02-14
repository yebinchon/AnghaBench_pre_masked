
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct ext4_sb_info {scalar_t__ s_groups_count; struct ext4_li_request* s_li_request; } ;
struct ext4_li_request {int lr_request; scalar_t__ lr_timeout; } ;
typedef scalar_t__ ext4_group_t ;
struct TYPE_2__ {int li_state; int li_list_mtx; int li_request_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 () ;
 int VAR_5 ;
 struct ext4_li_request* FUNC_2 (struct super_block*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ext4_li_request*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_6,
        ext4_group_t VAR_7)
{
 struct ext4_sb_info *VAR_8 = FUNC_0(VAR_6);
 struct ext4_li_request *VAR_9;
 ext4_group_t VAR_10 = FUNC_0(VAR_6)->s_groups_count;
 int VAR_11 = 0;

 if (VAR_8->s_li_request != ((void*)0)) {




  VAR_8->s_li_request->lr_timeout = 0;
  return 0;
 }

 if (VAR_7 == VAR_10 ||
     (VAR_6->s_flags & VAR_3) ||
     !FUNC_8(VAR_6, VAR_2))
  return 0;

 VAR_9 = FUNC_2(VAR_6, VAR_7);
 if (!VAR_9)
  return -VAR_0;

 FUNC_6(&VAR_5);

 if (((void*)0) == VAR_4) {
  VAR_11 = FUNC_1();
  if (VAR_11)
   goto out;
 }

 FUNC_6(&VAR_4->li_list_mtx);
 FUNC_5(&VAR_9->lr_request, &VAR_4->li_request_list);
 FUNC_7(&VAR_4->li_list_mtx);

 VAR_8->s_li_request = VAR_9;





 VAR_9 = ((void*)0);

 if (!(VAR_4->li_state & VAR_1)) {
  VAR_11 = FUNC_3();
  if (VAR_11)
   goto out;
 }
out:
 FUNC_7(&VAR_5);
 if (VAR_11)
  FUNC_4(VAR_9);
 return VAR_11;
}
