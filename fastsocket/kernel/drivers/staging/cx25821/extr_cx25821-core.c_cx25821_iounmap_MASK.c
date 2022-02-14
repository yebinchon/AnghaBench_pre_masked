
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx25821_dev {int * lmmio; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cx25821_dev *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;


 if (VAR_0->lmmio != ((void*)0)) {
  FUNC_0("Releasing lmmio.\n");
  FUNC_1(VAR_0->lmmio);
  VAR_0->lmmio = ((void*)0);
 }
}
