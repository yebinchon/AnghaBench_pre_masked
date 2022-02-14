
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {unsigned int s_blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct address_space*,int,unsigned int) ;

int FUNC_1(handle_t *VAR_1,
  struct address_space *VAR_2, loff_t VAR_3)
{
 unsigned VAR_4 = VAR_3 & (VAR_0-1);
 unsigned VAR_5;
 unsigned VAR_6;
 struct inode *VAR_7 = VAR_2->host;

 VAR_6 = VAR_7->i_sb->s_blocksize;
 VAR_5 = VAR_6 - (VAR_4 & (VAR_6 - 1));

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5);
}
