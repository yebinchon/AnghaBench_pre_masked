
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct airq_t {int drv_data; int (* handler ) (scalar_t__*,int ) ;} ;
struct TYPE_2__ {unsigned long* word; scalar_t__* byte; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct airq_t*** VAR_3 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_1 (struct airq_t*) ;
 int FUNC_2 (scalar_t__*,int ) ;

void FUNC_3(u8 VAR_5)
{
 int VAR_6;
 int VAR_7;
 unsigned long VAR_8;
 struct airq_t *VAR_9;





 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_8 = VAR_4[VAR_5].word[VAR_6];
  VAR_7 = VAR_6 * VAR_1;



  while (VAR_8) {
   if (VAR_8 & VAR_0) {
    VAR_9 = VAR_3[VAR_5][VAR_7];

    FUNC_0();
    if (FUNC_1(VAR_9))
     VAR_9->handler(&VAR_4[VAR_5].byte[VAR_7],
            VAR_9->drv_data);
    else



     VAR_4[VAR_5].byte[VAR_7] = 0;
   }
   VAR_8 <<= 8;
   VAR_7++;
  }
 }
}
