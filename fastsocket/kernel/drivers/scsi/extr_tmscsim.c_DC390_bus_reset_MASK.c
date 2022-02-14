
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {TYPE_2__* device; } ;
struct dc390_acb {size_t AdapterIndex; int ACBFlag; int * pActiveDCB; scalar_t__ last_reset; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int host_lock; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct dc390_acb*,struct scsi_cmnd*) ;
 int FUNC_3 (struct dc390_acb*) ;
 int FUNC_4 (struct dc390_acb*) ;
 int** VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8 (struct scsi_cmnd *VAR_11)
{
 struct dc390_acb* VAR_12 = (struct dc390_acb*) VAR_11->device->host->hostdata;
 u8 VAR_13;

 FUNC_6(VAR_11->device->host->host_lock);

 VAR_13 = FUNC_0(VAR_1) | VAR_2;
 FUNC_1(VAR_1, VAR_13);

 VAR_12->ACBFlag |= VAR_6;
 FUNC_4(VAR_12);

 FUNC_3(VAR_12);
 FUNC_5(1);
 VAR_12->last_reset = VAR_10 + 3*VAR_4/2
  + VAR_4 * VAR_9[VAR_12->AdapterIndex][VAR_3];

 FUNC_1(VAR_8, VAR_0);
 FUNC_0(VAR_5);

 FUNC_2(VAR_12, VAR_11);

 VAR_12->pActiveDCB = ((void*)0);
 VAR_12->ACBFlag = 0;

 VAR_13 = FUNC_0(VAR_1) & ~VAR_2;
 FUNC_1(VAR_1, VAR_13);

 FUNC_7(VAR_11->device->host->host_lock);

 return VAR_7;
}
