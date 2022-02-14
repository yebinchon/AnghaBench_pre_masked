
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w9966_dev {int ppmode; int pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_2(struct w9966_dev* VAR_2, int VAR_3, int VAR_4)
{

 const unsigned char VAR_5 = 0xc0 | (VAR_3 & 0x1f);
 const unsigned char VAR_6 = VAR_4;

 if (FUNC_0(VAR_2->pport, VAR_2->ppmode | VAR_0) != 0)
  return -1;
 if (FUNC_1(VAR_2->pport, &VAR_5, 1) != 1)
  return -1;
 if (FUNC_0(VAR_2->pport, VAR_2->ppmode | VAR_1) != 0)
  return -1;
 if (FUNC_1(VAR_2->pport, &VAR_6, 1) != 1)
  return -1;

 return 0;
}
