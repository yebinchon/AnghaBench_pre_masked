
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int lock; TYPE_2__* p_dev; } ;
typedef TYPE_3__ btuart_info_t ;
struct TYPE_5__ {unsigned int BasePort1; } ;
struct TYPE_6__ {TYPE_1__ io; } ;


 int FUNC_0 (char*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(btuart_info_t *VAR_16, unsigned int VAR_17)
{
 unsigned long VAR_18;
 unsigned int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;

 if (!VAR_16) {
  FUNC_0("Unknown device");
  return;
 }

 VAR_19 = VAR_16->p_dev->io.BasePort1;

 FUNC_2(&(VAR_16->lock), VAR_18);


 FUNC_1(0, VAR_19 + VAR_9);

 VAR_22 = VAR_0 / VAR_17;

 VAR_20 = VAR_6 | VAR_4 | VAR_5;







 if (VAR_17 < 38400)
  VAR_20 |= VAR_7;
 else
  VAR_20 |= VAR_8;


 VAR_21 = VAR_15;

 FUNC_1(VAR_14 | VAR_21, VAR_19 + VAR_13);
 FUNC_1(VAR_22 & 0xff, VAR_19 + VAR_1);
 FUNC_1(VAR_22 >> 8, VAR_19 + VAR_2);
 FUNC_1(VAR_21, VAR_19 + VAR_13);
 FUNC_1(VAR_20, VAR_19 + VAR_3);


 FUNC_1(VAR_11 | VAR_10 | VAR_12, VAR_19 + VAR_9);

 FUNC_3(&(VAR_16->lock), VAR_18);
}
