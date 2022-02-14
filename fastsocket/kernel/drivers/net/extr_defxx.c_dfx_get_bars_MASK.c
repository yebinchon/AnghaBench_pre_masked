
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
typedef int resource_size_t ;
struct TYPE_6__ {unsigned long base_addr; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_5__ {TYPE_1__ resource; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 TYPE_3__* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 TYPE_2__* FUNC_8 (struct device*) ;

__attribute__((used)) static void FUNC_9(struct device *VAR_11,
    resource_size_t *VAR_12, resource_size_t *VAR_13)
{
 int VAR_14 = FUNC_1(VAR_11);
 int VAR_15 = FUNC_0(VAR_11);
 int VAR_16 = FUNC_2(VAR_11);
 int VAR_17 = VAR_0 || VAR_16;

 if (VAR_14) {
  int VAR_18 = VAR_17 ? 0 : 1;

  *VAR_12 = FUNC_5(FUNC_7(VAR_11), VAR_18);
  *VAR_13 = FUNC_4(FUNC_7(VAR_11), VAR_18);
 }
 if (VAR_15) {
  unsigned long VAR_19 = FUNC_6(VAR_11)->base_addr;
  resource_size_t VAR_20;

  if (VAR_17) {
   VAR_20 = FUNC_3(VAR_19 + VAR_4);
   VAR_20 <<= 8;
   VAR_20 |= FUNC_3(VAR_19 + VAR_3);
   VAR_20 <<= 8;
   VAR_20 |= FUNC_3(VAR_19 + VAR_2);
   VAR_20 <<= 16;
   *VAR_12 = VAR_20;
   VAR_20 = FUNC_3(VAR_19 + VAR_7);
   VAR_20 <<= 8;
   VAR_20 |= FUNC_3(VAR_19 + VAR_6);
   VAR_20 <<= 8;
   VAR_20 |= FUNC_3(VAR_19 + VAR_5);
   VAR_20 <<= 16;
   *VAR_13 = (VAR_20 | VAR_8) + 1;
  } else {
   *VAR_12 = VAR_19;
   *VAR_13 = VAR_1;
  }
 }
 if (VAR_16) {
  *VAR_12 = FUNC_8(VAR_11)->resource.start +
        VAR_10;
  *VAR_13 = VAR_9;
 }
}
