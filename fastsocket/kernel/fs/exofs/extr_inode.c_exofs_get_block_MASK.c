
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (struct buffer_head*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, sector_t VAR_1,
      struct buffer_head *VAR_2, int VAR_3)
{
 FUNC_0(VAR_2, VAR_0->i_sb, VAR_1);
 return 0;
}
