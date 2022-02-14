
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_timer {scalar_t__ active; scalar_t__ value; scalar_t__ latched; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bstp_timer*) ;

__attribute__((used)) static int
FUNC_1(struct bstp_timer *VAR_1)
{
 if (VAR_1->active == 0 || VAR_1->latched)
  return (0);
 VAR_1->value -= VAR_0;
 if (VAR_1->value <= 0) {
  FUNC_0(VAR_1);
  return (1);
 }
 return (0);
}
