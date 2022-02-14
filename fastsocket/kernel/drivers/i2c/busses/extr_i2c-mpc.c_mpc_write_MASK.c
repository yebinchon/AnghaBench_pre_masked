
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
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mpc_i2c*,unsigned int,int) ;
 int FUNC_1 (int const,scalar_t__) ;
 int FUNC_2 (struct mpc_i2c*,int) ;

__attribute__((used)) static int FUNC_3(struct mpc_i2c *VAR_6, int VAR_7,
       const u8 *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 unsigned VAR_13 = VAR_6->adap.timeout;
 u32 VAR_14 = VAR_10 ? VAR_4 : 0;


 FUNC_2(VAR_6, VAR_1 | VAR_0 | VAR_2 | VAR_3 | VAR_14);

 FUNC_1((VAR_7 << 1), VAR_6->base + VAR_5);

 VAR_12 = FUNC_0(VAR_6, VAR_13, 1);
 if (VAR_12 < 0)
  return VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {

  FUNC_1(VAR_8[VAR_11], VAR_6->base + VAR_5);

  VAR_12 = FUNC_0(VAR_6, VAR_13, 1);
  if (VAR_12 < 0)
   return VAR_12;
 }

 return 0;
}
