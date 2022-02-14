
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int sector_t ;
typedef int journal_t ;
struct TYPE_2__ {int i_state; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int * FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct address_space*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static sector_t FUNC_6(struct address_space *VAR_2, sector_t VAR_3)
{
 struct inode *VAR_4 = VAR_2->host;
 journal_t *VAR_5;
 int VAR_6;

 if (FUNC_0(VAR_4)->i_state & VAR_0) {
  FUNC_0(VAR_4)->i_state &= ~VAR_0;
  VAR_5 = FUNC_1(VAR_4);
  FUNC_4(VAR_5);
  VAR_6 = FUNC_3(VAR_5);
  FUNC_5(VAR_5);

  if (VAR_6)
   return 0;
 }

 return FUNC_2(VAR_2,VAR_3,VAR_1);
}
