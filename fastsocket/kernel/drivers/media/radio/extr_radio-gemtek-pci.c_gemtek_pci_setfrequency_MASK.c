
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct gemtek_pci {int iobase; unsigned long current_frequency; int lock; } ;


 int FUNC_0 (int,int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct gemtek_pci *VAR_0, unsigned long VAR_1)
{
 int VAR_2;
 u32 VAR_3 = VAR_1 / 200 + 856;
 u16 VAR_4 = 0x8000;
 u8 VAR_5;
 u32 VAR_6 = VAR_0->iobase;

 FUNC_3(&VAR_0->lock);
 VAR_0->current_frequency = VAR_1;
 VAR_5 = FUNC_2(0x06, VAR_6);

 VAR_2 = 0;
 do {
  FUNC_1(VAR_6, &VAR_5);
  VAR_2++;
 } while (VAR_2 < 9);

 VAR_2 = 0;
 do {
  FUNC_0(VAR_3 & VAR_4, VAR_6, &VAR_5);
  VAR_4 >>= 1;
  VAR_2++;
 } while (VAR_2 < 16);

 FUNC_5(0x10, VAR_6);
 FUNC_4(&VAR_0->lock);
}
