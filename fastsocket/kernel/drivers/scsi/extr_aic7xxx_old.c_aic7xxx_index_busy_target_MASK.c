
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic7xxx_host {unsigned char* untagged_scbs; } ;


 unsigned char VAR_0 ;

__attribute__((used)) static inline unsigned char
FUNC_0(struct aic7xxx_host *VAR_1, unsigned char VAR_2,
    int VAR_3)
{
  unsigned char VAR_4;

  VAR_4 = VAR_1->untagged_scbs[VAR_2];
  if (VAR_3)
  {
    VAR_1->untagged_scbs[VAR_2] = VAR_0;
  }
  return (VAR_4);
}
