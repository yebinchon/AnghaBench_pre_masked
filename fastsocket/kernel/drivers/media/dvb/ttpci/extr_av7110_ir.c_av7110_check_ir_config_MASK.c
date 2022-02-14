
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int protocol; int inversion; int ir_config; scalar_t__ device_mask; } ;
struct av7110 {TYPE_1__ ir; int arm_app; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct av7110*,int ,int ,int,int) ;
 int VAR_6 ;
 struct av7110** VAR_7 ;
 scalar_t__* VAR_8 ;
 int* VAR_9 ;
 int* VAR_10 ;

int FUNC_2(struct av7110 *VAR_11, int VAR_12)
{
 int VAR_13;
 int VAR_14 = VAR_12;
 int VAR_15 = -VAR_1;

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
  if (VAR_11 == VAR_7[VAR_13])
   break;

 if (VAR_13 < VAR_6 && VAR_11) {
  if ((VAR_11->ir.protocol & 1) != VAR_10[VAR_13] ||
      VAR_11->ir.inversion != VAR_9[VAR_13])
   VAR_14 = 1;

  if (VAR_14) {

   if (VAR_10[VAR_13]) {
    VAR_10[VAR_13] = 1;
    VAR_11->ir.protocol = VAR_4;
    VAR_11->ir.ir_config = 0x0001;
   } else if (FUNC_0(VAR_11->arm_app) >= 0x2620) {
    VAR_11->ir.protocol = VAR_3;
    VAR_11->ir.ir_config = 0x0002;
   } else {
    VAR_11->ir.protocol = VAR_2;
    VAR_11->ir.ir_config = 0x0000;
   }

   if (VAR_9[VAR_13]) {
    VAR_9[VAR_13] = 1;
    VAR_11->ir.ir_config |= 0x8000;
   }
   VAR_11->ir.inversion = VAR_9[VAR_13];

   VAR_15 = FUNC_1(VAR_11, VAR_0, VAR_5, 1,
      VAR_11->ir.ir_config);
  } else
   VAR_15 = 0;


  if (VAR_11->ir.device_mask != VAR_8[VAR_13])
   VAR_11->ir.device_mask = VAR_8[VAR_13];
 }

 return VAR_15;
}
