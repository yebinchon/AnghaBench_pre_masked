
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfs_extent {scalar_t__ count; scalar_t__ block; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct hfs_extent *VAR_0)
{
 int VAR_1;

 VAR_0 += 2;
 for (VAR_1 = 0; VAR_1 < 2; VAR_0--, VAR_1++)
  if (VAR_0->count)
   break;
 return FUNC_0(VAR_0->block) + FUNC_0(VAR_0->count);
}
