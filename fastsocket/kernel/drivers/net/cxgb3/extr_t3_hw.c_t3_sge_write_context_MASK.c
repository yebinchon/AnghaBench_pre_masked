
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
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,int ,int ,int ,int ,int) ;
 int FUNC_3 (struct adapter*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_8, unsigned int VAR_9,
    unsigned int VAR_10)
{
 if (VAR_10 == VAR_6) {






  FUNC_3(VAR_8, VAR_1, 0xffffffff);
  FUNC_3(VAR_8, VAR_2, 0xffffffff);
  FUNC_3(VAR_8, VAR_3, 0x17ffffff);
  FUNC_3(VAR_8, VAR_4, 0xffffffff);
 } else {
  FUNC_3(VAR_8, VAR_1, 0xffffffff);
  FUNC_3(VAR_8, VAR_2, 0xffffffff);
  FUNC_3(VAR_8, VAR_3, 0xffffffff);
  FUNC_3(VAR_8, VAR_4, 0xffffffff);
 }
 FUNC_3(VAR_8, VAR_0,
       FUNC_1(1) | VAR_10 | FUNC_0(VAR_9));
 return FUNC_2(VAR_8, VAR_0, VAR_5,
          0, VAR_7, 1);
}
