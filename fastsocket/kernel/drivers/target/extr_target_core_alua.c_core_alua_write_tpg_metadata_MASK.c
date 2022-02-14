
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct file* FUNC_1 (char const*,int,int) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,unsigned char*,int ,int ) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(
 const char *VAR_5,
 unsigned char *VAR_6,
 u32 VAR_7)
{
 struct file *VAR_8 = FUNC_1(VAR_5, VAR_3 | VAR_2 | VAR_4, 0600);
 int VAR_9;

 if (FUNC_0(VAR_8)) {
  FUNC_4("filp_open(%s) for ALUA metadata failed\n", VAR_5);
  return -VAR_1;
 }
 VAR_9 = FUNC_3(VAR_8, VAR_6, VAR_7, 0);
 if (VAR_9 < 0)
  FUNC_4("Error writing ALUA metadata file: %s\n", VAR_5);
 FUNC_2(VAR_8);
 return VAR_9 ? -VAR_0 : 0;
}
