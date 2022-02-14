
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mc5 {unsigned int tcam_size; scalar_t__ mode; int parity_enabled; int part_type; struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adapter*,char*,...) ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;


 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct mc5*) ;
 int FUNC_3 (struct mc5*) ;
 int FUNC_4 (struct mc5*) ;
 int FUNC_5 (struct mc5*) ;
 unsigned int FUNC_6 (struct adapter*,int ) ;
 scalar_t__ FUNC_7 (struct adapter*,int ,int ,int,int,int ) ;
 int FUNC_8 (struct adapter*,int ,unsigned int) ;

int FUNC_9(struct mc5 *VAR_12, unsigned int VAR_13, unsigned int VAR_14,
  unsigned int VAR_15)
{
 u32 VAR_16;
 int VAR_17;
 unsigned int VAR_18 = VAR_12->tcam_size;
 struct adapter *VAR_19 = VAR_12->adapter;

 if (!VAR_18)
  return 0;

 if (VAR_15 > VAR_10 || VAR_15 + VAR_13 + VAR_14 > VAR_18)
  return -VAR_6;


 VAR_16 = FUNC_6(VAR_19, VAR_0) & ~VAR_7;
 VAR_16 |= FUNC_1(VAR_12->mode == VAR_11) | VAR_9;
 FUNC_8(VAR_19, VAR_0, VAR_16);
 if (FUNC_7(VAR_19, VAR_0, VAR_8, 1, 500, 0)) {
  FUNC_0(VAR_19, "TCAM reset timed out\n");
  return -1;
 }

 FUNC_8(VAR_19, VAR_4, VAR_18 - VAR_15);
 FUNC_8(VAR_19, VAR_3,
       VAR_18 - VAR_15 - VAR_14);
 FUNC_8(VAR_19, VAR_5,
       VAR_18 - VAR_15 - VAR_14 - VAR_13);

 VAR_12->parity_enabled = 1;


 FUNC_8(VAR_19, VAR_1, 0);
 FUNC_8(VAR_19, VAR_2, 0);

 FUNC_5(VAR_12);

 switch (VAR_12->part_type) {
 case 128:
  VAR_17 = FUNC_3(VAR_12);
  break;
 case 129:
  VAR_17 = FUNC_2(VAR_12);
  break;
 default:
  FUNC_0(VAR_19, "Unsupported TCAM type %d\n", VAR_12->part_type);
  VAR_17 = -VAR_6;
  break;
 }

 FUNC_4(VAR_12);
 return VAR_17;
}
