
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subch_data_s {int sd_rlock; int sd_wlock; int sd_wq; int sd_subch; int sd_nasid; int sd_rq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_3, void *VAR_4)
{
 struct subch_data_s *VAR_5 = VAR_4;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_3(&VAR_5->sd_rlock, VAR_6);
 FUNC_2(&VAR_5->sd_wlock);
 VAR_7 = FUNC_0(VAR_5->sd_nasid, VAR_5->sd_subch);

 if (VAR_7 > 0) {
  if (VAR_7 & VAR_1) {
   FUNC_6(&VAR_5->sd_rq);
  }
  if (VAR_7 & VAR_2) {
   FUNC_1
       (VAR_5->sd_nasid, VAR_5->sd_subch,
        VAR_2);
   FUNC_6(&VAR_5->sd_wq);
  }
 }
 FUNC_4(&VAR_5->sd_wlock);
 FUNC_5(&VAR_5->sd_rlock, VAR_6);
 return VAR_0;
}
