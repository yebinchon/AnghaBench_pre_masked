
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gemtek_pci {int mute; int lock; int iobase; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct gemtek_pci *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 FUNC_2(0x1f, VAR_0->iobase);
 VAR_0->mute = 1;
 FUNC_1(&VAR_0->lock);
}
