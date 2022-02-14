
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct dvb_ca_private {TYPE_1__* pub; } ;
struct TYPE_4__ {int (* read_attribute_mem ) (TYPE_1__*,int,int) ;} ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_ca_private *VAR_0, int VAR_1,
         int *VAR_2, int *VAR_3, int *VAR_4, u8 * VAR_5)
{
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = *VAR_2;


 if ((VAR_7 = VAR_0->pub->read_attribute_mem(VAR_0->pub, VAR_1, VAR_9)) < 0)
  return VAR_7;
 if (VAR_7 == 0xff) {
  FUNC_0("END OF CHAIN TUPLE type:0x%x\n", VAR_7);
  *VAR_2 += 2;
  *VAR_3 = VAR_7;
  *VAR_4 = 0;
  return 0;
 }
 if ((VAR_8 = VAR_0->pub->read_attribute_mem(VAR_0->pub, VAR_1, VAR_9 + 2)) < 0)
  return VAR_8;
 VAR_9 += 4;

 FUNC_0("TUPLE type:0x%x length:%i\n", VAR_7, VAR_8);


 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_5[VAR_6] = VAR_0->pub->read_attribute_mem(VAR_0->pub, VAR_1, VAR_9 + (VAR_6 * 2));
  FUNC_0("  0x%02x: 0x%02x %c\n",
   VAR_6, VAR_5[VAR_6] & 0xff,
   ((VAR_5[VAR_6] > 31) && (VAR_5[VAR_6] < 127)) ? VAR_5[VAR_6] : '.');
 }
 VAR_9 += (VAR_8 * 2);


 *VAR_3 = VAR_7;
 *VAR_4 = VAR_8;
 *VAR_2 = VAR_9;
 return 0;
}
