
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v3020 {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_bit ) (struct v3020*,unsigned char) ;} ;


 int FUNC_0 (unsigned char) ;
 int FUNC_1 (struct v3020*,unsigned char) ;
 int FUNC_2 (struct v3020*,unsigned char) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct v3020 *VAR_0, unsigned char VAR_1,
   unsigned char VAR_2)
{
 int VAR_3;
 unsigned char VAR_4;

 VAR_4 = VAR_1;
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_0->ops->write_bit(VAR_0, (VAR_4 & 1));
  VAR_4 >>= 1;
  FUNC_3(1);
 }


 if (!FUNC_0(VAR_1)) {
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   VAR_0->ops->write_bit(VAR_0, (VAR_2 & 1));
   VAR_2 >>= 1;
   FUNC_3(1);
  }
 }
}
