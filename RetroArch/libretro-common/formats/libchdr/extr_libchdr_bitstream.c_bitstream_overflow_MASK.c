
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitstream {int doffset; int bits; int dlength; } ;



int FUNC_0(struct bitstream* VAR_0) { return ((VAR_0->doffset - VAR_0->bits / 8) > VAR_0->dlength); }
