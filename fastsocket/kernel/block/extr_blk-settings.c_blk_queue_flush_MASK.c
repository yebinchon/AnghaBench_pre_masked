
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {unsigned int flush_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(struct request_queue *VAR_2, unsigned int VAR_3)
{
 FUNC_0(VAR_3 & ~(VAR_0 | VAR_1));

 if (FUNC_0(!(VAR_3 & VAR_0) && (VAR_3 & VAR_1)))
  VAR_3 &= ~VAR_1;

 VAR_2->flush_flags = VAR_3 & (VAR_0 | VAR_1);
}
