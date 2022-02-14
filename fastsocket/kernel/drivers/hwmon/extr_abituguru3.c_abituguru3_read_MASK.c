
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct abituguru3_data {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,unsigned int,unsigned int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct abituguru3_data*) ;
 int FUNC_2 (struct abituguru3_data*) ;
 int FUNC_3 (struct abituguru3_data*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct abituguru3_data *VAR_4, u8 VAR_5, u8 VAR_6,
 u8 VAR_7, u8 *VAR_8)
{
 int VAR_9, VAR_10;

 if ((VAR_10 = FUNC_1(VAR_4)))
  return VAR_10;

 FUNC_5(0x1A, VAR_4->addr + VAR_1);
 if ((VAR_10 = FUNC_3(VAR_4)) != VAR_2) {
  FUNC_0("read from 0x%02x:0x%02x timed out after "
   "sending 0x1A, status: 0x%02x\n", (unsigned int)VAR_5,
   (unsigned int)VAR_6, VAR_10);
  return -VAR_3;
 }

 FUNC_5(VAR_5, VAR_4->addr + VAR_0);
 if ((VAR_10 = FUNC_3(VAR_4)) != VAR_2) {
  FUNC_0("read from 0x%02x:0x%02x timed out after "
   "sending the bank, status: 0x%02x\n",
   (unsigned int)VAR_5, (unsigned int)VAR_6, VAR_10);
  return -VAR_3;
 }

 FUNC_5(VAR_6, VAR_4->addr + VAR_0);
 if ((VAR_10 = FUNC_3(VAR_4)) != VAR_2) {
  FUNC_0("read from 0x%02x:0x%02x timed out after "
   "sending the offset, status: 0x%02x\n",
   (unsigned int)VAR_5, (unsigned int)VAR_6, VAR_10);
  return -VAR_3;
 }

 FUNC_5(VAR_7, VAR_4->addr + VAR_0);
 if ((VAR_10 = FUNC_3(VAR_4)) != VAR_2) {
  FUNC_0("read from 0x%02x:0x%02x timed out after "
   "sending the count, status: 0x%02x\n",
   (unsigned int)VAR_5, (unsigned int)VAR_6, VAR_10);
  return -VAR_3;
 }

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  if ((VAR_10 = FUNC_2(VAR_4)) !=
    VAR_2) {
   FUNC_0("timeout reading byte %d from "
    "0x%02x:0x%02x, status: 0x%02x\n", VAR_9,
    (unsigned int)VAR_5, (unsigned int)VAR_6, VAR_10);
   break;
  }
  VAR_8[VAR_9] = FUNC_4(VAR_4->addr + VAR_0);
 }
 return VAR_9;
}
