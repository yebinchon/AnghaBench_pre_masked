
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar9170 {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ar9170*,int,int) ;
 int FUNC_1 (char const*,char*,int*,int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct ar9170 *VAR_3,
 const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = 0, VAR_7 = 22, VAR_8;
 u32 VAR_9, VAR_10;

 if (!VAR_5)
  return 0;

 if (VAR_5 > VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_4, "0x%X 0x%X", &VAR_9, &VAR_10);
 if (VAR_8 != 2) {
  VAR_6 = -VAR_2;
  goto out;
 }

 if (VAR_9 <= 0x100000 || VAR_9 >= 0x280000) {
  VAR_6 = -VAR_1;
  goto out;
 }

 if (VAR_9 & 3) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_9, VAR_10);
 if (VAR_6)
  goto out;

out:
 return VAR_6 ? VAR_6 : VAR_5;
}
