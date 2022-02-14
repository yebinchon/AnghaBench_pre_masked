
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {scalar_t__ nrbufs; int waiting_writers; int readers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pipe_inode_info*) ;
 int FUNC_1 (struct pipe_inode_info*) ;
 int FUNC_2 (struct pipe_inode_info*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct pipe_inode_info *VAR_7, unsigned int VAR_8)
{
 int VAR_9;





 if (VAR_7->nrbufs < VAR_3)
  return 0;

 VAR_9 = 0;
 FUNC_0(VAR_7);

 while (VAR_7->nrbufs >= VAR_3) {
  if (!VAR_7->readers) {
   FUNC_3(VAR_4, VAR_6, 0);
   VAR_9 = -VAR_1;
   break;
  }
  if (VAR_8 & VAR_5) {
   VAR_9 = -VAR_0;
   break;
  }
  if (FUNC_4(VAR_6)) {
   VAR_9 = -VAR_2;
   break;
  }
  VAR_7->waiting_writers++;
  FUNC_2(VAR_7);
  VAR_7->waiting_writers--;
 }

 FUNC_1(VAR_7);
 return VAR_9;
}
