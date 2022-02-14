
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfs_extent {int count; int block; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct hfs_extent *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, "   ");
 for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
  FUNC_1(VAR_0, " %u:%u", FUNC_0(VAR_1[VAR_2].block),
     FUNC_0(VAR_1[VAR_2].count));
 FUNC_1(VAR_0, "\n");
}
