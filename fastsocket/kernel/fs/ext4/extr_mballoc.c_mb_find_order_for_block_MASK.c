
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext4_buddy {int bd_blkbits; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct ext4_buddy*) ;
 void* FUNC_2 (struct ext4_buddy*) ;
 int FUNC_3 (int,void*) ;

__attribute__((used)) static int FUNC_4(struct ext4_buddy *VAR_0, int VAR_1)
{
 int VAR_2 = 1;
 void *VAR_3;

 FUNC_0(FUNC_1(VAR_0) == FUNC_2(VAR_0));
 FUNC_0(VAR_1 >= (1 << (VAR_0->bd_blkbits + 3)));

 VAR_3 = FUNC_2(VAR_0);
 while (VAR_2 <= VAR_0->bd_blkbits + 1) {
  VAR_1 = VAR_1 >> 1;
  if (!FUNC_3(VAR_1, VAR_3)) {

   return VAR_2;
  }
  VAR_3 += 1 << (VAR_0->bd_blkbits - VAR_2);
  VAR_2++;
 }
 return 0;
}
