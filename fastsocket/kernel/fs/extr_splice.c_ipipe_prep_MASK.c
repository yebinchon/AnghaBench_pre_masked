
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int waiting_writers; int writers; scalar_t__ nrbufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pipe_inode_info*) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 int FUNC_2 (struct pipe_inode_info*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct pipe_inode_info *VAR_4, unsigned int VAR_5)
{
 int VAR_6;





 if (VAR_4->nrbufs)
  return 0;

 VAR_6 = 0;
 FUNC_0(VAR_4);

 while (!VAR_4->nrbufs) {
  if (FUNC_3(VAR_3)) {
   VAR_6 = -VAR_1;
   break;
  }
  if (!VAR_4->writers)
   break;
  if (!VAR_4->waiting_writers) {
   if (VAR_5 & VAR_2) {
    VAR_6 = -VAR_0;
    break;
   }
  }
  FUNC_2(VAR_4);
 }

 FUNC_1(VAR_4);
 return VAR_6;
}
