
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct se_device {int dummy; } ;
struct iblock_dev {unsigned long ibd_udev_path; unsigned long ibd_readonly; int ibd_flags; int ibd_bd; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iblock_dev* FUNC_0 (struct se_device*) ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (unsigned long,int *,int ) ;
 int FUNC_5 (char*,int ,int *) ;
 int FUNC_6 (char*,unsigned long) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,unsigned long*) ;
 char* FUNC_9 (char**,char*) ;
 int VAR_7 ;

__attribute__((used)) static ssize_t FUNC_10(struct se_device *VAR_8,
  const char *VAR_9, ssize_t VAR_10)
{
 struct iblock_dev *VAR_11 = FUNC_0(VAR_8);
 char *VAR_12, *VAR_13, *VAR_14, *VAR_15;
 substring_t VAR_16[VAR_5];
 int VAR_17 = 0, VAR_18;
 unsigned long VAR_19;

 VAR_15 = FUNC_2(VAR_9, VAR_3);
 if (!VAR_15)
  return -VAR_2;

 VAR_12 = VAR_15;

 while ((VAR_13 = FUNC_9(&VAR_15, ",\n")) != ((void*)0)) {
  if (!*VAR_13)
   continue;

  VAR_18 = FUNC_5(VAR_13, VAR_7, VAR_16);
  switch (VAR_18) {
  case 128:
   if (VAR_11->ibd_bd) {
    FUNC_7("Unable to set udev_path= while"
     " ib_dev->ibd_bd exists\n");
    VAR_17 = -VAR_0;
    goto out;
   }
   if (FUNC_4(VAR_11->ibd_udev_path, &VAR_16[0],
    VAR_6) == 0) {
    VAR_17 = -VAR_1;
    break;
   }
   FUNC_6("IBLOCK: Referencing UDEV path: %s\n",
     VAR_11->ibd_udev_path);
   VAR_11->ibd_flags |= VAR_4;
   break;
  case 129:
   VAR_14 = FUNC_3(&VAR_16[0]);
   if (!VAR_14) {
    VAR_17 = -VAR_2;
    break;
   }
   VAR_17 = FUNC_8(VAR_14, 0, &VAR_19);
   FUNC_1(VAR_14);
   if (VAR_17 < 0) {
    FUNC_7("strict_strtoul() failed for"
      " readonly=\n");
    goto out;
   }
   VAR_11->ibd_readonly = VAR_19;
   FUNC_6("IBLOCK: readonly: %d\n", VAR_11->ibd_readonly);
   break;
  case 130:
   break;
  default:
   break;
  }
 }

out:
 FUNC_1(VAR_12);
 return (!VAR_17) ? VAR_10 : VAR_17;
}
