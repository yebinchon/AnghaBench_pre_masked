
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_device_info {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cdrom_device_info*) ;
 int FUNC_2 (struct cdrom_device_info*) ;
 int FUNC_3 (struct cdrom_device_info*,int*) ;
 int FUNC_4 (struct cdrom_device_info*,int*) ;
 int FUNC_5 (struct cdrom_device_info*) ;
 int FUNC_6 (struct cdrom_device_info*) ;
 int FUNC_7 (struct cdrom_device_info*) ;

__attribute__((used)) static int FUNC_8(struct cdrom_device_info *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 int VAR_13 = 1;

 VAR_10 = 0;
 if (!FUNC_3(VAR_9, &VAR_11))
  VAR_10 = 1;

 if (FUNC_0(VAR_5))
  VAR_12 = 1;
 else
  (void) FUNC_4(VAR_9, &VAR_12);

 if (VAR_10)
  VAR_9->mask &= ~VAR_6;
 else
  VAR_9->mask |= VAR_6;

 if (VAR_11)
  VAR_9->mask &= ~VAR_7;
 else
  VAR_9->mask |= VAR_7;

 if (VAR_12)
  VAR_9->mask &= ~VAR_8;
 else
  VAR_9->mask |= VAR_8;

 if (FUNC_0(VAR_7))
  VAR_13 = FUNC_5(VAR_9);
 else if (FUNC_0(VAR_4))
  VAR_13 = FUNC_1(VAR_9);
  else if (FUNC_0(VAR_8) &&
    !FUNC_0(VAR_0|VAR_1|VAR_2|VAR_3|VAR_6|VAR_5))
   VAR_13 = FUNC_6(VAR_9);
 else if (FUNC_0(VAR_5))
  VAR_13 = FUNC_7(VAR_9);
 else if (!FUNC_2(VAR_9))
  VAR_13 = 0;

 return VAR_13;
}
