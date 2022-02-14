
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int shift; int mult; int (* read ) (TYPE_1__*) ;} ;


 TYPE_1__ VAR_0 ;
 unsigned long long FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

unsigned long long FUNC_2(void)
{
 return FUNC_0(VAR_0.read(&VAR_0),
      VAR_0.mult, VAR_0.shift);
}
