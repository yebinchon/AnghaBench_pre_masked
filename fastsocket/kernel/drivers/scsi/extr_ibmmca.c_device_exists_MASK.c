
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int buf; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (struct Scsi_Host*,int) ;
 TYPE_1__* FUNC_1 (struct Scsi_Host*) ;
 scalar_t__ FUNC_2 (struct Scsi_Host*,int) ;

__attribute__((used)) static int FUNC_3(struct Scsi_Host *VAR_8, int VAR_9, int *VAR_10, int *VAR_11)
{
 unsigned char *VAR_12;

 if (!(FUNC_0(VAR_8, VAR_9)))
  return 0;
 VAR_12 = (unsigned char *) (&(FUNC_1(VAR_8)[VAR_9].buf));
 if (*VAR_12 == VAR_4) {
  *VAR_11 = VAR_4;
  *VAR_10 = 2048;
  return 1;
 }
 if (*VAR_12 == VAR_7) {
  *VAR_11 = VAR_7;
  *VAR_10 = 2048;
  return 1;
 }
 if (*VAR_12 == VAR_0) {
  *VAR_11 = VAR_0;
  if (FUNC_2(VAR_8, VAR_9)) {
   *VAR_10 = *(VAR_12 + 7) + (*(VAR_12 + 6) << 8) + (*(VAR_12 + 5) << 16) + (*(VAR_12 + 4) << 24);
   return 1;
  } else
   return 0;
 }
 if (*VAR_12 == VAR_2) {
  *VAR_11 = VAR_2;
  if (FUNC_2(VAR_8, VAR_9)) {
   *VAR_10 = *(VAR_12 + 7) + (*(VAR_12 + 6) << 8) + (*(VAR_12 + 5) << 16) + (*(VAR_12 + 4) << 24);
   return 1;
  } else
   return 0;
 }
 if (*VAR_12 == VAR_6) {
  *VAR_11 = VAR_6;
  *VAR_10 = 0;
  return 1;
 }
 if (*VAR_12 == VAR_3) {
  *VAR_11 = VAR_3;
  *VAR_10 = 0;
  return 1;
 }
 if (*VAR_12 == VAR_5) {
  *VAR_11 = VAR_5;
  *VAR_10 = 0;
  return 1;
 }
 if (*VAR_12 == VAR_1) {
  *VAR_11 = VAR_1;
  *VAR_10 = 0;

  return 1;
 }
 return 0;
}
