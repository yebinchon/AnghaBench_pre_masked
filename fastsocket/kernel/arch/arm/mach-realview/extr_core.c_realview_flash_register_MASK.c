
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct resource {int dummy; } ;
struct TYPE_3__ {int num_resources; struct resource* resource; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

int FUNC_1(struct resource *VAR_1, u32 VAR_2)
{
 VAR_0.resource = VAR_1;
 VAR_0.num_resources = VAR_2;
 return FUNC_0(&VAR_0);
}
