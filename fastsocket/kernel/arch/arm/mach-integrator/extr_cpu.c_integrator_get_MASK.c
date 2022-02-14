
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct icst525_vco {int s; int v; int r; } ;
typedef int cpumask_t ;
struct TYPE_3__ {int cpus_allowed; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__* VAR_2 ;
 unsigned int FUNC_3 (int *,struct icst525_vco) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ) ;
 unsigned int FUNC_7 () ;

__attribute__((used)) static unsigned int FUNC_8(unsigned int VAR_3)
{
 cpumask_t VAR_4;
 unsigned int VAR_5;
 u_int VAR_6;
 struct icst525_vco VAR_7;

 VAR_4 = VAR_2->cpus_allowed;

 FUNC_6(VAR_2, FUNC_2(VAR_3));
 FUNC_0(VAR_3 != FUNC_7());


 VAR_6 = FUNC_1(VAR_0);

 if (FUNC_5()) {
  VAR_7.s = (VAR_6 >> 8) & 7;
 } else if (FUNC_4()) {
  VAR_7.s = 1;
 }
 VAR_7.v = VAR_6 & 255;
 VAR_7.r = 22;

 VAR_5 = FUNC_3(&VAR_1, VAR_7);

 FUNC_6(VAR_2, VAR_4);

 return VAR_5;
}
