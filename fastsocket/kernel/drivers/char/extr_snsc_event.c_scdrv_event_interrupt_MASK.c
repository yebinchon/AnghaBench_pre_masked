
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subch_data_s {int sd_rlock; int sd_subch; int sd_nasid; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_3, void *VAR_4)
{
 struct subch_data_s *VAR_5 = VAR_4;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5->sd_rlock, VAR_6);
 VAR_7 = FUNC_0(VAR_5->sd_nasid, VAR_5->sd_subch);

 if ((VAR_7 > 0) && (VAR_7 & VAR_1)) {
  FUNC_3(&VAR_2);
 }
 FUNC_2(&VAR_5->sd_rlock, VAR_6);
 return VAR_0;
}
