
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (struct inode*,int ) ;
 struct buffer_head* FUNC_1 (int ,int ) ;

struct buffer_head *FUNC_2(struct inode *VAR_0, sector_t VAR_1)
{
 sector_t VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return ((void*)0);
 return FUNC_1(VAR_0->i_sb, VAR_2);
}
