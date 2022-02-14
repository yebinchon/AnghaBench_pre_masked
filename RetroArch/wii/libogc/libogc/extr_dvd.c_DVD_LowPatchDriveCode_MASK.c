
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int s32 ;
typedef int dvdcallbacklow ;
struct TYPE_2__ {int rel_date; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 scalar_t__ VAR_9 ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 int * VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_14 ;
 int * VAR_15 ;
 scalar_t__ VAR_16 ;

s32 FUNC_1(dvdcallbacklow VAR_17)
{
 VAR_5 = VAR_17;
 VAR_14 = 0;

 if(VAR_4.rel_date==VAR_0) {
  VAR_15 = VAR_6;
  VAR_16 = VAR_7;
 } else if((VAR_4.rel_date&0x0000ff00)==0x00000500) {
 } else if(VAR_4.rel_date==VAR_1) {
  VAR_15 = VAR_8;
  VAR_16 = VAR_9;
 } else if(VAR_4.rel_date==VAR_2) {
  VAR_15 = VAR_10;
  VAR_16 = VAR_11;
 } else if(VAR_4.rel_date==VAR_3) {
  VAR_15 = VAR_12;
  VAR_16 = VAR_13;
 } else if((VAR_4.rel_date&0x0000ff00)==0x00000900) {
 } else {
  VAR_15 = ((void*)0);
  VAR_16 = 0;
 }

 FUNC_0(0);
 return 1;
}
