
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (struct connectdata*) ;

__attribute__((used)) static unsigned int FUNC_1(struct connectdata *VAR_3,
                                   unsigned int VAR_4)
{
  unsigned int VAR_5 = VAR_2;

  if(VAR_4 & VAR_0) {
    if(FUNC_0(VAR_3))
      VAR_5 |= VAR_1;
  }

  return VAR_5;
}
