
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slip {int rcount; scalar_t__ buffsize; unsigned char* rbuff; int flags; int rx_over_errors; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct slip*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct slip *VAR_3, unsigned char VAR_4)
{

 switch (VAR_4) {
 case 131:






  if (!FUNC_3(VAR_0, &VAR_3->flags)
       && (VAR_3->rcount > 2))
   FUNC_2(VAR_3);
  FUNC_0(VAR_1, &VAR_3->flags);
  VAR_3->rcount = 0;
  return;

 case 130:
  FUNC_1(VAR_1, &VAR_3->flags);
  return;
 case 128:
  if (FUNC_3(VAR_1, &VAR_3->flags))
   VAR_4 = 130;
  break;
 case 129:
  if (FUNC_3(VAR_1, &VAR_3->flags))
   VAR_4 = 131;
  break;
 }
 if (!FUNC_4(VAR_0, &VAR_3->flags)) {
  if (VAR_3->rcount < VAR_3->buffsize) {
   VAR_3->rbuff[VAR_3->rcount++] = VAR_4;
   return;
  }
  VAR_3->rx_over_errors++;
  FUNC_1(VAR_0, &VAR_3->flags);
 }
}
