
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgdt3305_state {int dummy; } ;
typedef enum lgdt3305_tp_valid_polarity { ____Placeholder_lgdt3305_tp_valid_polarity } lgdt3305_tp_valid_polarity ;
typedef enum lgdt3305_tp_clock_edge { ____Placeholder_lgdt3305_tp_clock_edge } lgdt3305_tp_clock_edge ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct lgdt3305_state*,int ,int*) ;
 int FUNC_3 (struct lgdt3305_state*) ;
 int FUNC_4 (struct lgdt3305_state*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct lgdt3305_state *VAR_1,
           enum lgdt3305_tp_clock_edge VAR_2,
           enum lgdt3305_tp_valid_polarity VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 FUNC_0("edge = %d, valid = %d\n", VAR_2, VAR_3);

 VAR_5 = FUNC_2(VAR_1, VAR_0, &VAR_4);
 if (FUNC_1(VAR_5))
  goto fail;

 VAR_4 &= ~0x09;

 if (VAR_2)
  VAR_4 |= 0x08;
 if (VAR_3)
  VAR_4 |= 0x01;

 VAR_5 = FUNC_4(VAR_1, VAR_0, VAR_4);
 if (FUNC_1(VAR_5))
  goto fail;

 VAR_5 = FUNC_3(VAR_1);
fail:
 return VAR_5;
}
