
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlibrd {int state; scalar_t__ iosize; int iobase; int membase; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct stlibrd*) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct stlibrd** VAR_1 ;
 int FUNC_3 (struct stlibrd*) ;
 unsigned int VAR_2 ;

__attribute__((used)) static void FUNC_4(void)
{
 struct stlibrd *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; (VAR_4 < VAR_2); VAR_4++) {
  if ((VAR_3 = VAR_1[VAR_4]) == ((void*)0) || (VAR_3->state & VAR_0))
   continue;

  FUNC_3(VAR_3);

  FUNC_0(VAR_3->membase);
  if (VAR_3->iosize > 0)
   FUNC_2(VAR_3->iobase, VAR_3->iosize);
  FUNC_1(VAR_3);
  VAR_1[VAR_4] = ((void*)0);
 }
}
