
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_8__ {char* name; } ;
struct TYPE_7__ {int lock; TYPE_1__* controller; } ;
struct TYPE_6__ {int flags; size_t devType; char* fileName; int lineNum; size_t lastDevType; } ;
struct TYPE_5__ {TYPE_2__* channel; } ;
typedef TYPE_2__ DMA_Channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_4__* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_3__ VAR_9 ;
 scalar_t__ FUNC_1 (char*,char*,...) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(char *VAR_10, char **VAR_11, off_t VAR_12,
      int VAR_13, int *VAR_14, void *VAR_15)
{
 int VAR_16;
 int VAR_17;
 int VAR_18 = VAR_13 - 200;
 int VAR_19 = 0;
 DMA_Channel_t *VAR_20;

 if (FUNC_0(&VAR_9.lock) < 0) {
  return -VAR_8;
 }

 for (VAR_16 = 0; VAR_16 < VAR_6;
      VAR_16++) {
  for (VAR_17 = 0; VAR_17 < VAR_5;
       VAR_17++) {
   if (VAR_19 >= VAR_18) {
    break;
   }

   VAR_20 =
       &VAR_9.controller[VAR_16].channel[VAR_17];

   VAR_19 +=
       FUNC_1(VAR_10 + VAR_19, "%d:%d ", VAR_16,
        VAR_17);

   if ((VAR_20->flags & VAR_1) !=
       0) {
    VAR_19 +=
        FUNC_1(VAR_10 + VAR_19, "Dedicated for %s ",
         VAR_7[VAR_20->
         devType].name);
   } else {
    VAR_19 += FUNC_1(VAR_10 + VAR_19, "Shared ");
   }

   if ((VAR_20->flags & VAR_3) != 0) {
    VAR_19 += FUNC_1(VAR_10 + VAR_19, "No ISR ");
   }

   if ((VAR_20->flags & VAR_2) != 0) {
    VAR_19 += FUNC_1(VAR_10 + VAR_19, "Fifo: 128 ");
   } else {
    VAR_19 += FUNC_1(VAR_10 + VAR_19, "Fifo: 64  ");
   }

   if ((VAR_20->flags & VAR_0) != 0) {
    VAR_19 +=
        FUNC_1(VAR_10 + VAR_19, "InUse by %s",
         VAR_7[VAR_20->
         devType].name);






   } else {
    VAR_19 += FUNC_1(VAR_10 + VAR_19, "Avail ");
   }

   if (VAR_20->lastDevType != VAR_4) {
    VAR_19 +=
        FUNC_1(VAR_10 + VAR_19, "Last use: %s ",
         VAR_7[VAR_20->
         lastDevType].
         name);
   }

   VAR_19 += FUNC_1(VAR_10 + VAR_19, "\n");
  }
 }
 FUNC_2(&VAR_9.lock);
 *VAR_14 = 1;

 return VAR_19;
}
