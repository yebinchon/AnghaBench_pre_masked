
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bw_stats_struct {int status; int status_printed; int bus_error; int mem_bad_d; int mem_cor_d; int l2_bad_t; int l2_cor_t; int l2_bad_d; int l2_cor_d; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static int FUNC_4(char *VAR_1, struct bw_stats_struct *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1, "SiByte Bus Watcher statistics\n");
 VAR_3 += FUNC_3(VAR_1+VAR_3, "-----------------------------\n");
 VAR_3 += FUNC_3(VAR_1+VAR_3, "L2-d-cor %8ld\nL2-d-bad %8ld\n",
         VAR_2->l2_cor_d, VAR_2->l2_bad_d);
 VAR_3 += FUNC_3(VAR_1+VAR_3, "L2-t-cor %8ld\nL2-t-bad %8ld\n",
         VAR_2->l2_cor_t, VAR_2->l2_bad_t);
 VAR_3 += FUNC_3(VAR_1+VAR_3, "MC-d-cor %8ld\nMC-d-bad %8ld\n",
         VAR_2->mem_cor_d, VAR_2->mem_bad_d);
 VAR_3 += FUNC_3(VAR_1+VAR_3, "IO-err   %8ld\n", VAR_2->bus_error);
 VAR_3 += FUNC_3(VAR_1+VAR_3, "\nLast recorded signature:\n");
 VAR_3 += FUNC_3(VAR_1+VAR_3, "Request %02x from %d, answered by %d with Dcode %d\n",
         (unsigned int)(FUNC_2(VAR_2->status) & 0x3f),
         (int)(FUNC_2(VAR_2->status) >> 6),
         (int)FUNC_1(VAR_2->status),
         (int)FUNC_0(VAR_2->status));


 if (VAR_2->status & VAR_0)
  VAR_3 += FUNC_3(VAR_1+VAR_3, "Multiple errors observed since last check.\n");
 if (VAR_2->status_printed) {
  VAR_3 += FUNC_3(VAR_1+VAR_3, "(no change since last printing)\n");
 } else {
  VAR_2->status_printed = 1;
 }

 return VAR_3;
}
