
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {int dev; int owner; } ;
struct device {int dummy; } ;


 struct pcmcia_socket* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

struct pcmcia_socket * FUNC_4(struct pcmcia_socket *VAR_0)
{
 struct device *VAR_1 = FUNC_1(&VAR_0->dev);
 if (!VAR_1)
  return ((void*)0);
 VAR_0 = FUNC_0(VAR_1);
 if (!FUNC_3(VAR_0->owner)) {
  FUNC_2(&VAR_0->dev);
  return ((void*)0);
 }
 return (VAR_0);
}
