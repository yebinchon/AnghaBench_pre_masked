
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct nandsim {int options; size_t npstates; int state; int* pstates; int* op; int stateidx; int nxstate; } ;
struct TYPE_2__ {int reqopts; int* states; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct nandsim*) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (struct nandsim*,int ) ;

__attribute__((used)) static int FUNC_5(struct nandsim *VAR_3, uint32_t VAR_4)
{
 int VAR_5 = 0;
 int VAR_6, VAR_7, VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {

  int VAR_9 = 1;

  if (!(VAR_3->options & VAR_2[VAR_6].reqopts))

   continue;

  if (VAR_4) {
   if (!(VAR_2[VAR_6].states[VAR_3->npstates] & VAR_1))
    continue;
  } else {
   if (FUNC_1(VAR_3->state) != FUNC_1(VAR_2[VAR_6].states[VAR_3->npstates]))
    continue;
  }

  for (VAR_7 = 0; VAR_7 < VAR_3->npstates; VAR_7++)
   if (FUNC_1(VAR_2[VAR_6].states[VAR_7]) != FUNC_1(VAR_3->pstates[VAR_7])
    && (VAR_3->options & VAR_2[VAR_8].reqopts)) {
    VAR_9 = 0;
    break;
   }

  if (VAR_9) {
   VAR_8 = VAR_6;
   VAR_5 += 1;
  }
 }

 if (VAR_5 == 1) {

  VAR_3->op = &VAR_2[VAR_8].states[0];
  if (VAR_4) {







   VAR_3->stateidx = VAR_3->npstates - 1;
  } else {
   VAR_3->stateidx = VAR_3->npstates;
  }
  VAR_3->npstates = 0;
  VAR_3->state = VAR_3->op[VAR_3->stateidx];
  VAR_3->nxstate = VAR_3->op[VAR_3->stateidx + 1];
  FUNC_0("find_operation: operation found, index: %d, state: %s, nxstate %s\n",
    VAR_8, FUNC_3(VAR_3->state), FUNC_3(VAR_3->nxstate));
  return 0;
 }

 if (VAR_5 == 0) {

  if (VAR_3->npstates != 0) {
   FUNC_0("find_operation: no operation found, try again with state %s\n",
     FUNC_3(VAR_3->state));
   VAR_3->npstates = 0;
   return FUNC_5(VAR_3, 0);

  }
  FUNC_0("find_operation: no operations found\n");
  FUNC_4(VAR_3, FUNC_2(VAR_3));
  return -2;
 }

 if (VAR_4) {

  FUNC_0("find_operation: BUG, operation must be known if address is input\n");
  return -2;
 }

 FUNC_0("find_operation: there is still ambiguity\n");

 VAR_3->pstates[VAR_3->npstates++] = VAR_3->state;

 return -1;
}
