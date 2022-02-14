
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int xcvr_addr; scalar_t__ xcvr_id; } ;
struct et131x_adapter {TYPE_1__ Stats; } ;
struct TYPE_6__ {int value; } ;
typedef TYPE_2__ MI_IDR2_t ;
typedef TYPE_2__ MI_IDR1_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct et131x_adapter*,int,int,int*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__) ;

int FUNC_2(struct et131x_adapter *VAR_2)
{
 int VAR_3 = -VAR_0;
 uint8_t VAR_4;
 MI_IDR1_t VAR_5;
 MI_IDR2_t VAR_6;
 uint32_t VAR_7;


 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {

  FUNC_0(VAR_2, VAR_4,
     (uint8_t) FUNC_1(VAR_1, VAR_5),
     &VAR_5);
  FUNC_0(VAR_2, VAR_4,
     (uint8_t) FUNC_1(VAR_1, VAR_6),
     &VAR_6);

  VAR_7 = (uint32_t) ((VAR_5 << 16) | VAR_6);

  if ((VAR_5 != 0) && (VAR_5 != 0xffff)) {
   VAR_2->Stats.xcvr_id = VAR_7;
   VAR_2->Stats.xcvr_addr = VAR_4;

   VAR_3 = 0;
   break;
  }
 }
 return VAR_3;
}
