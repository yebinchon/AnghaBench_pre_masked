
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct metapage {int dummy; } ;
struct inode {int dummy; } ;
struct dir_table_slot {int dummy; } ;
typedef int s64 ;


 int VAR_0 ;
 struct dir_table_slot* FUNC_0 (struct inode*,int ,struct metapage**,int *) ;
 int FUNC_1 (struct dir_table_slot*,struct dir_table_slot*,int) ;
 int FUNC_2 (struct metapage*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, u32 VAR_2,
       struct dir_table_slot * VAR_3)
{
 s64 VAR_4;
 struct metapage *VAR_5 = ((void*)0);
 struct dir_table_slot *VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_2, &VAR_5, &VAR_4);
 if (!VAR_6) {
  return -VAR_0;
 }

 FUNC_1(VAR_3, VAR_6, sizeof(struct dir_table_slot));

 if (VAR_5)
  FUNC_2(VAR_5);

 return 0;
}
