
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct scsi_cmnd*,char*) ;

__attribute__((used)) static u8 FUNC_1(struct scsi_cmnd *VAR_3)
{
 char VAR_4[2];
 u8 VAR_5 = 0;

 if (FUNC_0(VAR_3, VAR_4)) {
  switch (VAR_4[0]) {
  case 128:
   VAR_5 = VAR_2;
   break;
  case 130:
   VAR_5 = VAR_1;
   break;
  case 129:
   VAR_5 = VAR_0;
   break;
  };
 }

 return VAR_5;
}
