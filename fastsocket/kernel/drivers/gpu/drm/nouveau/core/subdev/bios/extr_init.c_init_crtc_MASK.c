
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvbios_init {scalar_t__ crtc; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline int
FUNC_1(struct nvbios_init *VAR_0)
{
 if (VAR_0->crtc >= 0)
  return VAR_0->crtc;
 FUNC_0("script needs crtc\n");
 return 0;
}
