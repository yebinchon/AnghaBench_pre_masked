
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hpsb_host_driver {int dummy; } ;
struct device {int * class; struct device* parent; } ;
struct TYPE_3__ {scalar_t__ speed_map; scalar_t__ topology_map; scalar_t__* gen_timestamp; int rom; } ;
struct TYPE_4__ {unsigned long data; int function; } ;
struct hpsb_host {int timeout_interval; int id; struct device device; struct device host_dev; TYPE_1__ csr; int * speed_map; scalar_t__ topology_map; TYPE_2__ timeout; int delayed_reset; int generation; int addr_space; int pending_packets; struct hpsb_host_driver* driver; struct hpsb_host* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,struct hpsb_host*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*) ;
 scalar_t__ FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (struct hpsb_host*) ;
 struct hpsb_host* FUNC_11 (int,int ) ;
 int FUNC_12 (struct device*,int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_15 (int*,int ) ;
 int FUNC_16 (struct device*,int ) ;

struct hpsb_host *FUNC_17(struct hpsb_host_driver *VAR_11, size_t VAR_12,
      struct device *VAR_13)
{
 struct hpsb_host *VAR_14;
 int VAR_15;
 int VAR_16 = 0;

 VAR_14 = FUNC_11(sizeof(*VAR_14) + VAR_12, VAR_1);
 if (!VAR_14)
  return ((void*)0);

 VAR_14->csr.rom = FUNC_3(&VAR_5, VAR_0, VAR_14);
 if (!VAR_14->csr.rom)
  goto fail;

 VAR_14->hostdata = VAR_14 + 1;
 VAR_14->driver = VAR_11;

 FUNC_1(&VAR_14->pending_packets);
 FUNC_1(&VAR_14->addr_space);

 for (VAR_15 = 2; VAR_15 < 16; VAR_15++)
  VAR_14->csr.gen_timestamp[VAR_15] = VAR_9 - 60 * VAR_2;

 FUNC_2(&VAR_14->generation, 0);

 FUNC_0(&VAR_14->delayed_reset, VAR_6);

 FUNC_9(&VAR_14->timeout);
 VAR_14->timeout.data = (unsigned long) VAR_14;
 VAR_14->timeout.function = VAR_3;
 VAR_14->timeout_interval = VAR_2 / 20;

 VAR_14->topology_map = VAR_14->csr.topology_map + 3;
 VAR_14->speed_map = (u8 *)(VAR_14->csr.speed_map + 2);

 FUNC_13(&VAR_7);
 while (FUNC_15(&VAR_16, VAR_4))
  VAR_16++;
 FUNC_14(&VAR_7);
 VAR_14->id = VAR_16;

 FUNC_12(&VAR_14->device, &VAR_10, sizeof(VAR_14->device));
 VAR_14->device.parent = VAR_13;
 FUNC_16(&VAR_14->device, FUNC_5(VAR_13));
 FUNC_4(&VAR_14->device, "fw-host%d", VAR_14->id);

 VAR_14->host_dev.parent = &VAR_14->device;
 VAR_14->host_dev.class = &VAR_8;
 FUNC_4(&VAR_14->host_dev, "fw-host%d", VAR_14->id);

 if (FUNC_6(&VAR_14->device))
  goto fail;
 if (FUNC_6(&VAR_14->host_dev)) {
  FUNC_7(&VAR_14->device);
  goto fail;
 }
 FUNC_8(&VAR_14->device);

 return VAR_14;

fail:
 FUNC_10(VAR_14);
 return ((void*)0);
}
