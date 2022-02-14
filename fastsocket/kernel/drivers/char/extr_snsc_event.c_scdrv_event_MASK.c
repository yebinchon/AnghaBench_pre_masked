
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subch_data_s {int sd_rlock; int sd_rb; int sd_subch; int sd_nasid; } ;


 int VAR_0 ;
 struct subch_data_s* VAR_1 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void
FUNC_4(unsigned long VAR_2)
{
 int VAR_3;
 int VAR_4;
 unsigned long VAR_5;
 struct subch_data_s *VAR_6 = VAR_1;


 VAR_4 = VAR_0;
 FUNC_2(&VAR_6->sd_rlock, VAR_5);
 VAR_3 = FUNC_0(VAR_6->sd_nasid, VAR_6->sd_subch,
       VAR_6->sd_rb, &VAR_4);

 while (!(VAR_3 < 0)) {
  FUNC_3(&VAR_6->sd_rlock, VAR_5);
  FUNC_1(VAR_6->sd_rb, VAR_4);
  VAR_4 = VAR_0;
  FUNC_2(&VAR_6->sd_rlock, VAR_5);
  VAR_3 = FUNC_0(VAR_6->sd_nasid, VAR_6->sd_subch,
        VAR_6->sd_rb, &VAR_4);
 }
 FUNC_3(&VAR_6->sd_rlock, VAR_5);
}
