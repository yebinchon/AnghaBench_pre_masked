
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w8001_coord {int rdy; int tsw; int f1; int f2; int x; int y; int pen_pressure; int tilt_x; int tilt_y; } ;


 int FUNC_0 (struct w8001_coord*,int ,int) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_0, struct w8001_coord *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->rdy = VAR_0[0] & 0x20;
 VAR_1->tsw = VAR_0[0] & 0x01;
 VAR_1->f1 = VAR_0[0] & 0x02;
 VAR_1->f2 = VAR_0[0] & 0x04;

 VAR_1->x = (VAR_0[1] & 0x7F) << 9;
 VAR_1->x |= (VAR_0[2] & 0x7F) << 2;
 VAR_1->x |= (VAR_0[6] & 0x60) >> 5;

 VAR_1->y = (VAR_0[3] & 0x7F) << 9;
 VAR_1->y |= (VAR_0[4] & 0x7F) << 2;
 VAR_1->y |= (VAR_0[6] & 0x18) >> 3;

 VAR_1->pen_pressure = VAR_0[5] & 0x7F;
 VAR_1->pen_pressure |= (VAR_0[6] & 0x07) << 7 ;

 VAR_1->tilt_x = VAR_0[7] & 0x7F;
 VAR_1->tilt_y = VAR_0[8] & 0x7F;
}
