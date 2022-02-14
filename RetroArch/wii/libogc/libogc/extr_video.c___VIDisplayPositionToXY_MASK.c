
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
struct TYPE_4__ {int nonInter; } ;
struct TYPE_3__ {int hlw; int nhlines; int prbOdd; int equ; int psbOdd; int prbEven; int psbEven; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_0(s32 VAR_2,s32 VAR_3,s32 *VAR_4,s32 *VAR_5)
{
 u32 VAR_6,VAR_7;
 u32 VAR_8,VAR_9;

 VAR_6 = (VAR_2-1);
 VAR_7 = (VAR_3-1);
 VAR_8 = ((VAR_7<<1)+(VAR_6/VAR_1->hlw));

 *VAR_4 = (s32)VAR_6;
 if(VAR_0.nonInter==0x0000) {
  if(VAR_8<VAR_1->nhlines) {
   VAR_9 = VAR_1->prbOdd+(VAR_1->equ*3);
   if(VAR_8>=VAR_9) {
    VAR_9 = (VAR_1->nhlines-VAR_1->psbOdd);
    if(VAR_8<VAR_9) {
     *VAR_5 = (s32)(((VAR_8-(VAR_1->equ*3))-VAR_1->prbOdd)&~0x01);
    } else
     *VAR_5 = -1;
   } else
    *VAR_5 = -1;
  } else {
   VAR_8 -= VAR_1->psbOdd;
   VAR_9 = (VAR_1->prbEven+(VAR_1->equ*3));
   if(VAR_8>=VAR_9) {
    VAR_9 = (VAR_1->nhlines-VAR_1->psbEven);
    if(VAR_8<VAR_9) {
     *VAR_5 = (s32)((((VAR_8-(VAR_1->equ*3))-VAR_1->prbEven)&~0x01)+1);
    } else
     *VAR_5 = -1;
   } else
    *VAR_5 = -1;
  }
 } else if(VAR_0.nonInter==0x0001) {
  if(VAR_8>=VAR_1->nhlines) VAR_8 -= VAR_1->nhlines;

  VAR_9 = (VAR_1->prbOdd+(VAR_1->equ*3));
  if(VAR_8>=VAR_9) {
   VAR_9 = (VAR_1->nhlines-VAR_1->psbOdd);
   if(VAR_8<VAR_9) {
    *VAR_5 = (s32)(((VAR_8-(VAR_1->equ*3))-VAR_1->prbOdd)&~0x01);
   } else
    *VAR_5 = -1;
  } else
   *VAR_5 = -1;
 } else if(VAR_0.nonInter==0x0002) {
  if(VAR_8<VAR_1->nhlines) {
   VAR_9 = VAR_1->prbOdd+(VAR_1->equ*3);
   if(VAR_8>=VAR_9) {
    VAR_9 = (VAR_1->nhlines-VAR_1->psbOdd);
    if(VAR_8<VAR_9) {
     *VAR_5 = (s32)((VAR_8-(VAR_1->equ*3))-VAR_1->prbOdd);
    } else
     *VAR_5 = -1;
   } else
    *VAR_5 = -1;
  } else {
   VAR_8 -= VAR_1->psbOdd;
   VAR_9 = (VAR_1->prbEven+(VAR_1->equ*3));
   if(VAR_8>=VAR_9) {
    VAR_9 = (VAR_1->nhlines-VAR_1->psbEven);
    if(VAR_8<VAR_9) {
     *VAR_5 = (s32)(((VAR_8-(VAR_1->equ*3))-VAR_1->prbEven)&~0x01);
    } else
     *VAR_5 = -1;
   } else
    *VAR_5 = -1;
  }
 }
}
