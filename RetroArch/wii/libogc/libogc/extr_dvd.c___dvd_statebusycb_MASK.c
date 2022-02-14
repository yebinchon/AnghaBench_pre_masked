
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
struct TYPE_14__ {int state; int txdsize; int currtxsize; scalar_t__ len; int (* cb ) (int,TYPE_1__*) ;int offset; } ;
typedef TYPE_1__ dvdcmdblk ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,void (*) (int)) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int* VAR_10 ;
 int FUNC_9 (int,TYPE_1__*) ;
 int FUNC_10 (int,TYPE_1__*) ;
 int FUNC_11 (int,TYPE_1__*) ;
 int FUNC_12 (int,TYPE_1__*) ;
 int FUNC_13 (int,TYPE_1__*) ;
 int FUNC_14 (int,TYPE_1__*) ;
 int FUNC_15 (int,TYPE_1__*) ;
 int FUNC_16 (int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_17(s32 VAR_11)
{
 u32 VAR_12;
 dvdcmdblk *VAR_13;
 if(VAR_11==0x0010) {
  VAR_7->state = -1;
  FUNC_8();
  return;
 }
 if(VAR_4==0x0003 || VAR_4==0x000f) {
  if(VAR_11&0x0002) {
   VAR_7->state = -1;
   FUNC_4(0x01234567);
   return;
  }
  if(VAR_11==0x0001) {
   VAR_8 = 0;
   if(VAR_4==0x000f) VAR_9 = 1;
   if(FUNC_2(7)) return;

   VAR_7->state = 7;
   FUNC_6();
   return;
  }
 }
 if(VAR_11&0x0004) {

 }
 if(VAR_4==0x0001 || VAR_4==0x0004
  || VAR_4==0x0005 || VAR_4==0x000e) {
  VAR_7->txdsize += (VAR_7->currtxsize-VAR_10[6]);
 }
 if(VAR_11&0x0008) {
  VAR_3 = 0;
  VAR_13 = VAR_7;
  VAR_7 = &VAR_6;
  VAR_7->state = 10;
  if(VAR_13->cb) VAR_13->cb(-3,VAR_13);
  if(&FUNC_1) FUNC_1(0,VAR_13);
  FUNC_7();
  return;
 }
 if(VAR_11&0x0001) {
  VAR_8 = 0;
  if(FUNC_2(0)) return;

  if(VAR_4==0x0001 || VAR_4==0x0004
   || VAR_4==0x0005 || VAR_4==0x000e) {
   if(VAR_7->txdsize!=VAR_7->len) {
    FUNC_3(VAR_7);
    return;
   }
   VAR_13 = VAR_7;
   VAR_7 = &VAR_6;
   VAR_13->state = 0;
   if(VAR_13->cb) VAR_13->cb(VAR_13->txdsize,VAR_13);
   FUNC_7();
   return;
  }
  if(VAR_4==0x0009 || VAR_4==0x000a
   || VAR_4==0x000b || VAR_4==0x000c) {

   VAR_12 = VAR_10[8];
   if(VAR_4==0x000a || VAR_4==0x000b) VAR_12 <<= 2;

   VAR_13 = VAR_7;
   VAR_7 = &VAR_6;
   VAR_13->state = 0;
   if(VAR_13->cb) VAR_13->cb(VAR_12,VAR_13);
   FUNC_7();
   return;
  }
  if(VAR_4==0x0006) {
   if(!VAR_7->currtxsize) {
    if(VAR_10[8]&0x0001) {
     VAR_13 = VAR_7;
     VAR_7 = &VAR_6;
     VAR_13->state = 9;
     if(VAR_13->cb) VAR_13->cb(-2,VAR_13);
     FUNC_7();
     return;
    }
    VAR_2 = 0;
    VAR_7->currtxsize = 1;
    FUNC_0(0,VAR_7->len,VAR_7->offset,FUNC_17);
    return;
   }

   VAR_13 = VAR_7;
   VAR_7 = &VAR_6;
   VAR_13->state = 0;
   if(VAR_13->cb) VAR_13->cb(0,VAR_13);
   FUNC_7();
   return;
  }
  if(VAR_4==0x0010) {
   if(VAR_5&VAR_0) {
    VAR_13 = VAR_7;
    VAR_7 = &VAR_6;
    VAR_13->state = 0;
    if(VAR_13->cb) VAR_13->cb(VAR_1,VAR_13);
    FUNC_7();
    return;
   }
  }

  VAR_13 = VAR_7;
  VAR_7 = &VAR_6;
  VAR_13->state = 0;
  if(VAR_13->cb) VAR_13->cb(0,VAR_13);
  FUNC_7();
  return;
 }
 if(VAR_11==0x0002) {
  if(VAR_4==0x000e) {
   VAR_7->state = -1;
   FUNC_4(0x01234567);
   return;
  }
  if((VAR_4==0x0001 || VAR_4==0x0004
   || VAR_4==0x0005 || VAR_4==0x000e)
   && VAR_7->txdsize==VAR_7->len) {
    if(FUNC_2(0)) return;

    VAR_13 = VAR_7;
    VAR_7 = &VAR_6;
    VAR_13->state = 0;
    if(VAR_13->cb) VAR_13->cb(VAR_13->txdsize,VAR_13);
    FUNC_7();
    return;
  }
 }
 FUNC_5();
}
