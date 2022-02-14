
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct local_info_t* priv; } ;
struct local_info_t {scalar_t__ stop; } ;



__attribute__((used)) static int FUNC_0(struct pcmcia_device *VAR_0)
{
 struct local_info_t *VAR_1 = VAR_0->priv;

 VAR_1->stop = 0;

 return 0;
}
