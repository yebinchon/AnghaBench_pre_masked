
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int r; int g; int b; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int,int,int) ;
 int* VAR_1 ;

FUNC_1()
{
 int VAR_2;
 for(VAR_2=0;VAR_2<64;VAR_2++)
 {


  FUNC_0("{0x%02x, 0x%02x, 0x%02x},\n",VAR_0[VAR_1[VAR_2]&0x3F].r,
     VAR_0[VAR_1[VAR_2]&0x3F].g,
     VAR_0[VAR_1[VAR_2]&0x3F].b);
 }
}
