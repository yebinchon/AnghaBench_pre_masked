
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned long*,unsigned long,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_7(char *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14[VAR_7];
 unsigned long VAR_15 = 0;
 u32 *VAR_16;
 char *VAR_17 = VAR_8;

 VAR_16 = (u32 *) FUNC_4(VAR_4);
 if (!VAR_16)
  return -VAR_1;

 VAR_15 = VAR_3;
 if (VAR_9)
  VAR_15 |= VAR_2;

 VAR_10 = FUNC_5(VAR_5, VAR_14, VAR_15, 0, FUNC_0(VAR_16),
    0, 0, 0, 0, 0, 0);
 if (VAR_10 != VAR_6) {
  FUNC_3((unsigned long) VAR_16);
  return -VAR_0;
 }

 VAR_11 = VAR_14[0];
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_13 = FUNC_2(VAR_16[2*VAR_12+1]);
  if ((FUNC_1(VAR_13) && !VAR_9) ||
      (!FUNC_1(VAR_13) && VAR_9))
   VAR_17 += FUNC_6(VAR_17, "%d,", VAR_13);
 }
 if (VAR_17 > VAR_8) {
  VAR_17--;
  VAR_17 += FUNC_6(VAR_17, "\n");
 }

 FUNC_3((unsigned long) VAR_16);
 return VAR_17-VAR_8;
}
