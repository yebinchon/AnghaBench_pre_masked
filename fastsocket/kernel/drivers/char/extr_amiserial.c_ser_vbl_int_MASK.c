
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_struct {int IER; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct async_struct* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct async_struct*) ;

__attribute__((used)) static irqreturn_t FUNC_1( int VAR_3, void *VAR_4)
{

 struct async_struct * VAR_5 = VAR_1;




 if(VAR_5->IER & VAR_2)
   FUNC_0(VAR_5);
 return VAR_0;
}
