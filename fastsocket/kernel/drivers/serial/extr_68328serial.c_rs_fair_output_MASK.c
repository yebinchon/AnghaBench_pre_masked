
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m68k_serial {char* xmit_buf; int xmit_cnt; size_t xmit_tail; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 struct m68k_serial* VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_2;
 unsigned long VAR_3;
 struct m68k_serial *VAR_4 = &VAR_1[0];
 char VAR_5;

 if (VAR_4 == 0) return;
 if (VAR_4->xmit_buf == 0) return;

 FUNC_1(VAR_3);
 VAR_2 = VAR_4->xmit_cnt;
 while (VAR_2 != 0) {
  VAR_5 = VAR_4->xmit_buf[VAR_4->xmit_tail];
  VAR_4->xmit_tail = (VAR_4->xmit_tail+1) & (VAR_0-1);
  VAR_4->xmit_cnt--;
  FUNC_0(VAR_3);

  FUNC_3(VAR_5);

  FUNC_1(VAR_3);
  VAR_2 = FUNC_2(VAR_4->xmit_cnt, VAR_2-1);
 }


 FUNC_4(5);

 FUNC_0(VAR_3);
 return;
}
