
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fs_platform_info {int cp_command; } ;
struct fs_enet_private {struct fs_platform_info* fpi; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct fs_enet_private *VAR_0, u32 VAR_1)
{
 const struct fs_platform_info *VAR_2 = VAR_0->fpi;

 return FUNC_0(VAR_2->cp_command, VAR_1);
}
