
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct zd_chip {int mutex; } ;
struct aw_pt_bi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (struct zd_chip*,struct aw_pt_bi*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct zd_chip*,struct aw_pt_bi*) ;
 int FUNC_4 (struct zd_chip*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct zd_chip *VAR_3, u16 VAR_4,
          u8 VAR_5, int VAR_6)
{
 int VAR_7;
 struct aw_pt_bi VAR_8;
 u32 VAR_9, VAR_10;

 FUNC_0(FUNC_2(&VAR_3->mutex));

 if (VAR_4 > 0) {
  switch (VAR_6) {
  case 130:
  case 128:
   VAR_10 = VAR_1;
   break;
  case 129:
   VAR_10 = VAR_0;
   break;
  default:
   VAR_10 = 0;
   break;
  }
 } else {
  VAR_5 = 0;
  VAR_10 = 0;
 }

 VAR_9 = VAR_10 | (VAR_5 << 16) | VAR_4;

 VAR_7 = FUNC_4(VAR_3, VAR_9, VAR_2);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_1(VAR_3, &VAR_8);
 if (VAR_7)
  return VAR_7;
 return FUNC_3(VAR_3, &VAR_8);
}
