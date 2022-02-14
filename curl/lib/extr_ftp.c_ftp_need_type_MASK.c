
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char transfertype; } ;
struct TYPE_4__ {TYPE_1__ ftpc; } ;
struct connectdata {TYPE_2__ proto; } ;



__attribute__((used)) static int FUNC_0(struct connectdata *VAR_0,
                         bool VAR_1)
{
  return VAR_0->proto.ftpc.transfertype != (VAR_1?'A':'I');
}
