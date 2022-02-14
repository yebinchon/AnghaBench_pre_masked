
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ port0; } ;
struct qla_hw_data {TYPE_1__ flags; } ;


 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint32_t
FUNC_1(struct qla_hw_data *VAR_2)
{
 uint32_t VAR_3 = 0;

 if (!FUNC_0(VAR_2))
  goto out;

 if (VAR_2->flags.port0)
  VAR_3 = VAR_0;
 else
  VAR_3 = VAR_1;

out:
 return VAR_3;
}
