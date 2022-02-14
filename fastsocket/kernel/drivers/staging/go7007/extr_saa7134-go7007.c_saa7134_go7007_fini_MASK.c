
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_go7007 {scalar_t__ bottom; scalar_t__ top; } ;
struct saa7134_dev {int * empress_dev; } ;
struct go7007 {int status; struct saa7134_go7007* hpi_context; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct go7007*) ;
 int FUNC_2 (struct saa7134_go7007*) ;
 struct go7007* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct saa7134_dev *VAR_1)
{
 struct go7007 *VAR_2;
 struct saa7134_go7007 *VAR_3;

 if (((void*)0) == VAR_1->empress_dev)
  return 0;

 VAR_2 = FUNC_3(VAR_1->empress_dev);
 VAR_3 = VAR_2->hpi_context;
 VAR_2->status = VAR_0;
 FUNC_0((unsigned long)VAR_3->top);
 FUNC_0((unsigned long)VAR_3->bottom);
 FUNC_2(VAR_3);
 FUNC_1(VAR_2);
 VAR_1->empress_dev = ((void*)0);

 return 0;
}
