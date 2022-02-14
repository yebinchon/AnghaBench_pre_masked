
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int u32_le ;
struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_11__ {void* len; void* addr; } ;
typedef TYPE_5__ nsp32_sgtable ;
struct TYPE_12__ {int cur_entry; TYPE_4__* cur_lunt; } ;
typedef TYPE_6__ nsp32_hw_data ;
struct TYPE_10__ {int sg_num; TYPE_3__* sglun; } ;
struct TYPE_9__ {TYPE_5__* sgt; } ;
struct TYPE_8__ {TYPE_1__* host; } ;
struct TYPE_7__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 void* FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int ,char*) ;
 unsigned int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (struct scsi_cmnd*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct scsi_cmnd *VAR_3, unsigned int VAR_4)
{
 nsp32_hw_data *VAR_5 = (nsp32_hw_data *)VAR_3->device->host->hostdata;
 int VAR_6 = VAR_5->cur_entry;
 int VAR_7;
 int VAR_8 = VAR_5->cur_lunt->sg_num;
 nsp32_sgtable *VAR_9 = VAR_5->cur_lunt->sglun->sgt;
 unsigned int VAR_10, VAR_11;
 u32_le VAR_12, VAR_13;

 FUNC_2(VAR_1, "old resid=0x%x", FUNC_4(VAR_3));


 VAR_4 -= FUNC_1(VAR_9[VAR_6].addr) & 3;





 VAR_11 = 0;
 for (VAR_7 = VAR_6; VAR_7 < VAR_8; VAR_7++) {
  VAR_11 += (FUNC_1(VAR_9[VAR_7].len) & ~VAR_2);
  if (VAR_11 > VAR_4) {
   break;
  }
 }


 if (VAR_7 == VAR_8) {
  goto last;
 }

 if (VAR_11 == VAR_4) {



 }


 VAR_10 = VAR_11 - VAR_4;


 VAR_12 = FUNC_1(VAR_9[VAR_7].len);
 VAR_13 = FUNC_1(VAR_9[VAR_7].addr);
 VAR_13 += (VAR_12 - VAR_10);
 VAR_9[VAR_7].addr = FUNC_0(VAR_13);
 VAR_9[VAR_7].len = FUNC_0(VAR_10);


 VAR_5->cur_entry = VAR_7;

 return;

 last:
 if (FUNC_4(VAR_3) < VAR_11) {
  FUNC_3(VAR_0, "resid underflow");
 }

 FUNC_5(VAR_3, FUNC_4(VAR_3) - VAR_11);
 FUNC_2(VAR_1, "new resid=0x%x", FUNC_4(VAR_3));



 return;
}
