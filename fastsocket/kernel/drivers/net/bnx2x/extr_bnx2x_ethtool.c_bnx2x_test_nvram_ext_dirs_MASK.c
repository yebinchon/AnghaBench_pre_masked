
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct code_entry {int nvm_start_addr; int code_attribute; } ;
struct bnx2x {int dummy; } ;
typedef int entry ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int,int*,int) ;
 int FUNC_2 (struct bnx2x*,int,int *) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_3, u8 *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7 = VAR_2;
 struct code_entry VAR_8;
 int VAR_9;

 VAR_5 = FUNC_1(VAR_3,
    VAR_7 +
    sizeof(VAR_8) * VAR_0,
    (u32 *)&VAR_8, sizeof(VAR_8));
 if (VAR_5)
  return VAR_5;

 if (!FUNC_0(VAR_8.code_attribute))
  return 0;

 VAR_5 = FUNC_1(VAR_3, VAR_8.nvm_start_addr,
    &VAR_6, sizeof(u32));
 if (VAR_5)
  return VAR_5;

 VAR_7 = VAR_8.nvm_start_addr + 8;

 for (VAR_9 = 0; VAR_9 < VAR_6 && VAR_9 < VAR_1; VAR_9++) {
  VAR_5 = FUNC_2(VAR_3, VAR_7 +
           sizeof(struct code_entry) * VAR_9,
       VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
