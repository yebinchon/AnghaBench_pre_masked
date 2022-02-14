
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int addr; int data; } ;


 char* VAR_0 ;
 char* FUNC_0 (char*,char const) ;

__attribute__((used)) static void FUNC_1(const char *VAR_1, struct patch *VAR_2)
{
  char *VAR_3;
  int VAR_4;

  for(VAR_4 = 0; VAR_4 < 6; ++VAR_4)
    {
      if(!(VAR_3 = FUNC_0(VAR_0, VAR_1[VAR_4])))
      {
 VAR_2->addr = VAR_2->data = -1;
 return;
      }
      VAR_2->addr = (VAR_2->addr << 4) | ((VAR_3 - VAR_0) >> 1);
    }

  for(VAR_4 = 6; VAR_4 < 10; ++VAR_4)
    {
      if(!(VAR_3 = FUNC_0(VAR_0, VAR_1[VAR_4])))
      {
 VAR_2->addr = VAR_2->data = -1;
 return;
      }
      VAR_2->data = (VAR_2->data << 4) | ((VAR_3 - VAR_0) >> 1);
    }
}
