
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
typedef int daddr_t ;


 struct buffer_head* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct inode*,int) ;

struct buffer_head *
FUNC_2(struct inode *VAR_0, int VAR_1)
{
 struct buffer_head *VAR_2;
 daddr_t VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_2 = FUNC_0(VAR_0->i_sb, VAR_3);

 return (VAR_2);
}
