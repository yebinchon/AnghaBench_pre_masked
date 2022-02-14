
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fb_info {scalar_t__ screen_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_1(struct fb_info *VAR_1)
{
 return FUNC_0(VAR_1->screen_base + VAR_0) >> 24;
}
