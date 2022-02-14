
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_resp {int result; } ;
struct domain_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct domain_device*,int*,int ,struct smp_resp*,int ) ;

__attribute__((used)) static int FUNC_3(struct domain_device *VAR_5,
    int VAR_6, struct smp_resp *VAR_7)
{
 int VAR_8;
 u8 *VAR_9;

 VAR_9 = FUNC_0(VAR_0);
 if (!VAR_9)
  return -VAR_2;

 VAR_9[1] = VAR_3;
 VAR_9[9] = VAR_6;

 VAR_8 = FUNC_2(VAR_5, VAR_9, VAR_0,
          VAR_7, VAR_1);
 if (VAR_8)
  goto out;
 else if (VAR_7->result != VAR_4) {
  VAR_8 = VAR_7->result;
  goto out;
 }
out:
 FUNC_1(VAR_9);
 return VAR_8;
}
