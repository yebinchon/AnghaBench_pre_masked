
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct mtd_info*,int) ;

__attribute__((used)) static void FUNC_2(struct mtd_info *VAR_8, int VAR_9,
    unsigned int VAR_10)
{

 if (VAR_10 & VAR_6) {
  unsigned long VAR_11;

  VAR_11 = (~VAR_10 & VAR_7) ? VAR_2 : 0;
  VAR_11 |= (VAR_10 & VAR_4) ? VAR_1 : 0;
  VAR_11 |= (VAR_10 & VAR_3) ? VAR_0 : 0;

  FUNC_0(VAR_1 |
    VAR_0 |
    VAR_2, VAR_11);
 }

 if (VAR_9 != VAR_5)
  FUNC_1(VAR_8, VAR_9);
}
