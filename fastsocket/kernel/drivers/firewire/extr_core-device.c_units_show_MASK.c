
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_device {int * config_rom; } ;
struct fw_csr_iterator {scalar_t__ p; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fw_csr_iterator*,int *) ;
 scalar_t__ FUNC_2 (struct fw_csr_iterator*,int*,int*) ;
 struct fw_device* FUNC_3 (struct device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
     struct device_attribute *VAR_5, char *VAR_6)
{
 struct fw_device *VAR_7 = FUNC_3(VAR_4);
 struct fw_csr_iterator VAR_8;
 int VAR_9, VAR_10, VAR_11 = 0;

 FUNC_0(&VAR_3);
 FUNC_1(&VAR_8, &VAR_7->config_rom[5]);
 while (FUNC_2(&VAR_8, &VAR_9, &VAR_10)) {
  if (VAR_9 != (VAR_1 | VAR_0))
   continue;
  VAR_11 += FUNC_4(&VAR_6[VAR_11], VAR_8.p + VAR_10 - 1);
  if (VAR_11 >= VAR_2 - (8 + 1 + 8 + 1))
   break;
 }
 FUNC_5(&VAR_3);

 if (VAR_11)
  VAR_6[VAR_11 - 1] = '\n';

 return VAR_11;
}
