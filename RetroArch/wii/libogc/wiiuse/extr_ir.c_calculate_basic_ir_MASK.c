
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ubyte ;
struct TYPE_2__ {struct ir_dot_t* dot; } ;
struct wiimote_t {int orient; TYPE_1__ ir; } ;
struct ir_dot_t {int rx; int ry; int visible; scalar_t__ size; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct wiimote_t*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;

void FUNC_3(struct wiimote_t* VAR_1, ubyte* VAR_2) {
 struct ir_dot_t* VAR_3 = VAR_1->ir.dot;
 int VAR_4;

 VAR_3[0].rx = 1023 - (VAR_2[0] | ((VAR_2[2] & 0x30) << 4));
 VAR_3[0].ry = VAR_2[1] | ((VAR_2[2] & 0xC0) << 2);

 VAR_3[1].rx = 1023 - (VAR_2[3] | ((VAR_2[2] & 0x03) << 8));
 VAR_3[1].ry = VAR_2[4] | ((VAR_2[2] & 0x0C) << 6);

 VAR_3[2].rx = 1023 - (VAR_2[5] | ((VAR_2[7] & 0x30) << 4));
 VAR_3[2].ry = VAR_2[6] | ((VAR_2[7] & 0xC0) << 2);

 VAR_3[3].rx = 1023 - (VAR_2[8] | ((VAR_2[7] & 0x03) << 8));
 VAR_3[3].ry = VAR_2[9] | ((VAR_2[7] & 0x0C) << 6);


 for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
  VAR_3[VAR_4].rx = FUNC_0(VAR_3[VAR_4].rx);
  VAR_3[VAR_4].ry = FUNC_0(VAR_3[VAR_4].ry);

  if (VAR_3[VAR_4].ry == 1023)
   VAR_3[VAR_4].visible = 0;
  else {
   VAR_3[VAR_4].visible = 1;
   VAR_3[VAR_4].size = 0;
  }
 }

 FUNC_2(&VAR_1->ir,&VAR_1->orient,FUNC_1(VAR_1, VAR_0));

}
