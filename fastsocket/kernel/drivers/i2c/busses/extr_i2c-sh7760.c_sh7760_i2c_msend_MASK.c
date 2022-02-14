
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cami2c {TYPE_1__* msg; int flags; } ;
struct TYPE_2__ {int addr; scalar_t__ len; int* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (struct cami2c*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct cami2c*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct cami2c *VAR_22)
{
 int VAR_23;

 VAR_22->flags |= VAR_15;


 FUNC_1(VAR_22, VAR_13, 0xfe);
 FUNC_1(VAR_22, VAR_8, (VAR_22->msg->addr << 1) | 0);


 if (VAR_22->msg->len >= VAR_4)
  VAR_23 = 2;
 else
  VAR_23 = 0;

 FUNC_1(VAR_22, VAR_5, VAR_0 | VAR_1);
 FUNC_1(VAR_22, VAR_5, VAR_0 | ((VAR_23 & 3) << 2));

 while (VAR_22->msg->len && FUNC_0(VAR_22, VAR_14) < VAR_4) {
  FUNC_1(VAR_22, VAR_12, *(VAR_22->msg->buf));
  (VAR_22->msg->len)--;
  (VAR_22->msg->buf)++;
 }

 FUNC_1(VAR_22, VAR_11, 0);
 FUNC_1(VAR_22, VAR_9, VAR_17 | VAR_16);
 FUNC_1(VAR_22, VAR_7, 0);
 FUNC_1(VAR_22, VAR_10, VAR_20 | VAR_18 | VAR_21 | VAR_19);
 FUNC_1(VAR_22, VAR_6, VAR_2 | (VAR_22->msg->len ? VAR_3 : 0));
}
