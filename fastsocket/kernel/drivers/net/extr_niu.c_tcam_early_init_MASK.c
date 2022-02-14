
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct niu*,int ) ;
 int FUNC_1 (struct niu*,int ,int ) ;
 int FUNC_2 (struct niu*,unsigned long,int ) ;
 int FUNC_3 (struct niu*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct niu *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 FUNC_0(VAR_6, 0);
 FUNC_1(VAR_6,
          VAR_5,
          VAR_4);
 for (VAR_7 = VAR_0; VAR_7 <= VAR_1; VAR_7++) {
  VAR_8 = FUNC_2(VAR_6, VAR_7, 0);
  if (VAR_8)
   return VAR_8;
 }
 for (VAR_7 = VAR_2; VAR_7 <= VAR_3; VAR_7++) {
  VAR_8 = FUNC_3(VAR_6, VAR_7, 0);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
