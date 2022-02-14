
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int word ;
typedef int dword ;
struct TYPE_3__ {int* c_ind_mask_table; } ;
typedef TYPE_1__ PLCI ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2 (PLCI *VAR_1)
{
static char VAR_2[0x10] =
  {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
  word VAR_3, VAR_4, VAR_5;
  dword VAR_6;
    char *VAR_7;
    char VAR_8[40];

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3 += 4)
  {
    VAR_7 = VAR_8 + 36;
    *VAR_7 = '\0';
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
    {
      if (VAR_3+VAR_4 < VAR_0)
      {
        VAR_6 = VAR_1->c_ind_mask_table[VAR_3+VAR_4];
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
        {
          *(--VAR_7) = VAR_2[VAR_6 & 0xf];
          VAR_6 >>= 4;
        }
      }
      else if (VAR_3 != 0)
      {
        for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
          *(--VAR_7) = ' ';
      }
      *(--VAR_7) = ' ';
    }
    FUNC_0(1,FUNC_1 ("c_ind_mask =%s", (char *) VAR_7));
  }
}
