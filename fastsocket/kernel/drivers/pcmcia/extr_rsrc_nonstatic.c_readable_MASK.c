
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_2__ {struct resource* res; } ;
struct pcmcia_socket {TYPE_1__ cis_mem; int * cis_virt; int map_size; } ;


 int FUNC_0 (struct pcmcia_socket*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcmcia_socket*,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_socket *VAR_0, struct resource *VAR_1,
      unsigned int *VAR_2)
{
 int VAR_3 = -1;

 VAR_0->cis_mem.res = VAR_1;
 VAR_0->cis_virt = FUNC_1(VAR_1->start, VAR_0->map_size);
 if (VAR_0->cis_virt) {
  VAR_3 = FUNC_3(VAR_0, VAR_2);

  FUNC_2(VAR_0->cis_virt);
  VAR_0->cis_virt = ((void*)0);
  FUNC_0(VAR_0);
 }
 VAR_0->cis_mem.res = ((void*)0);
 if ((VAR_3 != 0) || (*VAR_2 == 0))
  return 0;
 return 1;
}
