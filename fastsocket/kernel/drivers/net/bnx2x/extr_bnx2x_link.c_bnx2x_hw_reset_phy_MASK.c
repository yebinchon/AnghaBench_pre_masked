
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct link_params {int port; TYPE_1__* phy; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;
struct TYPE_3__ {int (* hw_reset ) (TYPE_1__*,struct link_params*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_1 (struct link_params*,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (TYPE_1__*,struct link_params*) ;

void FUNC_3(struct link_params *VAR_8)
{
 u8 VAR_9;
 struct bnx2x *VAR_10 = VAR_8->bp;
 FUNC_1(VAR_8, 0);
 FUNC_0(VAR_10, VAR_6 + VAR_8->port*4,
         (VAR_5 |
   VAR_4 |
   VAR_3 |
   VAR_2));

 for (VAR_9 = VAR_0; VAR_9 < VAR_1;
       VAR_9++) {
  if (VAR_8->phy[VAR_9].hw_reset) {
   VAR_8->phy[VAR_9].hw_reset(
    &VAR_8->phy[VAR_9],
    VAR_8);
   VAR_8->phy[VAR_9] = VAR_7;
  }
 }
}
