
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned long* VAR_1 ;
 unsigned long* VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_6, void *VAR_7)
{
 unsigned long VAR_8;
 unsigned long VAR_9;

 FUNC_2(&VAR_3, VAR_9);


 VAR_8 = (*VAR_2);


 VAR_8 &= VAR_4;


 *VAR_1 = VAR_8;
 VAR_4 &= ~VAR_8;

 FUNC_3(&VAR_3, VAR_9);

 if (VAR_5)
  return FUNC_0(FUNC_1());

        return VAR_0;
}
