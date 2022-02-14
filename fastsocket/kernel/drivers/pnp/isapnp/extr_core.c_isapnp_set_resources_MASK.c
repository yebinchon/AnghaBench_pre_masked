
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct pnp_dev {int active; int number; int dev; TYPE_1__* card; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int *,char*,...) ;
 struct resource* FUNC_6 (struct pnp_dev*,int ,int) ;
 scalar_t__ FUNC_7 (struct resource*) ;

__attribute__((used)) static int FUNC_8(struct pnp_dev *VAR_12)
{
 struct resource *VAR_13;
 int VAR_14;

 FUNC_5(&VAR_12->dev, "set resources\n");
 FUNC_1(VAR_12->card->number, VAR_12->number);
 VAR_12->active = 1;
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  VAR_13 = FUNC_6(VAR_12, VAR_1, VAR_14);
  if (FUNC_7(VAR_13)) {
   FUNC_5(&VAR_12->dev, "  set io  %d to %#llx\n",
    VAR_14, (unsigned long long) VAR_13->start);
   FUNC_4(VAR_7 + (VAR_14 << 1),
       VAR_13->start);
  }
 }
 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  VAR_13 = FUNC_6(VAR_12, VAR_2, VAR_14);
  if (FUNC_7(VAR_13)) {
   int VAR_15 = VAR_13->start;
   if (VAR_15 == 2)
    VAR_15 = 9;
   FUNC_5(&VAR_12->dev, "  set irq %d to %d\n", VAR_14, VAR_15);
   FUNC_3(VAR_5 + (VAR_14 << 1), VAR_15);
  }
 }
 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
  VAR_13 = FUNC_6(VAR_12, VAR_0, VAR_14);
  if (FUNC_7(VAR_13)) {
   FUNC_5(&VAR_12->dev, "  set dma %d to %lld\n",
    VAR_14, (unsigned long long) VAR_13->start);
   FUNC_3(VAR_4 + VAR_14, VAR_13->start);
  }
 }
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  VAR_13 = FUNC_6(VAR_12, VAR_3, VAR_14);
  if (FUNC_7(VAR_13)) {
   FUNC_5(&VAR_12->dev, "  set mem %d to %#llx\n",
    VAR_14, (unsigned long long) VAR_13->start);
   FUNC_4(VAR_6 + (VAR_14 << 3),
       (VAR_13->start >> 8) & 0xffff);
  }
 }

 FUNC_0(VAR_12->number);
 FUNC_2();
 return 0;
}
