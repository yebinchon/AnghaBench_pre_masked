
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct geom {int dummy; } ;
struct r10conf {scalar_t__ reshape_progress; struct geom prev; TYPE_1__* mddev; struct geom geo; } ;
struct r10bio {scalar_t__ sector; int state; } ;
struct TYPE_2__ {int reshape_backwards; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct geom*,struct r10bio*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct r10conf *VAR_2, struct r10bio *VAR_3)
{
 struct geom *VAR_4 = &VAR_2->geo;

 if (VAR_2->reshape_progress != VAR_0 &&
     ((VAR_3->sector >= VAR_2->reshape_progress) !=
      VAR_2->mddev->reshape_backwards)) {
  FUNC_2(VAR_1, &VAR_3->state);
  VAR_4 = &VAR_2->prev;
 } else
  FUNC_1(VAR_1, &VAR_3->state);

 FUNC_0(VAR_4, VAR_3);
}
