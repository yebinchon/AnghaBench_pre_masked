
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_info {int mask; int (* int_handler ) (struct adapter*) ;scalar_t__ msg; scalar_t__ fatal; } ;
struct adapter {int pdev_dev; } ;


 int FUNC_0 (int ,char*,scalar_t__,unsigned int) ;
 int FUNC_1 (int ,char*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct adapter*) ;
 unsigned int FUNC_4 (struct adapter*,unsigned int) ;
 int FUNC_5 (struct adapter*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct adapter *VAR_0, unsigned int VAR_1,
     const struct intr_info *VAR_2)
{
 int VAR_3 = 0;
 unsigned int VAR_4 = 0;
 unsigned int VAR_5 = FUNC_4(VAR_0, VAR_1);

 for ( ; VAR_2->mask; ++VAR_2) {
  if (!(VAR_5 & VAR_2->mask))
   continue;
  if (VAR_2->fatal) {
   VAR_3++;
   FUNC_0(VAR_0->pdev_dev, "%s (0x%x)\n", VAR_2->msg,
      VAR_5 & VAR_2->mask);
  } else if (VAR_2->msg && FUNC_2())
   FUNC_1(VAR_0->pdev_dev, "%s (0x%x)\n", VAR_2->msg,
     VAR_5 & VAR_2->mask);
  if (VAR_2->int_handler)
   VAR_2->int_handler(VAR_0);
  VAR_4 |= VAR_2->mask;
 }
 VAR_5 &= VAR_4;
 if (VAR_5)
  FUNC_5(VAR_0, VAR_1, VAR_5);
 return VAR_3;
}
