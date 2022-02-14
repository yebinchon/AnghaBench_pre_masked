
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct buffer_head {int b_blocknr; } ;
typedef int sector_t ;
typedef int pgoff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,int ,struct buffer_head*,int) ;
 int FUNC_2 (struct buffer_head*,int ,int) ;

__attribute__((used)) static inline int
FUNC_3(struct inode *VAR_1, pgoff_t VAR_2, int VAR_3,
     sector_t *VAR_4)
{
 struct buffer_head VAR_5;
 int VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(struct buffer_head));
 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_5, VAR_3);
 *VAR_4 = VAR_5.b_blocknr;


 if (!VAR_5.b_blocknr && !VAR_6) {
  FUNC_0(VAR_3);
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
