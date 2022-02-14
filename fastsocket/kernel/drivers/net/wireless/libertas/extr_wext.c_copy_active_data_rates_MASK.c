
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int rates; } ;
struct lbs_private {scalar_t__ connect_status; scalar_t__ mesh_connect_status; TYPE_1__ curbssparams; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct lbs_private *VAR_4, u8 *VAR_5)
{
 FUNC_0(VAR_1);

 if ((VAR_4->connect_status != VAR_0) &&
  (VAR_4->mesh_connect_status != VAR_0))
  FUNC_2(VAR_5, VAR_3, VAR_2);
 else
  FUNC_2(VAR_5, VAR_4->curbssparams.rates, VAR_2);

 FUNC_1(VAR_1);
}
