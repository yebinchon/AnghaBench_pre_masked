
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bi_record {scalar_t__ tag; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(const struct bi_record *VAR_1)
{
 if (VAR_1->tag == VAR_0)
  return 0;
 else
  return 1;
}
