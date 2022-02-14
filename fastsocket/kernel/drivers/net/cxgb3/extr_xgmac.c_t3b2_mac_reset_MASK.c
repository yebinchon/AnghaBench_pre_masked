
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct cmac {unsigned int offset; struct adapter* adapter; } ;
struct TYPE_2__ {scalar_t__ rev; } ;
struct adapter {TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct adapter*,char*,int) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct cmac*) ;
 int FUNC_3 (int) ;
 unsigned int FUNC_4 (struct adapter*,unsigned int) ;
 int FUNC_5 (struct adapter*,scalar_t__,int,int) ;
 scalar_t__ FUNC_6 (struct adapter*,scalar_t__,int,int,int,int) ;
 int FUNC_7 (struct adapter*,unsigned int,unsigned int) ;
 int FUNC_8 (struct cmac*) ;
 scalar_t__ FUNC_9 (struct adapter*) ;

__attribute__((used)) static int FUNC_10(struct cmac *VAR_21)
{
 struct adapter *VAR_22 = VAR_21->adapter;
 unsigned int VAR_23 = VAR_21->offset, VAR_24;
 int VAR_25 = FUNC_2(VAR_21);
 u32 VAR_26;

 if (!FUNC_2(VAR_21))
  FUNC_5(VAR_22, VAR_0, VAR_15, 0);
 else
  FUNC_5(VAR_22, VAR_0, VAR_16, 0);


 FUNC_5(VAR_22, VAR_0, VAR_10, 0);

 FUNC_5(VAR_22, VAR_7 + VAR_23, VAR_19, 0);

 FUNC_7(VAR_22, VAR_4 + VAR_23, VAR_13);
 FUNC_4(VAR_22, VAR_4 + VAR_23);


 FUNC_7(VAR_22, VAR_1, VAR_3 + VAR_25);
 VAR_24 = FUNC_4(VAR_22, VAR_3 + VAR_25);

 FUNC_3(10);


 FUNC_7(VAR_22, VAR_1, VAR_3 + VAR_25);
 FUNC_7(VAR_22, VAR_2, 0xc0000011);



 if (FUNC_6(VAR_22, VAR_6 + VAR_23,
       0x80000000, 1, 1000, 2)) {
  FUNC_0(VAR_22, "MAC %d Rx fifo drain failed\n",
         FUNC_2(VAR_21));
  return -1;
 }

 FUNC_7(VAR_22, VAR_4 + VAR_23, 0);
 FUNC_4(VAR_22, VAR_4 + VAR_23);

 VAR_26 = VAR_13;
 if (FUNC_1(VAR_22))
  VAR_26 |= VAR_14;
 else if (FUNC_9(VAR_22))
  VAR_26 |= VAR_14 | VAR_20;
 else
  VAR_26 |= VAR_17 | VAR_20;
 FUNC_7(VAR_22, VAR_4 + VAR_23, VAR_26);
 FUNC_4(VAR_22, VAR_4 + VAR_23);
 if ((VAR_26 & VAR_14) && VAR_22->params.rev) {
  FUNC_3(1);
  FUNC_8(VAR_21);
 }
 FUNC_7(VAR_22, VAR_5 + VAR_23,
       VAR_8 | VAR_9 |
       VAR_18 | VAR_12 | VAR_11);


 FUNC_7(VAR_22, VAR_1, VAR_3 + VAR_25);
 FUNC_7(VAR_22, VAR_2, VAR_24);

 if (!VAR_25)
  FUNC_5(VAR_22, VAR_0, 0, VAR_15);
 else
  FUNC_5(VAR_22, VAR_0, 0, VAR_16);


 FUNC_5(VAR_22, VAR_0, VAR_10, 1);


 FUNC_5(VAR_22, VAR_0, VAR_10, 1);

 return 0;
}
