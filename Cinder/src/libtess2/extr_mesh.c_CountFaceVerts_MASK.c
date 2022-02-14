
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* anEdge; } ;
struct TYPE_4__ {struct TYPE_4__* Lnext; } ;
typedef TYPE_1__ TESShalfEdge ;
typedef TYPE_2__ TESSface ;



__attribute__((used)) static int FUNC_0( TESSface *VAR_0 )
{
 TESShalfEdge *VAR_1 = VAR_0->anEdge;
 int VAR_2 = 0;
 do
 {
  VAR_2++;
  VAR_1 = VAR_1->Lnext;
 }
 while (VAR_1 != VAR_0->anEdge);
 return VAR_2;
}
