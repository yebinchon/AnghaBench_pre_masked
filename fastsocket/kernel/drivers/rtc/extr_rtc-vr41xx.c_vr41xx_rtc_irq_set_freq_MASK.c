
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_6, int VAR_7)
{
 u64 VAR_8;

 if (!FUNC_1(VAR_7))
  return -VAR_0;
 VAR_8 = VAR_3;
 FUNC_0(VAR_8, VAR_7);

 FUNC_3(&VAR_5);

 VAR_4 = VAR_8;
 FUNC_2(VAR_2, VAR_4);
 FUNC_2(VAR_1, VAR_4 >> 16);

 FUNC_4(&VAR_5);

 return 0;
}
