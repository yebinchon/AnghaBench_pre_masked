
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cphy*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_7, int VAR_8)
{
 int VAR_9;

 if (VAR_8)
  FUNC_1(VAR_8);


 VAR_9 = FUNC_0(VAR_7, VAR_0, 3);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_9 == 0x10)
  return VAR_3;
 if (VAR_9 == 0x20)
  return VAR_1;
 if (VAR_9 == 0x40)
  return VAR_2;

 VAR_9 = FUNC_0(VAR_7, VAR_0, 6);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_9 != 4)
  goto unknown;

 VAR_9 = FUNC_0(VAR_7, VAR_0, 10);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_9 & 0x80) {
  VAR_9 = FUNC_0(VAR_7, VAR_0, 0x12);
  if (VAR_9 < 0)
   return VAR_9;
  return VAR_9 > 10 ? VAR_5 : VAR_4;
 }
unknown:
 return VAR_6;
}
