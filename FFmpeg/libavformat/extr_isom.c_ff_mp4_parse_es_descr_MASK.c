
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(AVIOContext *VAR_0, int *VAR_1)
{
     int VAR_2;
     if (VAR_1) *VAR_1 = FUNC_1(VAR_0);
     else FUNC_1(VAR_0);
     VAR_2 = FUNC_0(VAR_0);
     if (VAR_2 & 0x80)
         FUNC_1(VAR_0);
     if (VAR_2 & 0x40) {
         int VAR_3 = FUNC_0(VAR_0);
         FUNC_2(VAR_0, VAR_3);
     }
     if (VAR_2 & 0x20)
         FUNC_1(VAR_0);
}
