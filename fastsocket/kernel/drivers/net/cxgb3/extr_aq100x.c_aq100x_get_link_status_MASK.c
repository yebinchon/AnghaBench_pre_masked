
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cphy*,int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct cphy *VAR_10, int *VAR_11,
      int *VAR_12, int *VAR_13, int *VAR_14)
{
 int VAR_15;
 unsigned int VAR_16;

 if (VAR_11) {
  VAR_15 = FUNC_0(VAR_10, VAR_5, VAR_1, &VAR_16);
  if (VAR_15)
   return VAR_15;

  *VAR_11 = VAR_16 & 1;
  if (!*VAR_11)
   return 0;
 }

 VAR_15 = FUNC_0(VAR_10, VAR_4, VAR_0, &VAR_16);
 if (VAR_15)
  return VAR_15;

 if (VAR_12) {
  switch (VAR_16 & 0x6) {
  case 0x6:
   *VAR_12 = VAR_9;
   break;
  case 0x4:
   *VAR_12 = VAR_8;
   break;
  case 0x2:
   *VAR_12 = VAR_7;
   break;
  case 0x0:
   *VAR_12 = VAR_6;
   break;
  }
 }

 if (VAR_13)
  *VAR_13 = VAR_16 & 1 ? VAR_2 : VAR_3;

 return 0;
}
