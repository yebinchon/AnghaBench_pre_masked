
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mtd_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int const*,int *,int) ;
 int FUNC_2 (struct mtd_info*,int *,int) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_2, const u_char *VAR_3, int VAR_4)
{
 FUNC_2(VAR_2, (u_char *)&VAR_1[0], VAR_4);

 if (!FUNC_1(VAR_3, &VAR_1[0], VAR_4)) {
  FUNC_0("verify_buf: the buffer is OK\n");
  return 0;
 } else {
  FUNC_0("verify_buf: the buffer is wrong\n");
  return -VAR_0;
 }
}
