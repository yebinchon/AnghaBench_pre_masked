
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* palette; } ;


 int FUNC_0 (int,unsigned char,unsigned char,unsigned char,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2;
 unsigned char *VAR_3;
 for (VAR_2 = 0, VAR_3 = VAR_0->palette; VAR_2 < 256; VAR_2 ++, VAR_3 += 3)
  FUNC_0(VAR_2, *VAR_3, *(VAR_3 + 1), *(VAR_3 + 2), VAR_1);
}
