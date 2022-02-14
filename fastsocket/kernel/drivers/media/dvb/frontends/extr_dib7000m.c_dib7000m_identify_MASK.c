
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib7000m_state {int revision; int reg_offs; } ;


 int VAR_0 ;
 int FUNC_0 (struct dib7000m_state*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct dib7000m_state *VAR_1)
{
 u16 VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1, 896)) != 0x01b3) {
  FUNC_1( "wrong Vendor ID (0x%x)",VAR_2);
  return -VAR_0;
 }

 VAR_1->revision = FUNC_0(VAR_1, 897);
 if (VAR_1->revision != 0x4000 &&
  VAR_1->revision != 0x4001 &&
  VAR_1->revision != 0x4002 &&
  VAR_1->revision != 0x4003) {
  FUNC_1( "wrong Device ID (0x%x)",VAR_2);
  return -VAR_0;
 }


 if (VAR_1->revision == 0x4000 && FUNC_0(VAR_1, 769) == 0x4000) {
  FUNC_1( "this driver does not work with DiB7000PC");
  return -VAR_0;
 }

 switch (VAR_1->revision) {
  case 0x4000: FUNC_1( "found DiB7000MA/PA/MB/PB"); break;
  case 0x4001: VAR_1->reg_offs = 1; FUNC_1( "found DiB7000HC"); break;
  case 0x4002: VAR_1->reg_offs = 1; FUNC_1( "found DiB7000MC"); break;
  case 0x4003: VAR_1->reg_offs = 1; FUNC_1( "found DiB9000"); break;
 }

 return 0;
}
