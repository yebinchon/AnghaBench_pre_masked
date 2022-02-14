
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smi_cmd {int command_buffer; int ebx; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (struct smi_cmd*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (char const*,int *,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_5,
     struct device_attribute *VAR_6,
     const char *VAR_7, size_t VAR_8)
{
 struct smi_cmd *VAR_9;
 unsigned long VAR_10 = FUNC_4(VAR_7, ((void*)0), 10);
 ssize_t VAR_11;

 FUNC_2(&VAR_4);

 if (VAR_3 < sizeof(struct smi_cmd)) {
  VAR_11 = -VAR_1;
  goto out;
 }
 VAR_9 = (struct smi_cmd *)VAR_2;

 switch (VAR_10) {
 case 2:

  VAR_11 = FUNC_0(VAR_9);
  if (!VAR_11)
   VAR_11 = VAR_8;
  break;
 case 1:

  VAR_9->ebx = (u32) FUNC_5(VAR_9->command_buffer);
  VAR_11 = FUNC_0(VAR_9);
  if (!VAR_11)
   VAR_11 = VAR_8;
  break;
 case 0:
  FUNC_1(VAR_2, 0, VAR_3);
  VAR_11 = VAR_8;
  break;
 default:
  VAR_11 = -VAR_0;
  break;
 }

out:
 FUNC_3(&VAR_4);
 return VAR_11;
}
