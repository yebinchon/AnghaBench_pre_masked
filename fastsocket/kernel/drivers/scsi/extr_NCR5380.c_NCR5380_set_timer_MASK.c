
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NCR5380_hostdata {int coroutine; scalar_t__ time_expires; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct NCR5380_hostdata *VAR_1, unsigned long VAR_2)
{
 VAR_1->time_expires = VAR_0 + VAR_2;
 FUNC_0(&VAR_1->coroutine, VAR_2);
}
