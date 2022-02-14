
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tx_lpi_timer; scalar_t__ eee_enabled; scalar_t__ tx_lpi_enabled; } ;
struct tg3 {TYPE_1__ eee; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (struct tg3*) ;
 scalar_t__ FUNC_1 (struct tg3*) ;
 scalar_t__ FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_21)
{
 u32 VAR_22;

 VAR_22 = VAR_18 |
       VAR_19;
 if (FUNC_1(VAR_21) == VAR_1)
  VAR_22 |= VAR_16;

 FUNC_3(VAR_17, VAR_22);

 FUNC_3(VAR_12,
        VAR_13);

 VAR_22 = VAR_8 |
       (VAR_21->eee.tx_lpi_enabled ? VAR_10 : 0) |
       VAR_9 |
       VAR_7;

 if (FUNC_0(VAR_21) != VAR_0)
  VAR_22 |= VAR_11;

 if (FUNC_2(VAR_21, VAR_2))
  VAR_22 |= VAR_6;

 FUNC_3(VAR_20, VAR_21->eee.eee_enabled ? VAR_22 : 0);

 FUNC_3(VAR_14,
        VAR_3 |
        (VAR_21->eee.tx_lpi_timer & 0xffff));

 FUNC_3(VAR_15,
        VAR_4 |
        VAR_5);
}
