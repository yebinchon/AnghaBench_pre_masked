
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {int * intr; } ;
typedef int irqreturn_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct fnic*,int) ;
 int FUNC_1 (int *,unsigned long,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct fnic *VAR_4 = VAR_3;
 unsigned long VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_4, -1);
 FUNC_1(&VAR_4->intr[VAR_0],
     VAR_5,
     1 ,
     1 );
 return VAR_1;
}
