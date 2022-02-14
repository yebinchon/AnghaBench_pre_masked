
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_channel {int dummy; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nouveau_channel*,int ) ;
 int FUNC_2 (struct nouveau_channel*,int) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_channel *VAR_2, u32 VAR_3)
{
 int VAR_4 = FUNC_2(VAR_2, 4);
 if (VAR_4 == 0) {
  FUNC_0(VAR_2, VAR_1, 0x0000, 1);
  FUNC_1 (VAR_2, VAR_3);
  FUNC_0(VAR_2, VAR_1, 0x0180, 1);
  FUNC_1 (VAR_2, VAR_0);
 }

 return VAR_4;
}
