
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_pio_txqueue {scalar_t__ index; } ;
struct b43_pio_txpacket {int index; } ;



__attribute__((used)) static u16 FUNC_0(struct b43_pio_txqueue *VAR_0,
      struct b43_pio_txpacket *VAR_1)
{
 u16 VAR_2;
 VAR_2 = (((u16)VAR_0->index + 1) << 12);
 VAR_2 |= VAR_1->index;

 return VAR_2;
}
