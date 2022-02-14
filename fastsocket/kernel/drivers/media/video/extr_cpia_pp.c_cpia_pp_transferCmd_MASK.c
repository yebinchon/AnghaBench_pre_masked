
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pp_cam_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct pp_cam_entry*,int*,int) ;
 int FUNC_2 (struct pp_cam_entry*,int*,int) ;
 int FUNC_3 (int*,int*,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, u8 *VAR_5, u8 *VAR_6)
{
 int VAR_7;
 int VAR_8=0;
 int VAR_9;
 struct pp_cam_entry *VAR_10 = VAR_4;

 if(VAR_10 == ((void*)0)) {
  FUNC_0("Internal driver error: cam is NULL\n");
  return -VAR_2;
 }
 if(VAR_5 == ((void*)0)) {
  FUNC_0("Internal driver error: command is NULL\n");
  return -VAR_2;
 }
 VAR_9 = (((int)VAR_5[7])<<8) | VAR_5[6];
 if ((VAR_7 = FUNC_2(VAR_10, VAR_5, VAR_3)) < 0) {
  FUNC_0("Error writing command\n");
  return VAR_7;
 }
 if(VAR_5[0] == VAR_0) {
  u8 VAR_11[8];
  if(VAR_6 == ((void*)0)) {
   FUNC_0("Internal driver error: data is NULL\n");
   return -VAR_2;
  }
  if((VAR_7 = FUNC_1(VAR_10, VAR_11, 8)) < 0) {
   FUNC_0("Error reading command result\n");
         return VAR_7;
  }
  FUNC_3(VAR_6, VAR_11, VAR_9);
 } else if(VAR_5[0] == VAR_1) {
  if(VAR_9 > 0) {
   if(VAR_6 == ((void*)0)) {
    FUNC_0("Internal driver error: data is NULL\n");
    VAR_8 = -VAR_2;
   } else {
    if((VAR_7=FUNC_2(VAR_10, VAR_6, VAR_9)) < 0){
     FUNC_0("Error writing command data\n");
     return VAR_7;
    }
   }
  }
 } else {
  FUNC_0("Unexpected first byte of command: %x\n", VAR_5[0]);
  VAR_8 = -VAR_2;
 }
 return VAR_8;
}
