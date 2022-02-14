
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* dfsentry; } ;
typedef enum b43_dyndbg { ____Placeholder_b43_dyndbg } b43_dyndbg ;
struct TYPE_2__ {scalar_t__* dyn_debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

bool FUNC_1(struct b43_wldev *VAR_2, enum b43_dyndbg VAR_3)
{
 bool VAR_4;

 VAR_4 = (VAR_2->dfsentry && VAR_2->dfsentry->dyn_debug[VAR_3]);
 if (FUNC_0(VAR_4)) {


  VAR_1 = VAR_0;
 }

 return VAR_4;
}
