
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hd_i_struct {int special_op; int recalibrate; int cyl; scalar_t__ head; int sect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct hd_i_struct* VAR_2 ;
 int FUNC_1 (struct hd_i_struct*,int ,int ,scalar_t__,int ,int ,void (*) ()) ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 static int VAR_4;

repeat:
 if (VAR_3) {
  VAR_3 = 0;
  VAR_4 = -1;
  FUNC_3();
 } else {
  FUNC_0();
  if (VAR_3)
   goto repeat;
 }
 if (++VAR_4 < VAR_1) {
  struct hd_i_struct *VAR_5 = &VAR_2[VAR_4];
  VAR_5->special_op = VAR_5->recalibrate = 1;
  FUNC_1(VAR_5, VAR_5->sect, VAR_5->sect, VAR_5->head-1,
   VAR_5->cyl, VAR_0, &FUNC_4);
  if (VAR_3)
   goto repeat;
 } else
  FUNC_2();
}
