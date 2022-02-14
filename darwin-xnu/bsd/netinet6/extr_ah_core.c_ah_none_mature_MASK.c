
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct secasvar {TYPE_2__* sah; } ;
struct TYPE_3__ {scalar_t__ proto; } ;
struct TYPE_4__ {TYPE_1__ saidx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct secasvar *VAR_2)
{
 if (VAR_2->sah->saidx.proto == VAR_0) {
  FUNC_0((VAR_1,
      "ah_none_mature: protocol and algorithm mismatch.\n"));
  return 1;
 }
 return 0;
}
