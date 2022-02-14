
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct seq_file {int dummy; } ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, u8 * VAR_1, int VAR_2)
{
 int VAR_3;
 switch (VAR_1[0]) {
 case 137:
  FUNC_0(VAR_0, "0x");
  for (VAR_3 = 0; VAR_3 < VAR_1[1]; VAR_3++) {
   FUNC_0(VAR_0, "%02X", VAR_1[2 + VAR_3]);
  }
  break;

 case 138:
  if (VAR_1[1] < ' ') {

   VAR_2 =
       (VAR_2 < VAR_1[1]) ? VAR_2 : VAR_1[1];
   VAR_1[1 + VAR_2] = '\0';


   FUNC_0(VAR_0, "%s", &VAR_1[2]);
  } else {

   for (VAR_3 = 0; VAR_3 < VAR_1[1]; VAR_3++) {
    FUNC_0(VAR_0, "%c", VAR_1[2 + VAR_3]);
   }
  }
  break;

 case 131:
  FUNC_0(VAR_0, "UNICODE Format.  Can't Display\n");
  break;

 case 133:
  FUNC_0(VAR_0,
      "LAN-48 MAC address @ %02X:%02X:%02X:%02X:%02X:%02X",
      VAR_1[2], VAR_1[3],
      VAR_1[4], VAR_1[5], VAR_1[6], VAR_1[7]);
  break;

 case 128:

  FUNC_0(VAR_0, "WAN Access Address");
  break;


 case 132:

  FUNC_0(VAR_0,
      "LAN-64 MAC address @ [?:%02X:%02X:?] %02X:%02X:%02X:%02X:%02X:%02X",
      VAR_1[8], VAR_1[9],
      VAR_1[2], VAR_1[3],
      VAR_1[4], VAR_1[5], VAR_1[6], VAR_1[7]);
  break;

 case 136:
  FUNC_0(VAR_0,
      "DDM: Tid=%03Xh, Rsvd=%04Xh, OrgId=%04Xh",
      *(u16 *) & VAR_1[2],
      *(u16 *) & VAR_1[4], *(u16 *) & VAR_1[6]);
  break;

 case 134:
 case 135:

  FUNC_0(VAR_0,
      "IEEE NodeName(hi,lo)=(%08Xh:%08Xh), PortName(hi,lo)=(%08Xh:%08Xh)\n",
      *(u32 *) & VAR_1[2],
      *(u32 *) & VAR_1[6],
      *(u32 *) & VAR_1[10], *(u32 *) & VAR_1[14]);
  break;

 case 130:
 case 129:
 default:
  FUNC_0(VAR_0, "Unknown data format (0x%02x)", VAR_1[0]);
  break;
 }

 return 0;
}
