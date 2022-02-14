
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int irqreturn_t ;
typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_3__ {int i2eUsingIrq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int,int,...) ;
 int VAR_4 ;

__attribute__((used)) static irqreturn_t
FUNC_2(int VAR_5, void *VAR_6)
{
 i2eBordStrPtr VAR_7 = VAR_6;

 FUNC_1 (VAR_2, VAR_1, 99, 1, VAR_7->i2eUsingIrq );

 FUNC_0(VAR_7);

 ++VAR_4;

 FUNC_1 (VAR_2, VAR_1, VAR_3, 0 );
 return VAR_0;
}
