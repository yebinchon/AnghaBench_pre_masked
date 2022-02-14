
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_5)
{
 unsigned long VAR_6 = -1, VAR_7 = 0, VAR_8;
 unsigned long VAR_9[10], VAR_10[10], VAR_11 = 0;
 unsigned int VAR_12;

 if (!VAR_0)
  return;
 VAR_3 += 1;
 if (VAR_3 == 0)
  FUNC_0("Erase counter total overflow\n");
 VAR_0[VAR_5] += 1;
 if (VAR_0[VAR_5] == 0)
  FUNC_0("Erase counter overflow for erase block %u\n", VAR_5);
 VAR_2 += 1;
 if (VAR_2 < VAR_1)
  return;
 VAR_2 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {
  unsigned long VAR_13 = VAR_0[VAR_12];
  if (VAR_13 < VAR_6)
   VAR_6 = VAR_13;
  if (VAR_13 > VAR_7)
   VAR_7 = VAR_13;
  VAR_11 += VAR_13;
 }
 for (VAR_12 = 0; VAR_12 < 9; ++VAR_12) {
  VAR_9[VAR_12] = 0;
  VAR_10[VAR_12] = (VAR_7 * (VAR_12 + 1) + 5) / 10;
 }
 VAR_9[9] = 0;
 VAR_10[9] = VAR_7;
 for (VAR_12 = 0; VAR_12 < VAR_4; ++VAR_12) {
  int VAR_14;
  unsigned long VAR_15 = VAR_0[VAR_12];
  for (VAR_14 = 0; VAR_14 < 10; ++VAR_14)
   if (VAR_15 <= VAR_10[VAR_14]) {
    VAR_9[VAR_14] += 1;
    break;
   }
 }
 VAR_8 = VAR_11 / VAR_4;

 FUNC_1("*** Wear Report ***\n");
 FUNC_1("Total numbers of erases:  %lu\n", VAR_11);
 FUNC_1("Number of erase blocks:   %u\n", VAR_4);
 FUNC_1("Average number of erases: %lu\n", VAR_8);
 FUNC_1("Maximum number of erases: %lu\n", VAR_7);
 FUNC_1("Minimum number of erases: %lu\n", VAR_6);
 for (VAR_12 = 0; VAR_12 < 10; ++VAR_12) {
  unsigned long VAR_16 = (VAR_12 ? VAR_10[VAR_12 - 1] + 1 : 0);
  if (VAR_16 > VAR_10[VAR_12])
   continue;
  FUNC_1("Number of ebs with erase counts from %lu to %lu : %lu\n",
   VAR_16,
   VAR_10[VAR_12],
   VAR_9[VAR_12]);
 }
 FUNC_1("*** End of Wear Report ***\n");
}
