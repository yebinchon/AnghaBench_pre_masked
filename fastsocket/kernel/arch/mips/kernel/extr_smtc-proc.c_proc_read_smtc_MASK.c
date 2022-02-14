
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_2__ {int selfipis; int timerints; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int FUNC_3(char *VAR_4, char **VAR_5, off_t VAR_6,
                          int VAR_7, int *VAR_8, void *VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 extern unsigned long VAR_13;

 VAR_11 = FUNC_2(VAR_4, "SMTC Status Word: 0x%08x\n", VAR_3);
 VAR_10 += VAR_11;
 VAR_4 += VAR_11;
 VAR_11 = FUNC_2(VAR_4, "Config7: 0x%08x\n", FUNC_1());
 VAR_10 += VAR_11;
 VAR_4 += VAR_11;
 VAR_11 = FUNC_2(VAR_4, "EBASE: 0x%08lx\n", VAR_13);
 VAR_10 += VAR_11;
 VAR_4 += VAR_11;
 VAR_11 = FUNC_2(VAR_4, "Counter Interrupts taken per CPU (TC)\n");
 VAR_10 += VAR_11;
 VAR_4 += VAR_11;
 for (VAR_12=0; VAR_12 < VAR_0; VAR_12++) {
  VAR_11 = FUNC_2(VAR_4, "%d: %ld\n", VAR_12, VAR_1[VAR_12].timerints);
  VAR_10 += VAR_11;
  VAR_4 += VAR_11;
 }
 VAR_11 = FUNC_2(VAR_4, "Self-IPIs by CPU:\n");
 VAR_10 += VAR_11;
 VAR_4 += VAR_11;
 for(VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_11 = FUNC_2(VAR_4, "%d: %ld\n", VAR_12, VAR_1[VAR_12].selfipis);
  VAR_10 += VAR_11;
  VAR_4 += VAR_11;
 }
 VAR_11 = FUNC_2(VAR_4, "%d Recoveries of \"stolen\" FPU\n",
               FUNC_0(&VAR_2));
 VAR_10 += VAR_11;
 VAR_4 += VAR_11;

 return VAR_10;
}
