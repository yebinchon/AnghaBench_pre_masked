
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {unsigned int timeout; } ;
struct mpc_i2c {scalar_t__ base; TYPE_1__ adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct mpc_i2c*,unsigned int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct mpc_i2c*,int) ;

__attribute__((used)) static int FUNC_4(struct mpc_i2c *VAR_7, int VAR_8,
      u8 *VAR_9, int VAR_10, int VAR_11)
{
 unsigned VAR_12 = VAR_7->adap.timeout;
 int VAR_13, VAR_14;
 u32 VAR_15 = VAR_11 ? VAR_4 : 0;


 FUNC_3(VAR_7, VAR_1 | VAR_0 | VAR_2 | VAR_3 | VAR_15);

 FUNC_2((VAR_8 << 1) | 1, VAR_7->base + VAR_6);

 VAR_14 = FUNC_0(VAR_7, VAR_12, 1);
 if (VAR_14 < 0)
  return VAR_14;

 if (VAR_10) {
  if (VAR_10 == 1)
   FUNC_3(VAR_7, VAR_1 | VAR_0 | VAR_2 | VAR_5);
  else
   FUNC_3(VAR_7, VAR_1 | VAR_0 | VAR_2);

  FUNC_1(VAR_7->base + VAR_6);
 }

 for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
  VAR_14 = FUNC_0(VAR_7, VAR_12, 0);
  if (VAR_14 < 0)
   return VAR_14;


  if (VAR_13 == VAR_10 - 2)
   FUNC_3(VAR_7, VAR_1 | VAR_0 | VAR_2 | VAR_5);

  if (VAR_13 == VAR_10 - 1)
   FUNC_3(VAR_7, VAR_1 | VAR_0 | VAR_2 | VAR_3);
  VAR_9[VAR_13] = FUNC_1(VAR_7->base + VAR_6);
 }

 return VAR_10;
}
