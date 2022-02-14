
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {int * intr; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fnic*) ;
 int FUNC_1 (struct fnic*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct fnic *VAR_4 = VAR_3;

 FUNC_2(&VAR_4->intr[VAR_0]);
 FUNC_1(VAR_4);
 FUNC_0(VAR_4);

 return VAR_1;
}
