
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mc5 {struct adapter* adapter; } ;
struct TYPE_2__ {scalar_t__ rev; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct adapter*,int,int,int) ;
 int FUNC_3 (struct mc5*,int ,int ,int,int) ;
 scalar_t__ FUNC_4 (struct adapter*,scalar_t__,int) ;
 int FUNC_5 (struct adapter*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct mc5 *VAR_23)
{
 int VAR_24;
 struct adapter *VAR_25 = VAR_23->adapter;

 FUNC_5(VAR_25, VAR_10,
       VAR_25->params.rev == 0 ? FUNC_0(0xd) | FUNC_1(0x11) :
       FUNC_0(0xd) | FUNC_1(0x12));





 FUNC_5(VAR_25, VAR_8, VAR_16);
 FUNC_5(VAR_25, VAR_9, VAR_16);
 FUNC_5(VAR_25, VAR_1,
       VAR_15 | 0x3800);
 FUNC_5(VAR_25, VAR_11, VAR_15);
 FUNC_5(VAR_25, VAR_0, VAR_15 | 0x3800);
 FUNC_5(VAR_25, VAR_6, VAR_15 | 0x3800);
 FUNC_5(VAR_25, VAR_5, VAR_15 | 0x800);
 FUNC_5(VAR_25, VAR_3, VAR_16);
 FUNC_5(VAR_25, VAR_2, VAR_14);

 FUNC_5(VAR_25, VAR_7, 3);


 FUNC_5(VAR_25, VAR_4, VAR_12);


 FUNC_2(VAR_25, 0xffffffff, 0xffffffff, 0xff);
 for (VAR_24 = 0; VAR_24 < 7; ++VAR_24)
  if (FUNC_4(VAR_25, VAR_18 + VAR_24, VAR_16))
   goto err;

 for (VAR_24 = 0; VAR_24 < 4; ++VAR_24)
  if (FUNC_4(VAR_25, VAR_20 + VAR_24, VAR_16))
   goto err;

 FUNC_2(VAR_25, 0xfffffff9, 0xffffffff, 0xff);
 if (FUNC_4(VAR_25, VAR_19, VAR_16) ||
     FUNC_4(VAR_25, VAR_19 + 1, VAR_16) ||
     FUNC_4(VAR_25, VAR_19 + 4, VAR_16))
  goto err;

 FUNC_2(VAR_25, 0xfffffff9, 0xffff8007, 0xff);
 if (FUNC_4(VAR_25, VAR_19 + 5, VAR_16))
  goto err;


 FUNC_2(VAR_25, 0xf0000000, 0, 0);
 if (FUNC_4(VAR_25, VAR_22, VAR_16))
  goto err;

 return FUNC_3(VAR_23, VAR_21,
        VAR_17, VAR_16, 1);
err:
 return -VAR_13;
}
