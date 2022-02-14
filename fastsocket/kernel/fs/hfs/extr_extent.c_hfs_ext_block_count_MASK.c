
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hfs_extent {int count; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hfs_extent *VAR_0)
{
 int VAR_1;
 u16 VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < 3; VAR_0++, VAR_1++)
  VAR_2 += FUNC_0(VAR_0->count);
 return VAR_2;
}
