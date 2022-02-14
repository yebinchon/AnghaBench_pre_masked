
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,size_t,char*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 char** VAR_4 ;
 int FUNC_2 (char*,char const*,size_t) ;

void FUNC_3(const char* VAR_5)
{
   size_t VAR_6 = VAR_0 * sizeof(char);
   VAR_4[VAR_3] = (char*)FUNC_1(VAR_6);

   FUNC_2(VAR_4[VAR_3], VAR_5, VAR_6);
   FUNC_0("[subsystem] subsystem id: %d subsystem ident: %s rom id: %d, rom path: %s\n",
      VAR_1, VAR_2, VAR_3,
      VAR_4[VAR_3]);
   VAR_3++;
}
