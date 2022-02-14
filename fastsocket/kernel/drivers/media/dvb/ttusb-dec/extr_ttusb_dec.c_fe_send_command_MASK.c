
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ttusb_dec {int dummy; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_2__ {struct ttusb_dec* priv; } ;


 int FUNC_0 (struct ttusb_dec*,int const,int,int const*,int*,int *) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_0, const u8 VAR_1,
      int VAR_2, const u8 VAR_3[],
      int *VAR_4, u8 VAR_5[])
{
 struct ttusb_dec* VAR_6 = VAR_0->dvb->priv;
 return FUNC_0(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
