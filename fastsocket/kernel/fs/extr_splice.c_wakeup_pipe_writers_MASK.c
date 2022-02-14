
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int fasync_writers; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct pipe_inode_info *VAR_2)
{
 FUNC_1();
 if (FUNC_2(&VAR_2->wait))
  FUNC_3(&VAR_2->wait);
 FUNC_0(&VAR_2->fasync_writers, VAR_1, VAR_0);
}
