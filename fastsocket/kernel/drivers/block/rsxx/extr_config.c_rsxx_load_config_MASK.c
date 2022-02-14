
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_9__ {scalar_t__ mode; scalar_t__ count; scalar_t__ latency; } ;
struct TYPE_10__ {scalar_t__ block_size; scalar_t__ stripe_size; scalar_t__ vendor_id; scalar_t__ cache_order; TYPE_1__ intr_coal; } ;
struct TYPE_12__ {scalar_t__ version; scalar_t__ crc; } ;
struct TYPE_11__ {TYPE_2__ data; TYPE_5__ hdr; } ;
struct rsxx_cardinfo {int config_valid; TYPE_3__ config; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct rsxx_cardinfo*,int ,int,TYPE_3__*,int) ;
 int FUNC_10 (struct rsxx_cardinfo*) ;

int FUNC_11(struct rsxx_cardinfo *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_9(VAR_4, VAR_0, sizeof(VAR_4->config),
    &VAR_4->config, 1);
 if (VAR_5) {
  FUNC_6(FUNC_0(VAR_4),
   "Failed reading card config.\n");
  return VAR_5;
 }

 FUNC_4(&VAR_4->config.hdr);

 if (VAR_4->config.hdr.version == VAR_3) {







  FUNC_3(&VAR_4->config);


  VAR_6 = FUNC_1(&VAR_4->config);
  if (VAR_6 != VAR_4->config.hdr.crc) {
   FUNC_6(FUNC_0(VAR_4),
    "Config corruption detected!\n");
   FUNC_7(FUNC_0(VAR_4),
    "CRC (sb x%08x is x%08x)\n",
    VAR_4->config.hdr.crc, VAR_6);
   return -VAR_2;
  }


  FUNC_2(&VAR_4->config);

 } else if (VAR_4->config.hdr.version != 0) {
  FUNC_6(FUNC_0(VAR_4),
   "Invalid config version %d.\n",
   VAR_4->config.hdr.version);




  return -VAR_1;
 } else {
  FUNC_7(FUNC_0(VAR_4),
   "Initializing card configuration.\n");
  FUNC_8(&VAR_4->config);
  VAR_5 = FUNC_10(VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 VAR_4->config_valid = 1;

 FUNC_5(FUNC_0(VAR_4), "version:     x%08x\n",
  VAR_4->config.hdr.version);
 FUNC_5(FUNC_0(VAR_4), "crc:         x%08x\n",
  VAR_4->config.hdr.crc);
 FUNC_5(FUNC_0(VAR_4), "block_size:  x%08x\n",
  VAR_4->config.data.block_size);
 FUNC_5(FUNC_0(VAR_4), "stripe_size: x%08x\n",
  VAR_4->config.data.stripe_size);
 FUNC_5(FUNC_0(VAR_4), "vendor_id:   x%08x\n",
  VAR_4->config.data.vendor_id);
 FUNC_5(FUNC_0(VAR_4), "cache_order: x%08x\n",
  VAR_4->config.data.cache_order);
 FUNC_5(FUNC_0(VAR_4), "mode:        x%08x\n",
  VAR_4->config.data.intr_coal.mode);
 FUNC_5(FUNC_0(VAR_4), "count:       x%08x\n",
  VAR_4->config.data.intr_coal.count);
 FUNC_5(FUNC_0(VAR_4), "latency:     x%08x\n",
   VAR_4->config.data.intr_coal.latency);

 return 0;
}
