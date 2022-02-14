
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_4__ {scalar_t__ i2eUsingIrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int,int,...) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_6;
 i2eBordStrPtr VAR_7;

 FUNC_1(VAR_1, VAR_0, 99, 1, 0);


 for( VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6 ) {
  VAR_7 = VAR_3[VAR_6];




  if (VAR_7 && VAR_7->i2eUsingIrq == 0)
   FUNC_0(VAR_7);
 }

 ++VAR_5;

 FUNC_1 (VAR_1, VAR_0, VAR_2, 0 );
}
