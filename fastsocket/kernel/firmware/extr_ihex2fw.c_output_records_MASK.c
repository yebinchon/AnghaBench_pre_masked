
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ihex_binrec {int len; unsigned char addr; struct ihex_binrec* next; } ;


 unsigned char FUNC_0 (unsigned char) ;
 int FUNC_1 (int) ;
 struct ihex_binrec* VAR_0 ;
 int FUNC_2 (int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(int VAR_1)
{
 unsigned char VAR_2[6] = {0, 0, 0, 0, 0, 0};
 struct ihex_binrec *VAR_3 = VAR_0;

 while (VAR_3) {
  uint16_t VAR_4 = (VAR_3->len + 9) & ~3;

  VAR_3->addr = FUNC_0(VAR_3->addr);
  VAR_3->len = FUNC_1(VAR_3->len);
  FUNC_2(VAR_1, &VAR_3->addr, VAR_4);
  VAR_3 = VAR_3->next;
 }


 FUNC_2(VAR_1, VAR_2, 6);
 return 0;
}
