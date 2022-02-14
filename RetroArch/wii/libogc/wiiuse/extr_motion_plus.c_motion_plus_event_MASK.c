
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ubyte ;
struct motion_plus_t {int rx; int ry; int rz; int ext; int status; } ;



void FUNC_0(struct motion_plus_t* VAR_0, ubyte* VAR_1)
{
 VAR_0->rx = ((VAR_1[5] & 0xFC) << 6) | VAR_1[2];
 VAR_0->ry = ((VAR_1[4] & 0xFC) << 6) | VAR_1[1];
 VAR_0->rz = ((VAR_1[3] & 0xFC) << 6) | VAR_1[0];

 VAR_0->ext = VAR_1[4] & 0x1;
 VAR_0->status = (VAR_1[3] & 0x3) | ((VAR_1[4] & 0x2) << 1);
}
