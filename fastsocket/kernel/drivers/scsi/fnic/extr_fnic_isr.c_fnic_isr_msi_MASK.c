
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnic {int * intr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fnic*,int) ;
 scalar_t__ FUNC_1 (struct fnic*,int) ;
 scalar_t__ FUNC_2 (struct fnic*,int) ;
 int FUNC_3 (int *,unsigned long,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct fnic *VAR_3 = VAR_2;
 unsigned long VAR_4 = 0;

 VAR_4 += FUNC_2(VAR_3, -1);
 VAR_4 += FUNC_1(VAR_3, -1);
 VAR_4 += FUNC_0(VAR_3, -1);

 FUNC_3(&VAR_3->intr[0],
     VAR_4,
     1 ,
     1 );

 return VAR_0;
}
