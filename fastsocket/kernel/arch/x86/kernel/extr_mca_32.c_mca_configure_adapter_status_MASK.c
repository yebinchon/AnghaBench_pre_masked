
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_device {int pos_id; int* pos; scalar_t__ slot; void* status; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_0(struct mca_device *VAR_6)
{
 VAR_6->status = VAR_2;

 VAR_6->pos_id = VAR_6->pos[0]
  + (VAR_6->pos[1] << 8);

 if (!VAR_6->pos_id && VAR_6->slot < VAR_5) {
  VAR_6->status = VAR_1;

  return;
 } else if (VAR_6->pos_id != 0xffff) {
  VAR_6->status = VAR_3;
 }

 if ((VAR_6->pos_id == 0xffff ||
     VAR_6->pos_id == 0x0000) && VAR_6->slot >= VAR_5) {
  int VAR_7;

  for (VAR_7 = 2; VAR_7 < 8; VAR_7++) {
   if (VAR_6->pos[VAR_7] != 0xff) {
    VAR_6->status = VAR_3;
    break;
   }
  }
 }

 if (!(VAR_6->pos[2] & VAR_4)) {



  VAR_6->status = VAR_0;
 }
}
