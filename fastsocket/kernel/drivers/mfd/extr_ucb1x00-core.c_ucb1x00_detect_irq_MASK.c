
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucb1x00 {int dummy; } ;


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
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (struct ucb1x00*,int ) ;
 int FUNC_3 (struct ucb1x00*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ucb1x00 *VAR_10)
{
 unsigned long VAR_11;

 VAR_11 = FUNC_1();
 if (!VAR_11) {
  FUNC_0(VAR_11);
  return VAR_0;
 }




 FUNC_3(VAR_10, VAR_9, VAR_6);
 FUNC_3(VAR_10, VAR_8, VAR_6);
 FUNC_3(VAR_10, VAR_7, 0xffff);
 FUNC_3(VAR_10, VAR_7, 0);




 FUNC_3(VAR_10, VAR_1, VAR_4);
 FUNC_3(VAR_10, VAR_1, VAR_4 | VAR_5);




 while ((FUNC_2(VAR_10, VAR_2) & VAR_3) == 0);
 FUNC_3(VAR_10, VAR_1, 0);




 FUNC_3(VAR_10, VAR_9, 0);
 FUNC_3(VAR_10, VAR_8, 0);
 FUNC_3(VAR_10, VAR_7, 0xffff);
 FUNC_3(VAR_10, VAR_7, 0);




 return FUNC_0(VAR_11);
}
