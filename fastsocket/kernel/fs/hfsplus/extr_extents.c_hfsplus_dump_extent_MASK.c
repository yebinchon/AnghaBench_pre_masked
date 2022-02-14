
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfsplus_extent {int block_count; int start_block; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct hfsplus_extent *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0, "   ");
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  FUNC_1(VAR_0, " %u:%u", FUNC_0(VAR_1[VAR_2].start_block),
     FUNC_0(VAR_1[VAR_2].block_count));
 FUNC_1(VAR_0, "\n");
}
