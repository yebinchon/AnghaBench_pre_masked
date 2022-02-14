
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct work_struct {int dummy; } ;
typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_5__ {scalar_t__ i2eUsingIrq; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct work_struct*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct work_struct *VAR_3)
{
 i2eBordStrPtr VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2);




 VAR_0++;

 if ( VAR_4 ) {
  FUNC_1( VAR_4 );
  if( VAR_4->i2eUsingIrq ) {

   FUNC_2(VAR_4);
  }
 }
}
