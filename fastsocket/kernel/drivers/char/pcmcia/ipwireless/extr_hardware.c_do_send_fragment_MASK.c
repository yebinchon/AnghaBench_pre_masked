
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_hardware {unsigned int ll_mtu; scalar_t__ hw_version; int lock; TYPE_1__* memory_info_regs; scalar_t__ base_port; scalar_t__ tx_ready; } ;
typedef unsigned short __le16 ;
struct TYPE_2__ {int memreg_rx; } ;


 int FUNC_0 (int) ;
 unsigned short VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned short FUNC_1 (unsigned short) ;
 int FUNC_2 (char*,unsigned char*,unsigned int) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (unsigned short,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct ipw_hardware *VAR_7, unsigned char *VAR_8,
       unsigned VAR_9)
{
 unsigned VAR_10;
 unsigned long VAR_11;

 FUNC_7();
 FUNC_0(VAR_9 > VAR_7->ll_mtu);

 if (VAR_6)
  FUNC_2("send", VAR_8, VAR_9);

 FUNC_5(&VAR_7->lock, VAR_11);

 VAR_7->tx_ready = 0;
 FUNC_8(VAR_8);

 if (VAR_7->hw_version == VAR_1) {
  FUNC_4((unsigned short) VAR_9, VAR_7->base_port + VAR_4);

  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10 += 2) {
   unsigned short VAR_12 = VAR_8[VAR_10];
   __le16 VAR_13;

   if (VAR_10 + 1 < VAR_9)
    VAR_12 |= VAR_8[VAR_10 + 1] << 8;
   VAR_13 = FUNC_1(VAR_12);
   FUNC_4(VAR_13, VAR_7->base_port + VAR_4);
  }

  FUNC_4(VAR_0, VAR_7->base_port + VAR_3);
 } else if (VAR_7->hw_version == VAR_2) {
  FUNC_4((unsigned short) VAR_9, VAR_7->base_port);

  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10 += 2) {
   unsigned short VAR_14 = VAR_8[VAR_10];
   __le16 VAR_15;

   if (VAR_10 + 1 < VAR_9)
    VAR_14 |= VAR_8[VAR_10 + 1] << 8;
   VAR_15 = FUNC_1(VAR_14);
   FUNC_4(VAR_15, VAR_7->base_port);
  }
  while ((VAR_10 & 3) != 2) {
   FUNC_4((unsigned short) 0xDEAD, VAR_7->base_port);
   VAR_10 += 2;
  }
  FUNC_9(VAR_5, &VAR_7->memory_info_regs->memreg_rx);
 }

 FUNC_6(&VAR_7->lock, VAR_11);

 FUNC_3(VAR_9);
}
