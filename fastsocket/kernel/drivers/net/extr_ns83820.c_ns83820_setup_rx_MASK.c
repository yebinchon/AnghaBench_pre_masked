
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idle; int phy_descs; int up; int lock; scalar_t__ next_empty; int descs; int next_rx_desc; scalar_t__ next_rx; } ;
struct ns83820 {int IMR_cache; TYPE_1__ rx_info; int misc_lock; scalar_t__ base; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 struct ns83820* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (struct ns83820*,unsigned int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_16)
{
 struct ns83820 *VAR_17 = FUNC_0(VAR_16);
 unsigned VAR_18;
 int VAR_19;

 FUNC_2("ns83820_setup_rx(%p)\n", VAR_16);

 VAR_17->rx_info.idle = 1;
 VAR_17->rx_info.next_rx = 0;
 VAR_17->rx_info.next_rx_desc = VAR_17->rx_info.descs;
 VAR_17->rx_info.next_empty = 0;

 for (VAR_18=0; VAR_18<VAR_12; VAR_18++)
  FUNC_1(VAR_17, VAR_18);

 FUNC_9(0, VAR_17->base + VAR_15);
 FUNC_9(VAR_17->rx_info.phy_descs, VAR_17->base + VAR_14);

 VAR_19 = FUNC_5(VAR_16, VAR_1);
 if (!VAR_19) {
  FUNC_2("starting receiver\n");

  FUNC_6(&VAR_17->rx_info.lock);

  FUNC_9(0x0001, VAR_17->base + VAR_0);
  FUNC_9(0, VAR_17->base + VAR_13);
  FUNC_9(0x7fc00000, VAR_17->base + VAR_13);
  FUNC_9(0xffc00000, VAR_17->base + VAR_13);

  VAR_17->rx_info.up = 1;

  FUNC_4(VAR_16);


  FUNC_6(&VAR_17->misc_lock);
  VAR_17->IMR_cache |= VAR_4;
  VAR_17->IMR_cache |= VAR_8;


  VAR_17->IMR_cache |= VAR_7;
  VAR_17->IMR_cache |= VAR_9;
  VAR_17->IMR_cache |= VAR_5;
  VAR_17->IMR_cache |= VAR_6;
  VAR_17->IMR_cache |= VAR_10;
  VAR_17->IMR_cache |= VAR_11;

  FUNC_9(VAR_17->IMR_cache, VAR_17->base + VAR_3);
  FUNC_9(1, VAR_17->base + VAR_2);
  FUNC_7(&VAR_17->misc_lock);

  FUNC_3(VAR_16);

  FUNC_8(&VAR_17->rx_info.lock);
 }
 return VAR_19;
}
