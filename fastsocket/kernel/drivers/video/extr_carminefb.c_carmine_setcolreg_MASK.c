
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {scalar_t__ pseudo_palette; } ;
typedef int __be32 ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2,
  unsigned VAR_3, unsigned VAR_4, struct fb_info *VAR_5)
{
 if (VAR_0 >= 16)
  return 1;

 VAR_1 >>= 8;
 VAR_2 >>= 8;
 VAR_3 >>= 8;
 VAR_4 >>= 8;

 ((__be32 *)VAR_5->pseudo_palette)[VAR_0] = FUNC_0(VAR_4 << 24 |
  VAR_1 << 0 | VAR_2 << 8 | VAR_3 << 16);
 return 0;
}
