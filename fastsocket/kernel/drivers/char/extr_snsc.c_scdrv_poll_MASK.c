
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subch_data_s {int sd_rlock; int sd_wlock; int sd_subch; int sd_nasid; int sd_wq; int sd_rq; } ;
struct poll_table_struct {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static unsigned int
FUNC_6(struct file *VAR_6, struct poll_table_struct *VAR_7)
{
 unsigned int VAR_8 = 0;
 int VAR_9 = 0;
 struct subch_data_s *VAR_10 = (struct subch_data_s *) VAR_6->private_data;
 unsigned long VAR_11;

 FUNC_1(VAR_6, &VAR_10->sd_rq, VAR_7);
 FUNC_1(VAR_6, &VAR_10->sd_wq, VAR_7);

 FUNC_3(&VAR_10->sd_rlock, VAR_11);
 FUNC_2(&VAR_10->sd_wlock);
 VAR_9 = FUNC_0(VAR_10->sd_nasid, VAR_10->sd_subch);
 FUNC_4(&VAR_10->sd_wlock);
 FUNC_5(&VAR_10->sd_rlock, VAR_11);

 if (VAR_9 > 0) {
  if (VAR_9 & VAR_4) {
   VAR_8 |= VAR_0 | VAR_2;
  }
  if (VAR_9 & VAR_5) {
   VAR_8 |= VAR_1 | VAR_3;
  }
 }

 return VAR_8;
}
