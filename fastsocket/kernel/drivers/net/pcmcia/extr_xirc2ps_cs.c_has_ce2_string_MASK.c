
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {scalar_t__* prod_id; } ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_1(struct pcmcia_device * VAR_0)
{
 if (VAR_0->prod_id[2] && FUNC_0(VAR_0->prod_id[2], "CE2"))
  return 1;
 return 0;
}
