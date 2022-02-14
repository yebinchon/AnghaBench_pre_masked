
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct pcnet32_access {int (* read_bcr ) (int ,int) ;int (* write_bcr ) (int ,int,int) ;} ;
struct pcnet32_private {int blink_timer; int lock; struct pcnet32_access a; } ;
struct net_device {int base_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1)
{
 struct pcnet32_private *VAR_2 = FUNC_1(VAR_1);
 struct pcnet32_access *VAR_3 = &VAR_2->a;
 ulong VAR_4 = VAR_1->base_addr;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_2(&VAR_2->lock, VAR_5);
 for (VAR_6 = 4; VAR_6 < 8; VAR_6++) {
  VAR_3->write_bcr(VAR_4, VAR_6, VAR_3->read_bcr(VAR_4, VAR_6) ^ 0x4000);
 }
 FUNC_3(&VAR_2->lock, VAR_5);

 FUNC_0(&VAR_2->blink_timer, VAR_0);
}
