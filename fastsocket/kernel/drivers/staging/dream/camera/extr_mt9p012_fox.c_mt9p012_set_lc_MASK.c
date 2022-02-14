
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_2__ {int rftbl_size; int rftbl; int lctbl_size; int lctbl; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int32_t FUNC_1(void)
{
 int32_t VAR_1;

 VAR_1 = FUNC_0(VAR_0.lctbl, VAR_0.lctbl_size);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0.rftbl, VAR_0.rftbl_size);

 return VAR_1;
}
