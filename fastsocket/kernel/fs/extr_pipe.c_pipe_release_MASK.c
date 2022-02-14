
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int fasync_writers; int fasync_readers; int wait; scalar_t__ writers; scalar_t__ readers; } ;
struct inode {int i_mutex; struct pipe_inode_info* i_pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct inode *VAR_3, int VAR_4, int VAR_5)
{
 struct pipe_inode_info *VAR_6;

 FUNC_2(&VAR_3->i_mutex);
 VAR_6 = VAR_3->i_pipe;
 VAR_6->readers -= VAR_4;
 VAR_6->writers -= VAR_5;

 if (!VAR_6->readers && !VAR_6->writers) {
  FUNC_0(VAR_3);
 } else {
  FUNC_4(&VAR_6->wait);
  FUNC_1(&VAR_6->fasync_readers, VAR_2, VAR_0);
  FUNC_1(&VAR_6->fasync_writers, VAR_2, VAR_1);
 }
 FUNC_3(&VAR_3->i_mutex);

 return 0;
}
