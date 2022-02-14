
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amd64_pvt {int F2; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int *,char const*) ;

__attribute__((used)) static int FUNC_1(struct amd64_pvt *VAR_1, int VAR_2, u32 *VAR_3,
          const char *VAR_4)
{
 if (VAR_2 >= 0x100)
  return -VAR_0;

 return FUNC_0(VAR_1->F2, VAR_2, VAR_3, VAR_4);
}
