
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_channel {int dummy; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nouveau_channel*,int ) ;
 int FUNC_2 (struct nouveau_channel*,int) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_channel *VAR_3, u32 VAR_4)
{
 int VAR_5 = FUNC_2(VAR_3, 6);
 if (VAR_5 == 0) {
  FUNC_0(VAR_3, VAR_2, 0x0000, 1);
  FUNC_1 (VAR_3, VAR_4);
  FUNC_0(VAR_3, VAR_2, 0x0180, 3);
  FUNC_1 (VAR_3, VAR_1);
  FUNC_1 (VAR_3, VAR_0);
  FUNC_1 (VAR_3, VAR_0);
 }

 return VAR_5;
}
