
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm5974 {int udev; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ,char*,int,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct bcm5974 *VAR_13, bool VAR_14)
{
 char *VAR_15 = FUNC_3(8, VAR_8);
 int VAR_16 = 0, VAR_17;

 if (!VAR_15) {
  FUNC_1("bcm5974: out of memory");
  VAR_16 = -VAR_7;
  goto out;
 }


 VAR_17 = FUNC_4(VAR_13->udev, FUNC_5(VAR_13->udev, 0),
   VAR_1,
   VAR_9 | VAR_12 | VAR_11,
   VAR_3,
   VAR_2, VAR_15, 8, 5000);

 if (VAR_17 != 8) {
  FUNC_1("bcm5974: could not read from device");
  VAR_16 = -VAR_6;
  goto out;
 }


 VAR_15[0] = VAR_14 ?
  VAR_4 :
  VAR_0;


 VAR_17 = FUNC_4(VAR_13->udev, FUNC_6(VAR_13->udev, 0),
   VAR_5,
   VAR_10 | VAR_12 | VAR_11,
   VAR_3,
   VAR_2, VAR_15, 8, 5000);

 if (VAR_17 != 8) {
  FUNC_1("bcm5974: could not write to device");
  VAR_16 = -VAR_6;
  goto out;
 }

 FUNC_0(2, "bcm5974: switched to %s mode.\n",
  VAR_14 ? "wellspring" : "normal");

 out:
 FUNC_2(VAR_15);
 return VAR_16;
}
