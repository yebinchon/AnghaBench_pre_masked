
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amo {int dummy; } ;
struct TYPE_2__ {struct amo* amos_page; } ;


 int FUNC_0 (struct amo*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static struct amo *
FUNC_1(int VAR_1)
{
 struct amo *VAR_2 = VAR_0->amos_page + VAR_1;

 (void)FUNC_0(VAR_2);
 return VAR_2;
}
