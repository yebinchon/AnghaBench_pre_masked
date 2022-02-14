
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pohmelfs_name {scalar_t__ hash; } ;



__attribute__((used)) static int FUNC_0(struct pohmelfs_name *VAR_0, u32 VAR_1)
{
 if (VAR_0->hash > VAR_1)
  return -1;
 if (VAR_0->hash < VAR_1)
  return 1;

 return 0;
}
