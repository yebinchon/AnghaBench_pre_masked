
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int (* mdio_write ) (struct net_device*,int,int,int) ;} ;
struct octeon_ethernet {TYPE_1__ mii_info; } ;
struct net_device {int dummy; } ;


 struct net_device** VAR_0 ;
 int FUNC_0 (struct net_device*,int,int) ;
 struct octeon_ethernet* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct seq_file*,char*,int const,...) ;
 int FUNC_3 (struct net_device*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 static const int VAR_3[] = { 0, 1, 2, 3, 9, -1 };
 struct net_device *VAR_4 = VAR_0[0];
 int VAR_5 = 0;

 while (VAR_3[VAR_5] != -1) {


  struct octeon_ethernet *VAR_6 = FUNC_1(VAR_4);

  VAR_6->mii_info.mdio_write(VAR_4, 0x1b, 0x1d,
       0xdc00 | VAR_3[VAR_5]);
  FUNC_2(VAR_1, "\nSwitch Port %d\n", VAR_3[VAR_5]);
  FUNC_2(VAR_1, "InGoodOctets:   %12llu\t"
      "OutOctets:      %12llu\t"
      "64 Octets:      %12llu\n",
      FUNC_0(VAR_4, 0x1b,
           0x00) |
      (FUNC_0(VAR_4, 0x1b, 0x01) << 32),
      FUNC_0(VAR_4, 0x1b,
           0x0E) |
      (FUNC_0(VAR_4, 0x1b, 0x0F) << 32),
      FUNC_0(VAR_4, 0x1b, 0x08));

  FUNC_2(VAR_1, "InBadOctets:    %12llu\t"
      "OutUnicast:     %12llu\t"
      "65-127 Octets:  %12llu\n",
      FUNC_0(VAR_4, 0x1b, 0x02),
      FUNC_0(VAR_4, 0x1b, 0x10),
      FUNC_0(VAR_4, 0x1b, 0x09));

  FUNC_2(VAR_1, "InUnicast:      %12llu\t"
      "OutBroadcasts:  %12llu\t"
      "128-255 Octets: %12llu\n",
      FUNC_0(VAR_4, 0x1b, 0x04),
      FUNC_0(VAR_4, 0x1b, 0x13),
      FUNC_0(VAR_4, 0x1b, 0x0A));

  FUNC_2(VAR_1, "InBroadcasts:   %12llu\t"
      "OutMulticasts:  %12llu\t"
      "256-511 Octets: %12llu\n",
      FUNC_0(VAR_4, 0x1b, 0x06),
      FUNC_0(VAR_4, 0x1b, 0x12),
      FUNC_0(VAR_4, 0x1b, 0x0B));

  FUNC_2(VAR_1, "InMulticasts:   %12llu\t"
      "OutPause:       %12llu\t"
      "512-1023 Octets:%12llu\n",
      FUNC_0(VAR_4, 0x1b, 0x07),
      FUNC_0(VAR_4, 0x1b, 0x15),
      FUNC_0(VAR_4, 0x1b, 0x0C));

  FUNC_2(VAR_1, "InPause:        %12llu\t"
      "Excessive:      %12llu\t"
      "1024-Max Octets:%12llu\n",
      FUNC_0(VAR_4, 0x1b, 0x16),
      FUNC_0(VAR_4, 0x1b, 0x11),
      FUNC_0(VAR_4, 0x1b, 0x0D));

  FUNC_2(VAR_1, "InUndersize:    %12llu\t"
      "Collisions:     %12llu\n",
      FUNC_0(VAR_4, 0x1b, 0x18),
      FUNC_0(VAR_4, 0x1b, 0x1E));

  FUNC_2(VAR_1, "InFragments:    %12llu\t"
      "Deferred:       %12llu\n",
      FUNC_0(VAR_4, 0x1b, 0x19),
      FUNC_0(VAR_4, 0x1b, 0x05));

  FUNC_2(VAR_1, "InOversize:     %12llu\t"
      "Single:         %12llu\n",
      FUNC_0(VAR_4, 0x1b, 0x1A),
      FUNC_0(VAR_4, 0x1b, 0x14));

  FUNC_2(VAR_1, "InJabber:       %12llu\t"
      "Multiple:       %12llu\n",
      FUNC_0(VAR_4, 0x1b, 0x1B),
      FUNC_0(VAR_4, 0x1b, 0x17));

  FUNC_2(VAR_1, "In RxErr:       %12llu\t"
      "OutFCSErr:      %12llu\n",
      FUNC_0(VAR_4, 0x1b, 0x1C),
      FUNC_0(VAR_4, 0x1b, 0x03));

  FUNC_2(VAR_1, "InFCSErr:       %12llu\t"
      "Late:           %12llu\n",
      FUNC_0(VAR_4, 0x1b, 0x1D),
      FUNC_0(VAR_4, 0x1b, 0x1F));
  VAR_5++;
 }
 return 0;
}
