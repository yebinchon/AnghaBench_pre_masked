
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int features; size_t dev_index; } ;
typedef TYPE_1__ pegasus_t ;
typedef int __u8 ;
typedef int __u16 ;
struct TYPE_9__ {scalar_t__ vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_1__*,int ,int,int*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (TYPE_1__*,int,int,int*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 TYPE_3__* VAR_12 ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;

__attribute__((used)) static inline int FUNC_4(pegasus_t * VAR_13)
{
 __u8 VAR_14 = 0x8;
 int VAR_15;

 FUNC_2(VAR_13, VAR_2, VAR_14);
 for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
  FUNC_0(VAR_13, VAR_2, 1, &VAR_14);
  if (~VAR_14 & 0x08) {
   if (VAR_10 & 1)
    break;
   if (VAR_11 && (VAR_13->features & VAR_5))
    FUNC_2(VAR_13, VAR_4, 0x34);
   else
    FUNC_2(VAR_13, VAR_4, 0x26);
   FUNC_2(VAR_13, VAR_3, VAR_13->features);
   FUNC_2(VAR_13, VAR_3, VAR_0);
   break;
  }
 }
 if (VAR_15 == VAR_6)
  return -VAR_1;

 if (VAR_12[VAR_13->dev_index].vendor == VAR_9 ||
     VAR_12[VAR_13->dev_index].vendor == VAR_7) {
  FUNC_2(VAR_13, VAR_3, 0x24);
  FUNC_2(VAR_13, VAR_3, 0x26);
 }
 if (VAR_12[VAR_13->dev_index].vendor == VAR_8) {
  __u16 VAR_16;
  FUNC_1(VAR_13, 3, 0x1b, &VAR_16);
  FUNC_3(VAR_13, 3, 0x1b, VAR_16 | 4);
 }

 return 0;
}
