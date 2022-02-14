
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_link {TYPE_1__* ap; } ;
struct TYPE_2__ {int flags; struct ata_link* slave_link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (struct ata_link*) ;
 scalar_t__ FUNC_3 (struct ata_link*) ;
 int FUNC_4 (struct ata_link*,int ,char*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

int FUNC_8(struct ata_link *VAR_7, unsigned long VAR_8,
     int (*VAR_9)(struct ata_link *VAR_10))
{
 unsigned long VAR_11 = VAR_6;
 unsigned long VAR_12 = FUNC_1(VAR_11, VAR_1);
 int VAR_13 = 0;





 FUNC_0(VAR_7 == VAR_7->ap->slave_link);

 if (FUNC_6(VAR_12, VAR_8))
  VAR_12 = VAR_8;

 while (1) {
  unsigned long VAR_14 = VAR_6;
  int VAR_15, VAR_16;

  VAR_15 = VAR_16 = VAR_9(VAR_7);
  if (VAR_15 > 0)
   return 0;
  if (VAR_15 == -VAR_3) {
   if (FUNC_3(VAR_7))
    VAR_15 = 0;
   else if ((VAR_7->ap->flags & VAR_0) &&
     !FUNC_2(VAR_7) &&
     FUNC_7(VAR_14, VAR_12))
    VAR_15 = 0;
  }

  if (VAR_15)
   return VAR_15;
  if (FUNC_6(VAR_14, VAR_8))
   return -VAR_2;

  if (!VAR_13 && FUNC_6(VAR_14, VAR_11 + 5 * VAR_4) &&
      (VAR_8 - VAR_14 > 3 * VAR_4)) {
   FUNC_4(VAR_7, VAR_5,
    "link is slow to respond, please be patient "
    "(ready=%d)\n", VAR_16);
   VAR_13 = 1;
  }

  FUNC_5(VAR_7->ap, 50);
 }
}
