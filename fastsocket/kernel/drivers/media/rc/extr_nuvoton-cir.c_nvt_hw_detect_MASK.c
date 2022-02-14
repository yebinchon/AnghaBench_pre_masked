
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvt_dev {int chip_major; int chip_minor; int nvt_lock; int cr_efdr; int cr_efir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct nvt_dev*,int ) ;
 int FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (struct nvt_dev*) ;
 int FUNC_3 (struct nvt_dev*) ;
 int FUNC_4 (int ,char*,int ,int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct nvt_dev *VAR_10)
{
 unsigned long VAR_11;
 u8 VAR_12, VAR_13;
 int VAR_14 = 0;

 FUNC_3(VAR_10);


 VAR_12 = FUNC_0(VAR_10, VAR_3);
 if (VAR_12 == 0xff) {
  VAR_10->cr_efir = VAR_6;
  VAR_10->cr_efdr = VAR_5;
  FUNC_3(VAR_10);
  VAR_12 = FUNC_0(VAR_10, VAR_3);
 }

 VAR_13 = FUNC_0(VAR_10, VAR_4);
 FUNC_1("%s: chip id: 0x%02x 0x%02x", VAR_9, VAR_12, VAR_13);

 if (VAR_12 != VAR_0 ||
     (VAR_13 != VAR_1 && VAR_13 != VAR_2)) {
  FUNC_4(VAR_8, "%s: unsupported chip, id: 0x%02x 0x%02x",
         VAR_9, VAR_12, VAR_13);
  VAR_14 = -VAR_7;
 }

 FUNC_2(VAR_10);

 FUNC_5(&VAR_10->nvt_lock, VAR_11);
 VAR_10->chip_major = VAR_12;
 VAR_10->chip_minor = VAR_13;
 FUNC_6(&VAR_10->nvt_lock, VAR_11);

 return VAR_14;
}
