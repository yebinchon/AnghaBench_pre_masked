
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfs_btree {int attributes; int max_key_len; } ;
struct hfs_bnode {scalar_t__ type; struct hfs_btree* tree; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfs_bnode*,void*,int,int) ;
 int FUNC_1 (struct hfs_bnode*,int) ;

void FUNC_2(struct hfs_bnode *VAR_2, void *VAR_3, int VAR_4)
{
 struct hfs_btree *VAR_5;
 int VAR_6;

 VAR_5 = VAR_2->tree;
 if (VAR_2->type == VAR_0 ||
     VAR_5->attributes & VAR_1)
  VAR_6 = FUNC_1(VAR_2, VAR_4) + 2;
 else
  VAR_6 = VAR_5->max_key_len + 2;

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6);
}
