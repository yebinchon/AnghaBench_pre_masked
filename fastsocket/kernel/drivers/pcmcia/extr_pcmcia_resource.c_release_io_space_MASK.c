
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcmcia_socket {TYPE_1__* io; } ;
struct TYPE_5__ {unsigned int start; unsigned int end; } ;
struct TYPE_4__ {scalar_t__ InUse; TYPE_2__* res; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct pcmcia_socket *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_1->io[VAR_4].res)
   continue;
  if ((VAR_1->io[VAR_4].res->start <= VAR_2) &&
      (VAR_1->io[VAR_4].res->end >= VAR_2+VAR_3-1)) {
   VAR_1->io[VAR_4].InUse -= VAR_3;

   if (VAR_1->io[VAR_4].InUse == 0) {
    FUNC_1(VAR_1->io[VAR_4].res);
    FUNC_0(VAR_1->io[VAR_4].res);
    VAR_1->io[VAR_4].res = ((void*)0);
   }
  }
 }
}
