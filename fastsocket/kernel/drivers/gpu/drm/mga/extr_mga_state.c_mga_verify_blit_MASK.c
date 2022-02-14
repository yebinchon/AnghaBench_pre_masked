
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int drm_mga_private_t ;


 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static int FUNC_1(drm_mga_private_t *VAR_3,
      unsigned int VAR_4, unsigned int VAR_5)
{
 if ((VAR_4 & 0x3) == (VAR_1 | VAR_2) ||
     (VAR_5 & 0x3) == (VAR_1 | VAR_2)) {
  FUNC_0("*** bad blit: src=0x%x dst=0x%x\n", VAR_4, VAR_5);
  return -VAR_0;
 }
 return 0;
}
