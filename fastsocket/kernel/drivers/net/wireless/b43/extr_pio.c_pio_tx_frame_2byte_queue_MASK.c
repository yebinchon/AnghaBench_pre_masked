
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u16 ;
struct b43_pio_txqueue {int dummy; } ;
struct b43_pio_txpacket {TYPE_1__* skb; struct b43_pio_txqueue* queue; } ;
struct TYPE_2__ {char* data; unsigned int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_pio_txqueue*,int ) ;
 int FUNC_1 (struct b43_pio_txqueue*,int ,int ) ;
 int FUNC_2 (struct b43_pio_txqueue*,int ,char const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct b43_pio_txpacket *VAR_3,
         const u8 *VAR_4, unsigned int VAR_5)
{
 struct b43_pio_txqueue *VAR_6 = VAR_3->queue;
 const char *VAR_7 = VAR_3->skb->data;
 unsigned int VAR_8 = VAR_3->skb->len;
 u16 VAR_9;

 VAR_9 = FUNC_0(VAR_6, VAR_0);
 VAR_9 |= VAR_2;
 VAR_9 &= ~VAR_1;


 VAR_9 = FUNC_2(VAR_6, VAR_9, VAR_4, VAR_5);

 VAR_9 = FUNC_2(VAR_6, VAR_9, VAR_7, VAR_8);

 VAR_9 |= VAR_1;
 FUNC_1(VAR_6, VAR_0, VAR_9);
}
