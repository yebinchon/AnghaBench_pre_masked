
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static inline char *FUNC_0(void)
{
 if (VAR_0 == 0)
  return "(dma disabled)";
 else if (VAR_0 == 2)
  return "(dma IN and OUT)";
 else
  return "(dma IN)";
}
