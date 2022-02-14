
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
typedef scalar_t__ daddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct inode*,int ) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_1, sector_t VAR_2,
     struct buffer_head *VAR_3, int VAR_4)
{
 daddr_t VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (VAR_5 != 0) {
  FUNC_0(VAR_3, VAR_1->i_sb, VAR_5);
  return 0;
 }

 return -VAR_0;
}
