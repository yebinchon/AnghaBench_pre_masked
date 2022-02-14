
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct em28xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct em28xx*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct em28xx *VAR_4, u8 VAR_5, u8 VAR_6,
      u8 VAR_7, u8 VAR_8)
{
 FUNC_0("em28xx Scale: (%d,%d)-(%d,%d)\n",
   VAR_5, VAR_7, VAR_6, VAR_8);

 FUNC_1(VAR_4, VAR_0, &VAR_5, 1);
 FUNC_1(VAR_4, VAR_1, &VAR_6, 1);
 FUNC_1(VAR_4, VAR_2, &VAR_7, 1);
 return FUNC_1(VAR_4, VAR_3, &VAR_8, 1);
}
