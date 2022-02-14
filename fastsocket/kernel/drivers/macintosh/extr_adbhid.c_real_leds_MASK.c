
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int,int ,int,unsigned char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 size_t VAR_7 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned char VAR_8, int VAR_9)
{
 unsigned long VAR_10;

 FUNC_2(&VAR_3, VAR_10);
 if (!VAR_5) {
  VAR_5 = 1;
  FUNC_3(&VAR_3, VAR_10);
  FUNC_1(&VAR_1, VAR_2, 0, 3,
       FUNC_0(VAR_9, VAR_0), 0xff, ~VAR_8);
  return;
 } else {
  if (!(VAR_4[VAR_9] & 0x100)) {
   VAR_6[VAR_7] = VAR_9;
   VAR_7++;
   VAR_7 = (VAR_7 < 16) ? VAR_7 : 0;
  }
  VAR_4[VAR_9] = VAR_8 | 0x100;
 }
 FUNC_3(&VAR_3, VAR_10);
}
