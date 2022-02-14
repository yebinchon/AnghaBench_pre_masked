
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct abituguru_data {scalar_t__ addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct abituguru_data*) ;
 int FUNC_2 (struct abituguru_data*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (struct abituguru_data*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct abituguru_data *VAR_6,
 u8 VAR_7, u8 VAR_8, u8 *VAR_9, int VAR_10)
{


 int VAR_11, VAR_12 = VAR_2;


 VAR_11 = FUNC_2(VAR_6, VAR_7, VAR_8,
  VAR_1);
 if (VAR_11)
  return VAR_11;


 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  if (FUNC_3(VAR_6, VAR_4)) {
   FUNC_0(1, "timeout exceeded waiting for "
    "write state (bank: %d, sensor: %d)\n",
    (int)VAR_7, (int)VAR_8);
   break;
  }
  FUNC_6(VAR_9[VAR_11], VAR_6->addr + VAR_0);
 }




 if (FUNC_3(VAR_6, VAR_3)) {
  FUNC_0(1, "timeout exceeded waiting for read state "
   "after write (bank: %d, sensor: %d)\n", (int)VAR_7,
   (int)VAR_8);
  return -VAR_5;
 }


 while (FUNC_4(VAR_6->addr + VAR_0) != 0xAC) {
  VAR_12--;
  if (VAR_12 == 0) {
   FUNC_0(1, "CMD reg does not hold 0xAC after "
    "write (bank: %d, sensor: %d)\n",
    (int)VAR_7, (int)VAR_8);
   return -VAR_5;
  }
  FUNC_5(0);
 }


 FUNC_1(VAR_6);

 return VAR_11;
}
