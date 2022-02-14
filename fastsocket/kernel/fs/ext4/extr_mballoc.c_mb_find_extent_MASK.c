
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_free_extent {int fe_len; int fe_start; scalar_t__ fe_group; } ;
struct ext4_buddy {int bd_blkbits; scalar_t__ bd_group; int bd_sb; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct ext4_buddy*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 void* FUNC_5 (struct ext4_buddy*,int,int*) ;
 int FUNC_6 (struct ext4_buddy*,int) ;
 scalar_t__ FUNC_7 (int,void*) ;

__attribute__((used)) static int FUNC_8(struct ext4_buddy *VAR_0, int VAR_1, int VAR_2,
    int VAR_3, struct ext4_free_extent *VAR_4)
{
 int VAR_5 = VAR_2;
 int VAR_6;
 int VAR_7;
 void *VAR_8;

 FUNC_2(FUNC_3(VAR_0->bd_sb, VAR_0->bd_group));
 FUNC_0(VAR_4 == ((void*)0));

 VAR_8 = FUNC_5(VAR_0, VAR_1, &VAR_6);
 FUNC_0(VAR_8 == ((void*)0));
 FUNC_0(VAR_2 >= VAR_6);
 if (FUNC_7(VAR_2, VAR_8)) {
  VAR_4->fe_len = 0;
  VAR_4->fe_start = 0;
  VAR_4->fe_group = 0;
  return 0;
 }


 if (FUNC_4(VAR_1 == 0)) {

  VAR_1 = FUNC_6(VAR_0, VAR_2);
  VAR_2 = VAR_2 >> VAR_1;
 }

 VAR_4->fe_len = 1 << VAR_1;
 VAR_4->fe_start = VAR_2 << VAR_1;
 VAR_4->fe_group = VAR_0->bd_group;


 VAR_5 = VAR_5 - VAR_4->fe_start;
 VAR_4->fe_len -= VAR_5;
 VAR_4->fe_start += VAR_5;

 while (VAR_3 > VAR_4->fe_len &&
        (VAR_8 = FUNC_5(VAR_0, VAR_1, &VAR_6))) {

  if (VAR_2 + 1 >= VAR_6)
   break;

  VAR_5 = (VAR_2 + 1) * (1 << VAR_1);
  if (FUNC_7(VAR_5, FUNC_1(VAR_0)))
   break;

  VAR_7 = FUNC_6(VAR_0, VAR_5);

  VAR_1 = VAR_7;
  VAR_2 = VAR_5 >> VAR_1;
  VAR_4->fe_len += 1 << VAR_1;
 }

 FUNC_0(VAR_4->fe_start + VAR_4->fe_len > (1 << (VAR_0->bd_blkbits + 3)));
 return VAR_4->fe_len;
}
