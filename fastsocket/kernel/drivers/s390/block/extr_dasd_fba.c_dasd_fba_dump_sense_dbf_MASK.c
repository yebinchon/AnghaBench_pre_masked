
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct irb {int scsw; } ;
struct dasd_device {int dummy; } ;


 int FUNC_0 (int ,struct dasd_device*,char*,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct irb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct dasd_device *VAR_1, struct irb *VAR_2,
   char *VAR_3)
{
 u64 *VAR_4;

 VAR_4 = (u64 *) FUNC_1(VAR_2);
 if (VAR_4) {
  FUNC_0(VAR_0, VAR_1,
         "%s: %s %02x%02x%02x %016llx %016llx %016llx "
         "%016llx", VAR_3,
         FUNC_5(&VAR_2->scsw) ? "t" : "c",
         FUNC_2(&VAR_2->scsw), FUNC_3(&VAR_2->scsw),
         FUNC_4(&VAR_2->scsw), VAR_4[0], VAR_4[1],
         VAR_4[2], VAR_4[3]);
 } else {
  FUNC_0(VAR_0, VAR_1, "%s",
         "SORRY - NO VALID SENSE AVAILABLE\n");
 }
}
