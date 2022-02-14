
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mbase; } ;
typedef TYPE_1__ avmcard ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(avmcard *VAR_5, unsigned long VAR_6, unsigned long *VAR_7)
{
 if (FUNC_2(VAR_5, VAR_3/10) < 0)
  return -1;

 FUNC_1(VAR_5->mbase+VAR_4, VAR_6);
 FUNC_1(VAR_5->mbase+VAR_2, VAR_1 | VAR_0);

 if (FUNC_2(VAR_5, VAR_3/10) < 0)
  return -1;

 *VAR_7 = FUNC_0(VAR_5->mbase+VAR_4);

 return 0;
}
