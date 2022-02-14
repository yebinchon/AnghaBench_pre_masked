
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct Scsi_Host {scalar_t__ max_channel; scalar_t__ max_id; scalar_t__ max_lun; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct Scsi_Host*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct Scsi_Host *VAR_2, uint VAR_3, uint VAR_4, uint VAR_5)
{
 uint VAR_6, VAR_7;
 uint VAR_8, VAR_9;

 if (((VAR_3 != VAR_1) && (VAR_3 > VAR_2->max_channel)) ||
     ((VAR_4 != VAR_1) && (VAR_4 >= VAR_2->max_id)) ||
     ((VAR_5 != VAR_1) && (VAR_5 > VAR_2->max_lun)))
  return -VAR_0;

 if (VAR_3 == VAR_1) {
  VAR_6 = 0;
  VAR_7 = VAR_2->max_channel + 1;
 } else {
  VAR_6 = VAR_3;
  VAR_7 = VAR_3 + 1;
 }

 if (VAR_4 == VAR_1) {
  VAR_8 = 0;
  VAR_9 = VAR_2->max_id;
 } else {
  VAR_8 = VAR_4;
  VAR_9 = VAR_4 + 1;
 }

 for ( ; VAR_6 < VAR_7; VAR_6++)
  for ( ; VAR_8 < VAR_9; VAR_8++)
   FUNC_0(VAR_2, VAR_6, VAR_8, VAR_5);

 return 0;
}
