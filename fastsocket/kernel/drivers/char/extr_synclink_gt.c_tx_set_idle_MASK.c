
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int idle_mode; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned short FUNC_0 (struct slgt_info*,int ) ;
 int FUNC_1 (struct slgt_info*,int ,unsigned short) ;
 int FUNC_2 (struct slgt_info*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_3(struct slgt_info *VAR_8)
{
 unsigned char VAR_9;
 unsigned short VAR_10;




 VAR_10 = FUNC_0(VAR_8, VAR_5);
 if (VAR_8->idle_mode & VAR_3) {

  VAR_10 = (VAR_10 & ~(VAR_2 + VAR_1)) | VAR_0;

  FUNC_2(VAR_8, VAR_7, (unsigned char)((VAR_8->idle_mode >> 8) & 0xff));
 } else if (!(VAR_10 & VAR_2)) {

  VAR_10 &= ~(VAR_1 + VAR_0);
 }
 FUNC_1(VAR_8, VAR_5, VAR_10);

 if (VAR_8->idle_mode & (VAR_4 | VAR_3)) {

  VAR_9 = (unsigned char)(VAR_8->idle_mode & 0xff);
 } else {

  switch(VAR_8->idle_mode)
  {
  case 130: VAR_9 = 0x7e; break;
  case 131:
  case 132: VAR_9 = 0xaa; break;
  case 128:
  case 129: VAR_9 = 0x00; break;
  default: VAR_9 = 0xff;
  }
 }

 FUNC_2(VAR_8, VAR_6, VAR_9);
}
