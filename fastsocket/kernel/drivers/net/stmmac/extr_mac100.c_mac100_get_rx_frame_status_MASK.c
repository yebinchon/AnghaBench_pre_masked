
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_extra_stats {int rx_multicast; int rx_mii; int rx_lenght; int rx_crc; int rx_collision; int rx_toolong; int rx_runt; int rx_partial; int rx_desc; } ;
struct net_device_stats {int multicast; int rx_crc_errors; int collisions; int rx_length_errors; } ;
struct TYPE_3__ {scalar_t__ last_descriptor; int error_summary; int descriptor_error; int partial_frame_error; int run_frame; int frame_too_long; int collision; int crc_error; int dribbling; int length_error; int mii_error; scalar_t__ multicast_frame; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct dma_desc {TYPE_2__ des01; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, struct stmmac_extra_stats *VAR_3,
          struct dma_desc *VAR_4)
{
 int VAR_5 = VAR_0;
 struct net_device_stats *VAR_6 = (struct net_device_stats *)VAR_2;

 if (FUNC_1(VAR_4->des01.rx.last_descriptor == 0)) {
  FUNC_0("mac100 Error: Oversized Ethernet "
      "frame spanned multiple buffers\n");
  VAR_6->rx_length_errors++;
  return VAR_1;
 }

 if (FUNC_1(VAR_4->des01.rx.error_summary)) {
  if (FUNC_1(VAR_4->des01.rx.descriptor_error))
   VAR_3->rx_desc++;
  if (FUNC_1(VAR_4->des01.rx.partial_frame_error))
   VAR_3->rx_partial++;
  if (FUNC_1(VAR_4->des01.rx.run_frame))
   VAR_3->rx_runt++;
  if (FUNC_1(VAR_4->des01.rx.frame_too_long))
   VAR_3->rx_toolong++;
  if (FUNC_1(VAR_4->des01.rx.collision)) {
   VAR_3->rx_collision++;
   VAR_6->collisions++;
  }
  if (FUNC_1(VAR_4->des01.rx.crc_error)) {
   VAR_3->rx_crc++;
   VAR_6->rx_crc_errors++;
  }
  VAR_5 = VAR_1;
 }
 if (FUNC_1(VAR_4->des01.rx.dribbling))
  VAR_5 = VAR_1;

 if (FUNC_1(VAR_4->des01.rx.length_error)) {
  VAR_3->rx_lenght++;
  VAR_5 = VAR_1;
 }
 if (FUNC_1(VAR_4->des01.rx.mii_error)) {
  VAR_3->rx_mii++;
  VAR_5 = VAR_1;
 }
 if (VAR_4->des01.rx.multicast_frame) {
  VAR_3->rx_multicast++;
  VAR_6->multicast++;
 }
 return VAR_5;
}
