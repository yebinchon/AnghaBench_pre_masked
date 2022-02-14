
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_pte {int v; } ;


 scalar_t__ FUNC_0 (int,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (struct hash_pte*,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_3 (unsigned long,int ,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static long FUNC_6(unsigned long VAR_3, unsigned long VAR_4,
   unsigned long VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct hash_pte VAR_9;
 unsigned long VAR_10;

 FUNC_4(VAR_3);

 FUNC_1(&VAR_9, VAR_3);
 VAR_10 = FUNC_3(VAR_5, VAR_1, VAR_2);

 if (FUNC_0(VAR_9.v, VAR_10) && (VAR_9.v & VAR_0)) {




  FUNC_2(VAR_3, (VAR_4 & 0x3) | ((VAR_4 & 0x4) << 1));
  FUNC_5(VAR_3);
  return 0;
 }
 FUNC_5(VAR_3);

 return -1;
}
