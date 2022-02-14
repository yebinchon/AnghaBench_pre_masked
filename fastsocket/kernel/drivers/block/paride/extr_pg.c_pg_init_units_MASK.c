
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg {int drive; int name; int * bufptr; scalar_t__ present; scalar_t__ busy; int access; int pia; int * pi; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 struct pg* VAR_4 ;
 int*** VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,int ,char*,char*,char) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_8;

 VAR_7 = 0;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  int *VAR_9 = *VAR_5[VAR_8];
  struct pg *VAR_10 = &VAR_4[VAR_8];
  VAR_10->pi = &VAR_10->pia;
  FUNC_0(0, &VAR_10->access);
  VAR_10->busy = 0;
  VAR_10->present = 0;
  VAR_10->bufptr = ((void*)0);
  VAR_10->drive = VAR_9[VAR_1];
  FUNC_1(VAR_10->name, VAR_2, "%s%c", VAR_6, 'a'+VAR_8);
  if (VAR_9[VAR_0])
   VAR_7++;
 }
}
