
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iTCO_version; int io_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 TYPE_1__ VAR_4 ;
 unsigned char FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned char,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(int VAR_5)
{
 unsigned int VAR_6;
 unsigned char VAR_7;
 unsigned int VAR_8;

 VAR_8 = FUNC_5(VAR_5);


 if (VAR_4.iTCO_version == 1)
  VAR_8 /= 2;



 if (VAR_8 < 0x04)
  return -VAR_0;
 if (((VAR_4.iTCO_version == 2) && (VAR_8 > 0x3ff)) ||
     ((VAR_4.iTCO_version == 1) && (VAR_8 > 0x03f)))
  return -VAR_0;

 FUNC_0(VAR_8);


 if (VAR_4.iTCO_version == 2) {
  FUNC_6(&VAR_4.io_lock);
  VAR_6 = FUNC_2(VAR_2);
  VAR_6 &= 0xfc00;
  VAR_6 |= VAR_8;
  FUNC_4(VAR_6, VAR_2);
  VAR_6 = FUNC_2(VAR_2);
  FUNC_7(&VAR_4.io_lock);

  if ((VAR_6 & 0x3ff) != VAR_8)
   return -VAR_0;
 } else if (VAR_4.iTCO_version == 1) {
  FUNC_6(&VAR_4.io_lock);
  VAR_7 = FUNC_1(VAR_1);
  VAR_7 &= 0xc0;
  VAR_7 |= (VAR_8 & 0xff);
  FUNC_3(VAR_7, VAR_1);
  VAR_7 = FUNC_1(VAR_1);
  FUNC_7(&VAR_4.io_lock);

  if ((VAR_7 & 0x3f) != VAR_8)
   return -VAR_0;
 }

 VAR_3 = VAR_5;
 return 0;
}
