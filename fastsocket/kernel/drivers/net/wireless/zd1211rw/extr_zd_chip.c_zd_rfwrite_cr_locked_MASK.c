
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zd_ioreq16 {int member_1; int member_0; } ;
struct zd_chip {int mutex; } ;


 int FUNC_0 (struct zd_ioreq16 const*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_chip*,struct zd_ioreq16 const*,int ) ;

int FUNC_4(struct zd_chip *VAR_3, u32 VAR_4)
{
 const struct zd_ioreq16 VAR_5[] = {
  { VAR_2, (VAR_4 >> 16) & 0xff },
  { VAR_1, (VAR_4 >> 8) & 0xff },
  { VAR_0, VAR_4 & 0xff },
 };
 FUNC_1(FUNC_2(&VAR_3->mutex));
 return FUNC_3(VAR_3, VAR_5, FUNC_0(VAR_5));
}
