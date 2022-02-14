
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct irb {int scsw; } ;
struct dasd_device {int dummy; } ;


 int FUNC_0 (int ,struct dasd_device*,char*,char*,int ,int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct irb*) ;

__attribute__((used)) static void
FUNC_2(struct dasd_device *VAR_1, struct irb *VAR_2,
    char *VAR_3)
{
 u64 *VAR_4;
 u64 *VAR_5;

 VAR_4 = (u64 *) FUNC_1(VAR_2);
 VAR_5 = (u64 *) &VAR_2->scsw;
 if (VAR_4) {
  FUNC_0(VAR_0, VAR_1, "%s: %016llx %08x : "
         "%016llx %016llx %016llx %016llx",
         VAR_3, *VAR_5, *((u32 *) (VAR_5 + 1)),
         VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3]);
 } else {
  FUNC_0(VAR_0, VAR_1, "%s: %016llx %08x : %s",
         VAR_3, *VAR_5, *((u32 *) (VAR_5 + 1)),
         "NO VALID SENSE");
 }
}
