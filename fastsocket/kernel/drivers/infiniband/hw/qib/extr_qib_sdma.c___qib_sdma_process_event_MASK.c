
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_sdma_state {int current_state; int go_s99_running; int last_event; } ;
struct qib_pportdata {TYPE_1__* dd; struct qib_sdma_state sdma_state; } ;
typedef enum qib_sdma_events { ____Placeholder_qib_sdma_events } qib_sdma_events ;
struct TYPE_2__ {int (* f_sdma_hw_clean_up ) (struct qib_pportdata*) ;} ;
 int FUNC_0 (struct qib_sdma_state*) ;
 int FUNC_1 (struct qib_pportdata*) ;
 int FUNC_2 (struct qib_pportdata*,int const) ;
 int FUNC_3 (struct qib_pportdata*) ;
 int FUNC_4 (struct qib_pportdata*) ;
 int FUNC_5 (struct qib_pportdata*) ;

void FUNC_6(struct qib_pportdata *VAR_0,
 enum qib_sdma_events VAR_1)
{
 struct qib_sdma_state *VAR_2 = &VAR_0->sdma_state;

 switch (VAR_2->current_state) {
 case 134:
  switch (VAR_1) {
  case 145:
   break;
  case 142:






   VAR_2->go_s99_running = 1;

  case 144:

   FUNC_0(&VAR_0->sdma_state);
   FUNC_2(VAR_0,
           133);
   break;
  case 143:
   break;
  case 141:
   FUNC_4(VAR_0);
   break;
  case 140:
   break;
  case 139:
   break;
  case 138:
   break;
  case 137:
   break;
  case 136:
   break;
  case 135:
   break;
  }
  break;

 case 133:
  switch (VAR_1) {
  case 145:
   FUNC_2(VAR_0, 134);
   FUNC_4(VAR_0);
   break;
  case 144:
   break;
  case 143:
   FUNC_2(VAR_0, VAR_2->go_s99_running ?
           128 :
           132);
   break;
  case 142:
   VAR_2->go_s99_running = 1;
   break;
  case 141:
   break;
  case 140:
   break;
  case 139:
   break;
  case 138:
   VAR_2->go_s99_running = 0;
   break;
  case 137:
   break;
  case 136:
   break;
  case 135:
   break;
  }
  break;

 case 132:
  switch (VAR_1) {
  case 145:
   FUNC_2(VAR_0, 134);
   FUNC_4(VAR_0);
   break;
  case 144:
   break;
  case 143:
   break;
  case 142:
   FUNC_2(VAR_0, 128);
   VAR_2->go_s99_running = 1;
   break;
  case 141:
   break;
  case 140:
   break;
  case 139:
   break;
  case 138:
   break;
  case 137:
   break;
  case 136:
   break;
  case 135:
   break;
  }
  break;

 case 131:
  switch (VAR_1) {
  case 145:
   FUNC_2(VAR_0, 134);
   break;
  case 144:
   break;
  case 143:
   break;
  case 142:
   VAR_2->go_s99_running = 1;
   break;
  case 141:
   FUNC_2(VAR_0,
           133);
   FUNC_1(VAR_0);
   break;
  case 140:
   break;
  case 139:
   break;
  case 138:
   VAR_2->go_s99_running = 0;
   break;
  case 137:
   break;
  case 136:
   break;
  case 135:
   break;
  }
  break;

 case 130:
  switch (VAR_1) {
  case 145:
   FUNC_2(VAR_0, 134);
   FUNC_3(VAR_0);
   break;
  case 144:
   break;
  case 143:
   break;
  case 142:
   VAR_2->go_s99_running = 1;
   break;
  case 141:
   break;
  case 140:
   FUNC_2(VAR_0,
           131);
   FUNC_3(VAR_0);
   break;
  case 139:
   break;
  case 138:
   VAR_2->go_s99_running = 0;
   break;
  case 137:
   break;
  case 136:
   break;
  case 135:
   break;
  }
  break;

 case 129:
  switch (VAR_1) {
  case 145:
   FUNC_2(VAR_0, 134);
   FUNC_3(VAR_0);
   break;
  case 144:
   break;
  case 143:
   break;
  case 142:
   VAR_2->go_s99_running = 1;
   break;
  case 141:
   break;
  case 140:
   break;
  case 139:
   FUNC_2(VAR_0,
           130);
   VAR_0->dd->f_sdma_hw_clean_up(VAR_0);
   break;
  case 138:
   VAR_2->go_s99_running = 0;
   break;
  case 137:
   break;
  case 136:
   break;
  case 135:
   break;
  }
  break;

 case 128:
  switch (VAR_1) {
  case 145:
   FUNC_2(VAR_0, 134);
   FUNC_3(VAR_0);
   break;
  case 144:
   break;
  case 143:
   break;
  case 142:
   break;
  case 141:
   break;
  case 140:
   break;
  case 139:
   FUNC_2(VAR_0,
           131);
   FUNC_3(VAR_0);
   break;
  case 138:
   FUNC_2(VAR_0, 129);
   VAR_2->go_s99_running = 0;
   break;
  case 137:
   FUNC_2(VAR_0,
           131);
   FUNC_3(VAR_0);
   break;
  case 136:
   FUNC_2(VAR_0, 129);
   break;
  case 135:
   break;
  }
  break;
 }

 VAR_2->last_event = VAR_1;
}
