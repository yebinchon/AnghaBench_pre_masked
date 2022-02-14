
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int r ;
typedef int be128 ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int) ;

void FUNC_4(be128 *VAR_0, const be128 *VAR_1)
{
 be128 VAR_2[8];
 int VAR_3;

 VAR_2[0] = *VAR_0;
 for (VAR_3 = 0; VAR_3 < 7; ++VAR_3)
  FUNC_2(&VAR_2[VAR_3 + 1], &VAR_2[VAR_3]);

 FUNC_3(VAR_0, 0, sizeof(VAR_0));
 for (VAR_3 = 0;;) {
  u8 VAR_4 = ((u8 *)VAR_1)[VAR_3];

  if (VAR_4 & 0x80)
   FUNC_0(VAR_0, VAR_0, &VAR_2[7]);
  if (VAR_4 & 0x40)
   FUNC_0(VAR_0, VAR_0, &VAR_2[6]);
  if (VAR_4 & 0x20)
   FUNC_0(VAR_0, VAR_0, &VAR_2[5]);
  if (VAR_4 & 0x10)
   FUNC_0(VAR_0, VAR_0, &VAR_2[4]);
  if (VAR_4 & 0x08)
   FUNC_0(VAR_0, VAR_0, &VAR_2[3]);
  if (VAR_4 & 0x04)
   FUNC_0(VAR_0, VAR_0, &VAR_2[2]);
  if (VAR_4 & 0x02)
   FUNC_0(VAR_0, VAR_0, &VAR_2[1]);
  if (VAR_4 & 0x01)
   FUNC_0(VAR_0, VAR_0, &VAR_2[0]);

  if (++VAR_3 >= 16)
   break;

  FUNC_1(VAR_0);
 }
}
