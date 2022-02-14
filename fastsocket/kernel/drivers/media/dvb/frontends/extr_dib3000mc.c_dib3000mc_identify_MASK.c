
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib3000mc_state {int dev_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib3000mc_state*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct dib3000mc_state *VAR_1)
{
 u16 VAR_2;
 if ((VAR_2 = FUNC_0(VAR_1, 1025)) != 0x01b3) {
  FUNC_1("-E-  DiB3000MC/P: wrong Vendor ID (read=0x%x)\n",VAR_2);
  return -VAR_0;
 }

 VAR_2 = FUNC_0(VAR_1, 1026);
 if (VAR_2 != 0x3001 && VAR_2 != 0x3002) {
  FUNC_1("-E-  DiB3000MC/P: wrong Device ID (%x)\n",VAR_2);
  return -VAR_0;
 }
 VAR_1->dev_id = VAR_2;

 FUNC_1("-I-  found DiB3000MC/P: %x\n",VAR_1->dev_id);

 return 0;
}
