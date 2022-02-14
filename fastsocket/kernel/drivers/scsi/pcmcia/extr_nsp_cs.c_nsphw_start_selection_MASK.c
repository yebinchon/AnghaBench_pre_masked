
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int phase; } ;
struct scsi_cmnd {TYPE_3__ SCp; TYPE_2__* device; } ;
struct TYPE_8__ {int SelectionTimeOut; } ;
typedef TYPE_4__ nsp_hw_data ;
struct TYPE_6__ {TYPE_1__* host; } ;
struct TYPE_5__ {unsigned int this_id; unsigned int io_port; scalar_t__ hostdata; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (unsigned char) ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned char FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ,int) ;
 int FUNC_3 (struct scsi_cmnd*,int) ;
 unsigned char FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_18)
{
 unsigned int VAR_19 = VAR_18->device->host->this_id;
 unsigned int VAR_20 = VAR_18->device->host->io_port;
 unsigned char VAR_21 = FUNC_4(VAR_18);
 nsp_hw_data *VAR_22 = (nsp_hw_data *)VAR_18->device->host->hostdata;
 int VAR_23;
 unsigned char VAR_24, VAR_25;



 VAR_24 = FUNC_1(VAR_20, VAR_10);
 if(VAR_24 != VAR_5) {

  return VAR_6;
 }



 VAR_18->SCp.phase = VAR_7;
 FUNC_2(VAR_20, VAR_16, VAR_3);

 VAR_23 = 1000;
 do {

  VAR_25 = FUNC_1(VAR_20, VAR_0);

  FUNC_5(1);
 } while((VAR_25 & (VAR_4 | VAR_1)) == 0 &&
  (VAR_23-- != 0));

 if (!(VAR_25 & VAR_4)) {

  FUNC_2(VAR_20, VAR_16, VAR_2);
  return VAR_6;
 }



 VAR_18->SCp.phase = VAR_8;
 FUNC_5(3);
 FUNC_2(VAR_20, VAR_11, FUNC_0(VAR_19) | FUNC_0(VAR_21));
 FUNC_2(VAR_20, VAR_9, VAR_15 | VAR_13 | VAR_12);
 FUNC_5(2);
 FUNC_2(VAR_20, VAR_9, VAR_15 | VAR_13 | VAR_14 | VAR_12);
 FUNC_2(VAR_20, VAR_16, VAR_2);

 FUNC_2(VAR_20, VAR_9, VAR_15 | VAR_14 | VAR_12);


 FUNC_3(VAR_18, 1000/51);
 VAR_22->SelectionTimeOut = 1;

 return VAR_17;
}
