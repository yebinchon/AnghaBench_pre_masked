
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {int v; } ;


 int VAR_0 ;
 long FUNC_0 (struct hash_pte*,unsigned long) ;

__attribute__((used)) static long FUNC_1(unsigned long VAR_1)
{
 struct hash_pte VAR_2;
 long VAR_3;







 VAR_3 = FUNC_0(&VAR_2, VAR_1);
 if (VAR_2.v & VAR_0) {
  if (VAR_3 < 0) {
   VAR_3 &= 0x7fffffffffffffff;
   VAR_3 = -VAR_3;
  }
 } else
  VAR_3 = -1;
 return VAR_3;
}
