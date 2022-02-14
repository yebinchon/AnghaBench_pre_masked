
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct extent_state {int dummy; } ;
struct TYPE_2__ {int io_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int,struct extent_state**,int ) ;

int FUNC_3(struct inode *VAR_2, u64 VAR_3, u64 VAR_4,
         struct extent_state **VAR_5)
{
 if ((VAR_4 & (VAR_1 - 1)) == 0)
  FUNC_1(1);
 return FUNC_2(&FUNC_0(VAR_2)->io_tree, VAR_3, VAR_4,
       VAR_5, VAR_0);
}
