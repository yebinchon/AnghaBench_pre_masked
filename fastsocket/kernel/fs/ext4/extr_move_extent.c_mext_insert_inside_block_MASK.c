
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent_header {int eh_entries; } ;
struct ext4_extent {scalar_t__ ee_len; } ;


 struct ext4_extent* FUNC_0 (struct ext4_extent_header*) ;
 int FUNC_1 (struct ext4_extent*) ;
 int FUNC_2 (struct ext4_extent*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct ext4_extent*,struct ext4_extent*,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct ext4_extent *VAR_0,
         struct ext4_extent *VAR_1,
         struct ext4_extent *VAR_2,
         struct ext4_extent *VAR_3,
         struct ext4_extent *VAR_4,
         struct ext4_extent_header *VAR_5,
         int VAR_6)
{
 int VAR_7 = 0;
 unsigned long VAR_8;


 if (VAR_6 && VAR_1 < FUNC_0(VAR_5)) {
  VAR_8 = (unsigned long)(FUNC_0(VAR_5) + 1) -
   (unsigned long)(VAR_1 + 1);
  FUNC_4(VAR_1 + 1 + VAR_6, VAR_1 + 1, VAR_8);
 }


 if (VAR_2->ee_len)
  VAR_0[VAR_7++].ee_len = VAR_2->ee_len;


 if (VAR_3->ee_len) {
  VAR_0[VAR_7] = *VAR_3;
  FUNC_2(&VAR_0[VAR_7++], FUNC_1(VAR_3));
 }


 if (VAR_4->ee_len)
  VAR_0[VAR_7] = *VAR_4;


 FUNC_3(&VAR_5->eh_entries, VAR_6);
}
