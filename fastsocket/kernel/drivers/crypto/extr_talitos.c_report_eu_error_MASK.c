
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {scalar_t__ reg; } ;
struct talitos_desc {int hdr; } ;
struct device {int dummy; } ;







 int VAR_0 ;





 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (struct device*,char*,int ,int ) ;
 struct talitos_private* FUNC_3 (struct device*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_18, int VAR_19,
       struct talitos_desc *VAR_20)
{
 struct talitos_private *VAR_21 = FUNC_3(VAR_18);
 int VAR_22;

 switch (VAR_20->hdr & VAR_0) {
 case 138:
  FUNC_2(VAR_18, "AFEUISR 0x%08x_%08x\n",
   FUNC_4(VAR_21->reg + VAR_4),
   FUNC_4(VAR_21->reg + VAR_5));
  break;
 case 136:
  FUNC_2(VAR_18, "DEUISR 0x%08x_%08x\n",
   FUNC_4(VAR_21->reg + VAR_8),
   FUNC_4(VAR_21->reg + VAR_9));
  break;
 case 134:
 case 133:
  FUNC_2(VAR_18, "MDEUISR 0x%08x_%08x\n",
   FUNC_4(VAR_21->reg + VAR_12),
   FUNC_4(VAR_21->reg + VAR_13));
  break;
 case 131:
  FUNC_2(VAR_18, "RNGUISR 0x%08x_%08x\n",
   FUNC_4(VAR_21->reg + VAR_16),
   FUNC_4(VAR_21->reg + VAR_17));
  break;
 case 132:
  FUNC_2(VAR_18, "PKEUISR 0x%08x_%08x\n",
   FUNC_4(VAR_21->reg + VAR_14),
   FUNC_4(VAR_21->reg + VAR_15));
  break;
 case 139:
  FUNC_2(VAR_18, "AESUISR 0x%08x_%08x\n",
   FUNC_4(VAR_21->reg + VAR_2),
   FUNC_4(VAR_21->reg + VAR_3));
  break;
 case 137:
  FUNC_2(VAR_18, "CRCUISR 0x%08x_%08x\n",
   FUNC_4(VAR_21->reg + VAR_6),
   FUNC_4(VAR_21->reg + VAR_7));
  break;
 case 135:
  FUNC_2(VAR_18, "KEUISR 0x%08x_%08x\n",
   FUNC_4(VAR_21->reg + VAR_10),
   FUNC_4(VAR_21->reg + VAR_11));
  break;
 }

 switch (VAR_20->hdr & VAR_1) {
 case 129:
 case 128:
  FUNC_2(VAR_18, "MDEUISR 0x%08x_%08x\n",
   FUNC_4(VAR_21->reg + VAR_12),
   FUNC_4(VAR_21->reg + VAR_13));
  break;
 case 130:
  FUNC_2(VAR_18, "CRCUISR 0x%08x_%08x\n",
   FUNC_4(VAR_21->reg + VAR_6),
   FUNC_4(VAR_21->reg + VAR_7));
  break;
 }

 for (VAR_22 = 0; VAR_22 < 8; VAR_22++)
  FUNC_2(VAR_18, "DESCBUF 0x%08x_%08x\n",
   FUNC_4(VAR_21->reg + FUNC_0(VAR_19) + 8*VAR_22),
   FUNC_4(VAR_21->reg + FUNC_1(VAR_19) + 8*VAR_22));
}
