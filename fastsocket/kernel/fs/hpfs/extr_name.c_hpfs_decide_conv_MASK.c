
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct hpfs_inode_info {scalar_t__ i_conv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__*,int,unsigned char*,int,int ) ;
 struct hpfs_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__** VAR_3 ;
 scalar_t__** VAR_4 ;

void FUNC_3(struct inode *VAR_5, unsigned char *VAR_6, unsigned VAR_7)
{
 struct hpfs_inode_info *VAR_8 = FUNC_1(VAR_5);
 int VAR_9;
 if (VAR_8->i_conv != VAR_0) return;
 for (VAR_9 = 0; *VAR_3[VAR_9]; VAR_9++) {
  int VAR_10 = FUNC_2(VAR_3[VAR_9]);
  if (VAR_10 <= VAR_7)
   if (!FUNC_0(VAR_5->i_sb, VAR_3[VAR_9], VAR_10, VAR_6 + VAR_7 - VAR_10, VAR_10, 0))
    goto text;
 }
 for (VAR_9 = 0; *VAR_4[VAR_9]; VAR_9++) {
  int VAR_11 = FUNC_2(VAR_4[VAR_9]);
  if (VAR_11 <= VAR_7)
   if (!FUNC_0(VAR_5->i_sb, VAR_4[VAR_9], VAR_11, VAR_6, VAR_11, 0))
    goto text;
 }
 VAR_8->i_conv = VAR_1;
 return;
 text:
 VAR_8->i_conv = VAR_2;
 return;
}
