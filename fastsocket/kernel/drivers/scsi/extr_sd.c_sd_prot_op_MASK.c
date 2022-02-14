
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ sc_data_direction; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*,unsigned int) ;
 int FUNC_2 (struct scsi_cmnd*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct scsi_cmnd *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10 = VAR_1;
 unsigned int VAR_11 = FUNC_0(VAR_8);

 if (VAR_8->sc_data_direction == VAR_0) {
  if (VAR_9 && VAR_11)
   VAR_10 = VAR_3;
  else if (VAR_9 && !VAR_11)
   VAR_10 = VAR_4;
  else if (!VAR_9 && VAR_11)
   VAR_10 = VAR_2;
 } else {
  if (VAR_9 && VAR_11)
   VAR_10 = VAR_6;
  else if (VAR_9 && !VAR_11)
   VAR_10 = VAR_5;
  else if (!VAR_9 && VAR_11)
   VAR_10 = VAR_7;
 }

 FUNC_1(VAR_8, VAR_10);
 FUNC_2(VAR_8, VAR_9);
}
