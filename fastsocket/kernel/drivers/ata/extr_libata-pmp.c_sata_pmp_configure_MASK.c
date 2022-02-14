
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ata_port {int flags; } ;
struct ata_device {int* gscr; int flags; TYPE_1__* link; } ;
struct TYPE_2__ {struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct ata_device*,int ,char*,...) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 unsigned int FUNC_6 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ata_device *VAR_12, int VAR_13)
{
 struct ata_port *VAR_14 = VAR_12->link->ap;
 u32 *VAR_15 = VAR_12->gscr;
 unsigned int VAR_16 = 0;
 const char *VAR_17;
 int VAR_18, VAR_19;

 VAR_18 = FUNC_2(VAR_15);

 if (VAR_18 <= 0 || VAR_18 > VAR_10) {
  VAR_19 = -VAR_2;
  VAR_17 = "invalid nr_ports";
  goto fail;
 }

 if ((VAR_14->flags & VAR_1) &&
     (VAR_15[VAR_8] & VAR_6))
  VAR_12->flags |= VAR_0;


 VAR_16 = FUNC_6(VAR_12->link, VAR_7,
      VAR_11);
 if (VAR_16) {
  VAR_19 = -VAR_3;
  VAR_17 = "failed to write GSCR_ERROR_EN";
  goto fail;
 }

 if (VAR_13) {
  FUNC_0(VAR_12, VAR_5, "Port Multiplier %s, "
          "0x%04x:0x%04x r%d, %d ports, feat 0x%x/0x%x\n",
          FUNC_5(VAR_15),
          FUNC_4(VAR_15),
          FUNC_1(VAR_15),
          FUNC_3(VAR_15),
          VAR_18, VAR_15[VAR_9],
          VAR_15[VAR_8]);

  if (!(VAR_12->flags & VAR_0))
   FUNC_0(VAR_12, VAR_5,
    "Asynchronous notification not supported, "
    "hotplug won't\n         work on fan-out "
    "ports. Use warm-plug instead.\n");
 }

 return 0;

 fail:
 FUNC_0(VAR_12, VAR_4,
         "failed to configure Port Multiplier (%s, Emask=0x%x)\n",
         VAR_17, VAR_16);
 return VAR_19;
}
