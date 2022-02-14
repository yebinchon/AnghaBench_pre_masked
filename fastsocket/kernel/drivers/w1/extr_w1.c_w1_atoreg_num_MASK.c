
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct w1_reg_num {unsigned int family; unsigned long long id; int crc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,char const*) ;
 int FUNC_2 (struct device*,char*,unsigned int,unsigned long long,int ) ;
 int FUNC_3 (char const*,char*,unsigned int*,unsigned long long*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1, const char *VAR_2, size_t VAR_3,
 struct w1_reg_num *VAR_4)
{
 unsigned int VAR_5;
 unsigned long long VAR_6;
 int VAR_7;
 u64 VAR_8;






 const char *VAR_9 = "bad slave string format, expecting "
  "ff-dddddddddddd\n";

 if (VAR_2[2] != '-') {
  FUNC_1(VAR_1, "%s", VAR_9);
  return -VAR_0;
 }
 VAR_7 = FUNC_3(VAR_2, "%02x-%012llx", &VAR_5, &VAR_6);
 if (VAR_7 != 2) {
  FUNC_1(VAR_1, "%s", VAR_9);
  return -VAR_0;
 }
 VAR_4->family = VAR_5;
 VAR_4->id = VAR_6;

 VAR_8 = FUNC_0(*(u64 *)VAR_4);
 VAR_4->crc = FUNC_4((u8 *)&VAR_8, 7);






 return 0;
}
