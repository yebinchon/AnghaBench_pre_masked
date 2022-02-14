
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (unsigned char*) ;

__attribute__((used)) static void FUNC_2(unsigned char * VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_4 = VAR_0[0];
 switch(VAR_4) {
 case 128:
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3 < 10) {
   FUNC_0("short opcode=0x%x command, len=%d "
          "ext_len=%d", VAR_4, VAR_3, VAR_1);
   break;
  }
  VAR_2 = (VAR_0[8] << 8) + VAR_0[9];
  FUNC_0("cdb[0]=0x%x, sa=0x%x", VAR_4, VAR_2);
  if (VAR_3 != VAR_1)
   FUNC_0(", in_cdb_len=%d, ext_len=%d", VAR_3, VAR_1);
  break;
 case 134:
 case 133:
 case 132:
 case 130:
 case 131:
 case 129:
  VAR_2 = VAR_0[1] & 0x1f;
  FUNC_0("cdb[0]=0x%x, sa=0x%x", VAR_4, VAR_2);
  break;
 default:
  if (VAR_4 < 0xc0)
   FUNC_0("cdb[0]=0x%x", VAR_4);
  else
   FUNC_0("cdb[0]=0x%x (vendor)", VAR_4);
  break;
 }
}
