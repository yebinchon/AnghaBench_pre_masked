
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_device {int dummy; } ;


 int FUNC_0 (struct se_device*,unsigned char*,int ) ;
 int FUNC_1 (struct se_device*,unsigned char*,int,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct se_device *VAR_0, unsigned char *VAR_1,
  u32 VAR_2)
{
 unsigned char VAR_3[64], *VAR_4;
 u32 VAR_5;
 int VAR_6 = 0;
 int VAR_7;




 if (!VAR_1) {
  FUNC_2(VAR_3, 0, 64);
  VAR_4 = &VAR_3[0];




  VAR_5 = 64;
  VAR_6 = 1;
 } else {
  VAR_4 = VAR_1;
  VAR_5 = VAR_2;
 }

 VAR_7 = FUNC_1(VAR_0, VAR_4, VAR_5,
    VAR_6);
 if (VAR_7 != 0)
  return VAR_7;





 return FUNC_0(VAR_0, VAR_4, 0);
}
