
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct extended_attribute {int valuelen; int namelen; int anode; scalar_t__ indirect; } ;
struct buffer_head {int dummy; } ;
struct anode {int btree; } ;
typedef int secno ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct extended_attribute*) ;
 int FUNC_2 (struct extended_attribute*) ;
 scalar_t__ FUNC_3 (struct super_block*,int ,int,unsigned int,int,char*) ;
 int FUNC_4 (struct super_block*,int ,int ,int ) ;
 int FUNC_5 (struct super_block*,char*,char*,int ,unsigned int) ;
 int FUNC_6 (struct super_block*,int ,int) ;
 struct anode* FUNC_7 (struct super_block*,int ,struct buffer_head**) ;
 int FUNC_8 (struct super_block*,int *) ;

void FUNC_9(struct super_block *VAR_0, secno VAR_1, int VAR_2, unsigned VAR_3)
{
 unsigned VAR_4 = 0;
 while (VAR_4 < VAR_3) {
  char VAR_5[4 + 255 + 1 + 8];
  struct extended_attribute *VAR_6 = (struct extended_attribute *)VAR_5;
  if (VAR_4 + 4 > VAR_3) {
   FUNC_5(VAR_0, "EAs don't end correctly, %s %08x, len %08x",
    VAR_2 ? "anode" : "sectors", VAR_1, VAR_3);
   return;
  }
  if (FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4, 4, VAR_5)) return;
  if (VAR_6->indirect) {
   if (VAR_6->valuelen != 8) {
    FUNC_5(VAR_0, "ea->indirect set while ea->valuelen!=8, %s %08x, pos %08x",
     VAR_2 ? "anode" : "sectors", VAR_1, VAR_4);
    return;
   }
   if (FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4 + 4, VAR_6->namelen + 9, VAR_5+4))
    return;
   FUNC_4(VAR_0, FUNC_2(VAR_6), VAR_6->anode, FUNC_1(VAR_6));
  }
  VAR_4 += VAR_6->namelen + VAR_6->valuelen + 5;
 }
 if (!VAR_2) FUNC_6(VAR_0, VAR_1, (VAR_3+511) >> 9);
 else {
  struct buffer_head *VAR_7;
  struct anode *VAR_8;
  if ((VAR_8 = FUNC_7(VAR_0, VAR_1, &VAR_7))) {
   FUNC_8(VAR_0, &VAR_8->btree);
   FUNC_0(VAR_7);
   FUNC_6(VAR_0, VAR_1, 1);
  }
 }
}
