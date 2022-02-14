
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct toshiba_acpi_dev {int mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int ,scalar_t__,int ,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_5, bool VAR_6)
{
 struct toshiba_acpi_dev *VAR_7 = VAR_5;
 u32 VAR_8, VAR_9;
 u32 VAR_10;
 int VAR_11;
 bool VAR_12;

 VAR_10 = (VAR_6 == 0);

 FUNC_2(&VAR_7->mutex);
 if (FUNC_0(&VAR_12) != VAR_1) {
  VAR_11 = -VAR_0;
  goto out;
 }

 if (!VAR_12) {
  VAR_11 = 0;
  goto out;
 }

 FUNC_1(VAR_2, VAR_10, VAR_4, &VAR_8);
 FUNC_1(VAR_2, VAR_10, VAR_3, &VAR_9);

 if (VAR_8 != VAR_1 || VAR_9 != VAR_1)
  VAR_11 = -VAR_0;
 else
  VAR_11 = 0;
 out:
 FUNC_3(&VAR_7->mutex);
 return VAR_11;
}
