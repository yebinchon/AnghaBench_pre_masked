
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ehea_adapter {int handle; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (char*,...) ;
 unsigned long FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

u64 FUNC_6(struct ehea_adapter *VAR_4, u64 VAR_5,
      u64 *VAR_6, u64 *VAR_7)
{
 unsigned long VAR_8;
 u64 *VAR_9;
 u64 VAR_10 = 0;

 VAR_9 = (void *)FUNC_4(VAR_1);
 if (!VAR_9) {
  FUNC_1("Cannot allocate rblock memory.");
  goto out;
 }

 VAR_8 = FUNC_2(VAR_4->handle, VAR_5, VAR_9);

 if (VAR_8 == VAR_3) {
  VAR_10 = FUNC_0(VAR_0, VAR_9[2]);
  *VAR_6 = VAR_9[6];
  *VAR_7 = VAR_9[12];
  FUNC_5(VAR_9);
 } else if (VAR_8 == VAR_2) {
  FUNC_1("No error data available: %llX.", VAR_5);
 } else
  FUNC_1("Error data could not be fetched: %llX", VAR_5);

 FUNC_3((unsigned long)VAR_9);
out:
 return VAR_10;
}
