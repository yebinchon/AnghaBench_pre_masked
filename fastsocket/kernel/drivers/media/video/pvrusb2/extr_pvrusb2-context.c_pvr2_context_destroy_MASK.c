
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pvr2_context {TYPE_2__* exist_next; TYPE_1__* exist_prev; scalar_t__ hdw; } ;
struct TYPE_4__ {TYPE_1__* exist_prev; } ;
struct TYPE_3__ {TYPE_2__* exist_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_context*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct pvr2_context*,int ) ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,struct pvr2_context*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct pvr2_context *VAR_5)
{
 FUNC_5(VAR_0,"pvr2_context %p (destroy)",VAR_5);
 if (VAR_5->hdw) FUNC_4(VAR_5->hdw);
 FUNC_3(VAR_5, 0);
 FUNC_1(&VAR_3);
 if (VAR_5->exist_next) {
  VAR_5->exist_next->exist_prev = VAR_5->exist_prev;
 } else {
  VAR_2 = VAR_5->exist_prev;
 }
 if (VAR_5->exist_prev) {
  VAR_5->exist_prev->exist_next = VAR_5->exist_next;
 } else {
  VAR_1 = VAR_5->exist_next;
 }
 if (!VAR_1) {


  FUNC_6(&VAR_4);
 }
 FUNC_2(&VAR_3);
 FUNC_0(VAR_5);
}
