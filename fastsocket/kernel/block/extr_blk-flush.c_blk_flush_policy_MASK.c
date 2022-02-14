
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {unsigned int cmd_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct request*) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_5, struct request *VAR_6)
{
 unsigned int VAR_7 = 0;

 if (VAR_5 & VAR_0) {
  if (VAR_6->cmd_flags & VAR_0)
   VAR_7 |= VAR_3;
  if (FUNC_0(VAR_6))
   VAR_7 |= VAR_1;
  if (!(VAR_5 & VAR_4) && (VAR_6->cmd_flags & VAR_4))
   VAR_7 |= VAR_2;
 }
 return VAR_7;
}
