
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef unsigned int u16 ;
struct cafe_camera {int dev_lock; int smbus_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int FUNC_0 (struct cafe_camera*,int ) ;
 int FUNC_1 (struct cafe_camera*,int ,unsigned int) ;
 int FUNC_2 (struct cafe_camera*) ;
 int FUNC_3 (struct cafe_camera*,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct cafe_camera *VAR_13,
  u16 VAR_14, u8 VAR_15, u8 VAR_16)
{
 unsigned int VAR_17;
 unsigned long VAR_18;

 FUNC_5(&VAR_13->dev_lock, VAR_18);
 VAR_17 = VAR_5 | ((VAR_14 << VAR_8) & VAR_7);
 VAR_17 |= VAR_6;



 VAR_17 |= VAR_4;
 FUNC_1(VAR_13, VAR_2, VAR_17);
 (void) FUNC_0(VAR_13, VAR_3);
 VAR_17 = VAR_16 | ((VAR_15 << VAR_10) & VAR_9);
 FUNC_1(VAR_13, VAR_3, VAR_17);
 FUNC_6(&VAR_13->dev_lock, VAR_18);
 FUNC_4(2);
 FUNC_7(VAR_13->smbus_wait, FUNC_2(VAR_13),
   VAR_0);

 FUNC_5(&VAR_13->dev_lock, VAR_18);
 VAR_17 = FUNC_0(VAR_13, VAR_3);
 FUNC_6(&VAR_13->dev_lock, VAR_18);

 if (VAR_17 & VAR_12) {
  FUNC_3(VAR_13, "SMBUS write (%02x/%02x/%02x) timed out\n", VAR_14,
    VAR_15, VAR_16);
  return -VAR_1;
 }
 if (VAR_17 & VAR_11) {
  FUNC_3(VAR_13, "SMBUS write (%02x/%02x/%02x) error\n", VAR_14,
    VAR_15, VAR_16);
  return -VAR_1;
 }
 return 0;
}
