
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3 (unsigned char *VAR_0)
{
 int VAR_1,VAR_2;

 FUNC_1(VAR_0[0]);

 if ((VAR_0[0] >> 5) == 6 ||
     (VAR_0[0] >> 5) == 7 ) {
  VAR_2 = 12;
 } else {
  VAR_2 = FUNC_0(VAR_0[0]);
 }

 for ( VAR_1 = 1; VAR_1 < VAR_2; ++VAR_1) {
  FUNC_2("%02x ", VAR_0[VAR_1]);
 }

 switch (VAR_2) {
 case 6:
  FUNC_2("LBA=%d len=%d",
         (((unsigned int)VAR_0[1] & 0x0f) << 16) |
         ( (unsigned int)VAR_0[2] << 8) |
         ( (unsigned int)VAR_0[3] ),
         (unsigned int)VAR_0[4]
   );
  break;
 case 10:
  FUNC_2("LBA=%d len=%d",
         ((unsigned int)VAR_0[2] << 24) |
         ((unsigned int)VAR_0[3] << 16) |
         ((unsigned int)VAR_0[4] << 8) |
         ((unsigned int)VAR_0[5] ),
         ((unsigned int)VAR_0[7] << 8) |
         ((unsigned int)VAR_0[8] )
         );
  break;
 case 12:
  FUNC_2("LBA=%d len=%d",
         ((unsigned int)VAR_0[2] << 24) |
         ((unsigned int)VAR_0[3] << 16) |
         ((unsigned int)VAR_0[4] << 8) |
         ((unsigned int)VAR_0[5] ),
         ((unsigned int)VAR_0[6] << 24) |
         ((unsigned int)VAR_0[7] << 16) |
         ((unsigned int)VAR_0[8] << 8) |
         ((unsigned int)VAR_0[9] )
         );
  break;
 default:
  break;
 }
 FUNC_2("\n");
}
