
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent {int ee_len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ext4_extent*) ;
 scalar_t__ FUNC_2 (struct ext4_extent*) ;
 int FUNC_3 (struct ext4_extent*) ;

__attribute__((used)) static void
FUNC_4(struct ext4_extent *VAR_0, struct ext4_extent *VAR_1)
{
 if (FUNC_2(VAR_0))
  FUNC_3(VAR_1);
 else
  VAR_1->ee_len = FUNC_0(FUNC_1(VAR_1));
}
