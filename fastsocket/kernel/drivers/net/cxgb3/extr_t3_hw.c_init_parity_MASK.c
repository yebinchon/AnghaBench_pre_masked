
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,int,int ) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int ,int ,int ,int,int) ;
 int FUNC_5 (struct adapter*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct adapter *VAR_12)
{
  int VAR_13, VAR_14, VAR_15;

 if (FUNC_3(VAR_12, VAR_2) & VAR_4)
  return -VAR_3;

 for (VAR_14 = VAR_13 = 0; !VAR_14 && VAR_13 < 16; VAR_13++)
  VAR_14 = FUNC_2(VAR_12, VAR_13, VAR_5);
 for (VAR_13 = 0xfff0; !VAR_14 && VAR_13 <= 0xffff; VAR_13++)
  VAR_14 = FUNC_2(VAR_12, VAR_13, VAR_5);
 for (VAR_13 = 0; !VAR_14 && VAR_13 < VAR_11; VAR_13++)
  VAR_14 = FUNC_2(VAR_12, VAR_13, VAR_9);
 if (VAR_14)
  return VAR_14;

 FUNC_5(VAR_12, VAR_1, 0);
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
  for (VAR_15 = 0; VAR_15 <= VAR_10; VAR_15++) {
   FUNC_5(VAR_12, VAR_0, VAR_7 |
         VAR_8 | FUNC_1(VAR_13) |
         FUNC_0(VAR_15));
   VAR_14 = FUNC_4(VAR_12, VAR_0,
           VAR_6, 0, 2, 1);
   if (VAR_14)
    return VAR_14;
  }
 return 0;
}
