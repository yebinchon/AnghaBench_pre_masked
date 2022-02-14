
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct cfq_queue {scalar_t__ last_request_pos; int seek_history; } ;
struct cfq_data {int queue; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;

__attribute__((used)) static void
FUNC_3(struct cfq_data *VAR_2, struct cfq_queue *VAR_3,
         struct request *VAR_4)
{
 sector_t VAR_5 = 0;
 sector_t VAR_6 = FUNC_2(VAR_4);
 if (VAR_3->last_request_pos) {
  if (VAR_3->last_request_pos < FUNC_1(VAR_4))
   VAR_5 = FUNC_1(VAR_4) - VAR_3->last_request_pos;
  else
   VAR_5 = VAR_3->last_request_pos - FUNC_1(VAR_4);
 }

 VAR_3->seek_history <<= 1;
 if (FUNC_0(VAR_2->queue))
  VAR_3->seek_history |= (VAR_6 < VAR_0);
 else
  VAR_3->seek_history |= (VAR_5 > VAR_1);
}
