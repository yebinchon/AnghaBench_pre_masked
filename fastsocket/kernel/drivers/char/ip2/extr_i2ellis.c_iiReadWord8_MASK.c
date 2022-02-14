
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* i2eBordStrPtr ;
struct TYPE_3__ {int i2eData; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned short
FUNC_1(i2eBordStrPtr VAR_0)
{
 unsigned short VAR_1;

 VAR_1 = FUNC_0(VAR_0->i2eData);

 return (FUNC_0(VAR_0->i2eData) << 8) | VAR_1;
}
