
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct amd64_pvt {int F2; } ;


 int FUNC_0 (int ,int,int *,char const*) ;
 int FUNC_1 (struct amd64_pvt*,int) ;

__attribute__((used)) static int FUNC_2(struct amd64_pvt *VAR_0, int VAR_1, u32 *VAR_2,
     const char *VAR_3)
{
 u8 VAR_4 = 0;

 if (VAR_1 >= 0x140 && VAR_1 <= 0x1a0) {
  VAR_4 = 1;
  VAR_1 -= 0x100;
 }

 FUNC_1(VAR_0, VAR_4);

 return FUNC_0(VAR_0->F2, VAR_1, VAR_2, VAR_3);
}
