
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uld_ctx {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ qpcnt; scalar_t__ db_state; int lock; int qpidr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct uld_ctx *VAR_4)
{
 FUNC_1(&VAR_4->dev->lock);
 if (VAR_4->dev->qpcnt <= VAR_2 &&
     VAR_4->dev->db_state == VAR_0) {
  VAR_4->dev->db_state = VAR_1;
  FUNC_0(&VAR_4->dev->qpidr, VAR_3, ((void*)0));
 }
 FUNC_2(&VAR_4->dev->lock);
}
