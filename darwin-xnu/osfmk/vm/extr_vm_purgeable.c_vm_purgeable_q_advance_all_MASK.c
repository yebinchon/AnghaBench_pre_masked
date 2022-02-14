
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* purgeable_q_t ;
typedef scalar_t__ int64_t ;
typedef scalar_t__ int32_t ;
struct TYPE_6__ {scalar_t__ count; size_t next; } ;
struct TYPE_5__ {scalar_t__ new_pages; int token_q_unripe; size_t token_q_head; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 TYPE_3__* VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5()
{
 FUNC_1(&VAR_11, VAR_1);



 int VAR_12;
 if(VAR_9 > (VAR_5 >> 1))
 {
  for (VAR_12 = VAR_2; VAR_12 < VAR_3; VAR_12++) {
   int64_t VAR_13 = VAR_8[VAR_12].new_pages += VAR_9;
   FUNC_3(VAR_13 >= 0);
   FUNC_3(VAR_13 <= VAR_4);
   VAR_8[VAR_12].new_pages = (int32_t) VAR_13;
   FUNC_3(VAR_8[VAR_12].new_pages == VAR_13);
  }
  VAR_9 = 0;
 }
 for (VAR_12 = VAR_2; VAR_12 < VAR_3; VAR_12++) {
  purgeable_q_t VAR_14 = &VAR_8[VAR_12];
  uint32_t VAR_15 = 1;


  while (VAR_14->token_q_unripe) {
   if (VAR_10[VAR_14->token_q_unripe].count && VAR_15)
   {
    VAR_10[VAR_14->token_q_unripe].count -= 1;
    VAR_15 -= 1;
   }

   if (VAR_10[VAR_14->token_q_unripe].count == 0) {
    VAR_14->token_q_unripe = VAR_10[VAR_14->token_q_unripe].next;
    VAR_7++;
    FUNC_0((FUNC_2(VAR_0, VAR_6)),
            VAR_14->type,
            VAR_10[VAR_14->token_q_head].count,

            0,
            VAR_7,
            0);
    continue;

   }
   if (VAR_15 == 0)
    break;

  }







  if (!VAR_14->token_q_unripe) {
   VAR_14->new_pages -= VAR_15;
   FUNC_3((int32_t) VAR_9 + VAR_14->new_pages >= 0);
  }



 }
}
