
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,scalar_t__,...) ;

void FUNC_3(struct device *VAR_2, u8 VAR_3, unsigned long VAR_4)
{
 if (!VAR_2 || (VAR_3 != VAR_0 &&
     VAR_3 != VAR_1)) {
  FUNC_0(1);
  return;
 };

 if (VAR_4 == 0)
  FUNC_2("OMAP PM: remove min bus tput constraint: "
    "dev %s for agent_id %d\n", FUNC_1(VAR_2), VAR_3);
 else
  FUNC_2("OMAP PM: add min bus tput constraint: "
    "dev %s for agent_id %d: rate %ld KiB\n",
    FUNC_1(VAR_2), VAR_3, VAR_4);
}
