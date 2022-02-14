
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int ) ;

void FUNC_2(int VAR_8)
{
 int VAR_9;

 if (VAR_6) {
  if (VAR_8)
   VAR_2 = VAR_3;
  else
   VAR_2 = VAR_4;
  FUNC_0(VAR_7);

 }
 else {
  for(VAR_9=0; VAR_9<256; VAR_9++)
   FUNC_1(VAR_5, VAR_9, VAR_8 ? VAR_0[VAR_9] : VAR_1[VAR_9]);
 }
}
