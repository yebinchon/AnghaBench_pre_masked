
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const VAR_3 ;
 int FUNC_0 (struct scsi_device*,char const*,int ,int*,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct scsi_device *VAR_4, u8 *VAR_5)
{
 int VAR_6, VAR_7;






 const char VAR_8[] = {
  VAR_3, 0, 0, 0, 0, 0
 };

 const char VAR_9[] = {
  VAR_2, 0x0b, 0, 0, 0, 0, 0, 0, 4, 0
 };







 for (VAR_6 = 0; ; VAR_6++) {
  VAR_7 = FUNC_0(VAR_4, VAR_8, VAR_1,
         ((void*)0), 0, ((void*)0));

  if(VAR_7) {
   if(VAR_6 >= 3)
    return 0;
  } else {

   break;
  }
 }

 VAR_7 = FUNC_0(VAR_4, VAR_9,
        VAR_0, VAR_5, 4, ((void*)0));

 if (VAR_7)

  return 0;

 return VAR_5[3] + ((VAR_5[2] & 0x1f) << 8);
}
