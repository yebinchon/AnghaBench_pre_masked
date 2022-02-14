
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int left; int right; int top; int bottom; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_2 ;

void FUNC_1(int VAR_3, int VAR_4, int VAR_5)
{
 VAR_0.left = VAR_5 ? 32 : 0;
 VAR_0.right = VAR_5 ? 256+32 : 320;
 VAR_0.top = VAR_3;
 VAR_0.bottom = VAR_3 + VAR_4;

 FUNC_0(VAR_1, VAR_2, 0x20000 | 2000, 0);
}
