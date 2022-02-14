
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_pio_info {int pio; int * name; } ;


 struct ide_pio_info* VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;

int FUNC_2(char *VAR_1)
{
 struct ide_pio_info *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->name != ((void*)0); VAR_2++) {
  if (FUNC_1(VAR_2->name, VAR_1, FUNC_0(VAR_2->name)) == 0)
   return VAR_2->pio;
 }
 return -1;
}
