
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_state; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct super_block*,struct hlist_head*,struct inode*) ;
 struct inode* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*,struct hlist_head*,int (*) (struct inode*,void*),void*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_8(struct super_block *VAR_3,
    struct hlist_head *VAR_4,
    int (*VAR_5)(struct inode *, void *),
    int (*VAR_6)(struct inode *, void *),
    void *VAR_7)
{
 struct inode *VAR_8;

 VAR_8 = FUNC_2(VAR_3);
 if (VAR_8) {
  struct inode *VAR_9;

  FUNC_5(&VAR_2);

  VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_7);
  if (!VAR_9) {
   if (VAR_6(VAR_8, VAR_7))
    goto set_failed;

   FUNC_1(VAR_3, VAR_4, VAR_8);
   VAR_8->i_state = VAR_0|VAR_1;
   FUNC_6(&VAR_2);




   return VAR_8;
  }






  FUNC_0(VAR_9);
  FUNC_6(&VAR_2);
  FUNC_3(VAR_8);
  VAR_8 = VAR_9;
  FUNC_7(VAR_8);
 }
 return VAR_8;

set_failed:
 FUNC_6(&VAR_2);
 FUNC_3(VAR_8);
 return ((void*)0);
}
