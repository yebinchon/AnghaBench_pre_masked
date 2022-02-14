
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_extent {void* ee_len; int ee_block; } ;
typedef int ext4_lblk_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ext4_extent*,struct ext4_extent*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ext4_extent*) ;
 int FUNC_5 (struct ext4_extent*) ;
 int FUNC_6 (struct ext4_extent*,int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct ext4_extent *VAR_1,
         struct ext4_extent *VAR_2,
         ext4_lblk_t VAR_3, ext4_lblk_t VAR_4,
         ext4_lblk_t VAR_5)
{
 ext4_lblk_t VAR_6, VAR_7;
 struct ext4_extent VAR_8, VAR_9;

 FUNC_0(VAR_3 != VAR_4);


 if (VAR_3 < FUNC_8(VAR_2->ee_block) ||
     FUNC_8(VAR_2->ee_block) +
   FUNC_4(VAR_2) - 1 < VAR_3)
  return -VAR_0;

 if (VAR_3 < FUNC_8(VAR_1->ee_block) ||
     FUNC_8(VAR_1->ee_block) +
   FUNC_4(VAR_1) - 1 < VAR_3)
  return -VAR_0;

 VAR_8 = *VAR_1;
 VAR_9 = *VAR_2;


 VAR_6 = VAR_4 - FUNC_8(VAR_1->ee_block);

 FUNC_6(VAR_1, FUNC_5(VAR_1) + VAR_6);
 VAR_1->ee_block =
   FUNC_3(FUNC_8(VAR_1->ee_block) + VAR_6);
 VAR_1->ee_len = FUNC_2(FUNC_7(VAR_1->ee_len) - VAR_6);

 if (VAR_5 < FUNC_4(VAR_1))
  VAR_1->ee_len = FUNC_2(VAR_5);

 VAR_7 = VAR_3 - FUNC_8(VAR_2->ee_block);
 FUNC_6(VAR_2, FUNC_5(VAR_2) + VAR_7);


 if (FUNC_4(VAR_1) >
     FUNC_4(VAR_2) - VAR_7)
  VAR_1->ee_len = FUNC_2(FUNC_7(VAR_2->ee_len) -
      VAR_7);

 VAR_2->ee_len = FUNC_2(FUNC_4(VAR_1));

 FUNC_1(&VAR_9, VAR_1);
 FUNC_1(&VAR_8, VAR_2);

 return 0;
}
