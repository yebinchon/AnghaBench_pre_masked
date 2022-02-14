
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct raw3270_view {TYPE_3__* dev; } ;
struct raw3270_request {int rescnt; int rc; } ;
struct TYPE_4__ {int dstat; int count; } ;
struct TYPE_5__ {TYPE_1__ cmd; } ;
struct irb {int* ecw; TYPE_2__ scsw; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct raw3270_view *VAR_11, struct raw3270_request *VAR_12,
   struct irb *VAR_13)
{




 if (VAR_13->scsw.cmd.dstat & VAR_1) {

  if (VAR_13->ecw[0] & VAR_9) {
   FUNC_0(VAR_5, &VAR_11->dev->flags);
   return VAR_6;
  }
 }
 if (VAR_12) {
  if (VAR_13->scsw.cmd.dstat & VAR_1) {
   if (VAR_13->ecw[0] & VAR_8)
    VAR_12->rc = -VAR_3;
   else
    VAR_12->rc = -VAR_2;
  } else

   VAR_12->rescnt = VAR_13->scsw.cmd.count;
 }
 if (VAR_13->scsw.cmd.dstat & VAR_0) {
  FUNC_0(VAR_4, &VAR_11->dev->flags);
  FUNC_1(&VAR_10);
 }
 return VAR_7;
}
