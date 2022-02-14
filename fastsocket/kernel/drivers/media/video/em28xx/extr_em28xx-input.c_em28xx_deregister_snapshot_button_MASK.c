
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int * sbutton_input_dev; int sbutton_query_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct em28xx *VAR_0)
{
 if (VAR_0->sbutton_input_dev != ((void*)0)) {
  FUNC_1("Deregistering snapshot button\n");
  FUNC_0(&VAR_0->sbutton_query_work);
  FUNC_2(VAR_0->sbutton_input_dev);
  VAR_0->sbutton_input_dev = ((void*)0);
 }
 return;
}
