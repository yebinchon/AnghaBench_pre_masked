
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; scalar_t__ base_addr; scalar_t__ irq; int name; } ;
struct ifmap {scalar_t__ base_addr; scalar_t__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,...) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3, struct ifmap *VAR_4)
{
 if (VAR_3->flags & VAR_2)
  return -VAR_0;


 if (VAR_4->base_addr != VAR_3->base_addr) {
  FUNC_0("%s: can't change I/O address\n", VAR_3->name);
  return -VAR_1;
 }


 if (VAR_4->irq != VAR_3->irq) {
  FUNC_0("%s: can't change IRQ number %d\n",
         VAR_3->name, VAR_3->irq);
  return -VAR_1;
 }


 return 0;
}
