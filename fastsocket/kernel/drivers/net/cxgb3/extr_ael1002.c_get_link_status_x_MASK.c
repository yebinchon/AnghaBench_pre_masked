
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
 int FUNC_0 (struct cphy*,int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct cphy *VAR_8, int *VAR_9, int *VAR_10,
        int *VAR_11, int *VAR_12)
{
 if (VAR_9) {
  unsigned int VAR_13, VAR_14, VAR_15;
  int VAR_16 = FUNC_0(VAR_8, VAR_3,
           VAR_6, &VAR_13);

  if (!VAR_16)
   VAR_16 = FUNC_0(VAR_8, VAR_1,
        VAR_4, &VAR_14);
  if (!VAR_16)
   VAR_16 = FUNC_0(VAR_8, VAR_2,
        VAR_5, &VAR_15);
  if (VAR_16)
   return VAR_16;
  *VAR_9 = (VAR_13 & (VAR_14 >> 12) & (VAR_15 >> 12)) & 1;
 }
 if (VAR_10)
  *VAR_10 = VAR_7;
 if (VAR_11)
  *VAR_11 = VAR_0;
 return 0;
}
