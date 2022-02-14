
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cmac {unsigned int offset; int stats; struct adapter* adapter; } ;
struct addr_val_pair {int member_1; int member_0; } ;
struct TYPE_2__ {scalar_t__ rev; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (struct addr_val_pair const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 scalar_t__ VAR_5 ;

 int FUNC_1 (struct adapter*,char*,int ) ;

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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct cmac*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct adapter*,scalar_t__) ;
 int FUNC_8 (struct adapter*,scalar_t__,int,int) ;
 scalar_t__ FUNC_9 (struct adapter*,scalar_t__,int ,int,int,int) ;
 int FUNC_10 (struct adapter*,scalar_t__,int) ;
 int FUNC_11 (struct adapter*,struct addr_val_pair const*,int ,unsigned int) ;
 int FUNC_12 (struct cmac*) ;
 scalar_t__ FUNC_13 (struct adapter*) ;
 int FUNC_14 (struct cmac*) ;

int FUNC_15(struct cmac *VAR_21)
{
 static const struct addr_val_pair VAR_22[] = {
  {134, 0},
  {146, 0},
  {147, 132 | 131 |
   128 | 129 | 130},
  {136, 0},
  {137, 0},
  {145, 0},
  {144, 0},
  {143, 0},
  {142, 0},
  {141, 0},
  {140, 0},
  {139, 0},
  {138, 0},
  {135, 133}
 };
 u32 VAR_23;
 struct adapter *VAR_24 = VAR_21->adapter;
 unsigned int VAR_25 = VAR_21->offset;

 FUNC_10(VAR_24, VAR_0 + VAR_25, VAR_8);
 FUNC_7(VAR_24, VAR_0 + VAR_25);

 FUNC_11(VAR_24, VAR_22, FUNC_0(VAR_22), VAR_25);
 FUNC_8(VAR_24, VAR_1 + VAR_25,
    VAR_13 | VAR_7,
    FUNC_13(VAR_24) ? 0 : VAR_13);
 FUNC_8(VAR_24, VAR_5 + VAR_25, 0, VAR_16);

 if (FUNC_13(VAR_24)) {
  if (VAR_24->params.rev == 0) {
   FUNC_8(VAR_24, VAR_3 + VAR_25, 0,
      VAR_11 | VAR_15);
   if (FUNC_9(VAR_24, VAR_4 + VAR_25,
         VAR_6, 1, 5, 2)) {
    FUNC_1(VAR_24,
           "MAC %d XAUI SERDES CMU lock failed\n",
           FUNC_4(VAR_21));
    return -1;
   }
   FUNC_8(VAR_24, VAR_3 + VAR_25, 0,
      VAR_14);
  } else
   FUNC_14(VAR_21);
 }

 FUNC_8(VAR_24, VAR_2 + VAR_25,
    FUNC_2(VAR_20),
    FUNC_2(VAR_19) | VAR_12);
 VAR_23 = VAR_8 | VAR_18;

 if (FUNC_3(VAR_24))
  VAR_23 |= VAR_9;
 else if (FUNC_13(VAR_24))
  VAR_23 |= VAR_9 | VAR_17;
 else
  VAR_23 |= VAR_10 | VAR_17;
 FUNC_10(VAR_24, VAR_0 + VAR_25, VAR_23);
 FUNC_7(VAR_24, VAR_0 + VAR_25);
 if ((VAR_23 & VAR_9) && VAR_24->params.rev) {
  FUNC_6(1);
  FUNC_12(VAR_21);
 }

 FUNC_5(&VAR_21->stats, 0, sizeof(VAR_21->stats));
 return 0;
}
