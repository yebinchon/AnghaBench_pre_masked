
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic {int * intr; int * cq; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct enic*,int ) ;
 unsigned int FUNC_1 (struct enic*,int ) ;
 int VAR_1 ;
 unsigned int FUNC_2 (int *,unsigned int,int ,int *) ;
 int FUNC_3 (int *,unsigned int,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct enic *VAR_4 = VAR_3;
 unsigned int VAR_5 = FUNC_0(VAR_4, 0);
 unsigned int VAR_6 = FUNC_1(VAR_4, 0);
 unsigned int VAR_7 = -1;
 unsigned int VAR_8;

 VAR_8 = FUNC_2(&VAR_4->cq[VAR_5],
  VAR_7, VAR_1, ((void*)0));

 FUNC_3(&VAR_4->intr[VAR_6],
  VAR_8,
  1 ,
  1 );

 return VAR_0;
}
