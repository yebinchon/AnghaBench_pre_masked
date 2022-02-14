
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inomap {int dummy; } ;
struct inode {int i_mapping; } ;
struct TYPE_2__ {struct inomap* i_imap; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inomap*) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct inode *VAR_0, int VAR_1)
{
 struct inomap *VAR_2 = FUNC_0(VAR_0)->i_imap;





 if (!(VAR_1 || FUNC_2(VAR_0)))
  FUNC_1(VAR_0);




 FUNC_4(VAR_0->i_mapping, 0);




 FUNC_3(VAR_2);

 return (0);
}
