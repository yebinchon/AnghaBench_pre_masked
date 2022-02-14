
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int b_blocknr; scalar_t__ b_state; } ;
typedef int sector_t ;


 int FUNC_0 (struct inode*,int ,struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, sector_t VAR_1)
{
 struct buffer_head VAR_2;
 int VAR_3;

 VAR_2.b_state = 0;
 VAR_2.b_blocknr = -1000;
 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2, 0);
 if (!VAR_3)
  return VAR_2.b_blocknr;
 return 0;
}
