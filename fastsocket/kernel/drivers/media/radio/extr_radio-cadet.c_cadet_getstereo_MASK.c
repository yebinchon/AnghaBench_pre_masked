
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cadet {scalar_t__ curtuner; int lock; scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct cadet *VAR_2)
{
 int VAR_3 = VAR_0;

 if (VAR_2->curtuner != 0)
  return VAR_0;

 FUNC_1(&VAR_2->lock);
 FUNC_3(7, VAR_2->io);
 if ((FUNC_0(VAR_2->io + 1) & 0x40) == 0)
  VAR_3 = VAR_1;
 FUNC_2(&VAR_2->lock);
 return VAR_3;
}
