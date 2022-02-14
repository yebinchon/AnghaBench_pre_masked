
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_16__ {int flags; int (* req_cb ) (TYPE_1__*) ;void* state; int (* done_cb ) (TYPE_1__*) ;struct TYPE_16__* next; int (* res_cb ) (TYPE_1__*) ;int (* init_cb ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_14()
{
 u32 VAR_11;
 while(!FUNC_0());

 VAR_11 = FUNC_2();
 if(VAR_6->flags&VAR_0) {
  if(VAR_11==0xDCD10002) VAR_11 = 0xDCD10003;
 }

 switch(VAR_11) {
  case 0xDCD10000:
   VAR_6->state = VAR_2;
   if(VAR_6->init_cb) VAR_6->init_cb(VAR_6);
   break;
  case 0xDCD10001:
   VAR_6->state = VAR_2;
   if(VAR_6->res_cb) VAR_6->res_cb(VAR_6);
   break;
  case 0xDCD10002:
   if(VAR_10==VAR_5) {
    if(VAR_9==VAR_6) {
     FUNC_3(0xCDD10003);
     while(FUNC_1());

     VAR_9 = ((void*)0);
     VAR_10 = VAR_4;
     if(VAR_6->res_cb) VAR_6->res_cb(VAR_6);
    } else {
     FUNC_3(0xCDD10001);
     while(FUNC_1());

     FUNC_4(VAR_6,VAR_9);
     VAR_6->flags = VAR_3;
     VAR_6 = VAR_9;
     VAR_9 = ((void*)0);
     VAR_10 = VAR_4;
    }
   } else if(VAR_6->next==((void*)0)) {
    if(VAR_7==VAR_6) {
     FUNC_3(0xCDD10003);
     while(FUNC_1());

     if(VAR_6->res_cb) VAR_6->res_cb(VAR_6);
    } else {
     FUNC_3(0xCDD10001);
     while(FUNC_1());

     FUNC_4(VAR_6,VAR_7);
     VAR_6->state = VAR_3;
     VAR_6 = VAR_7;
    }
   } else {
    FUNC_3(0xCDD10001);
    while(FUNC_1());

    FUNC_4(VAR_6,VAR_6->next);
    VAR_6->state = VAR_3;
    VAR_6 = VAR_6->next;
   }
   break;
  case 0xDCD10003:
   if(VAR_10==VAR_5) {
    if(VAR_6->done_cb) VAR_6->done_cb(VAR_6);
    FUNC_3(0xCDD10001);
    while(FUNC_1());

    FUNC_4(((void*)0),VAR_9);
    FUNC_5(VAR_6);

    VAR_6 = VAR_9;
    VAR_10 = VAR_4;
    VAR_9 = ((void*)0);
   } else if(VAR_6->next==((void*)0)) {
    if(VAR_7==VAR_6) {
     if(VAR_6->done_cb) VAR_6->done_cb(VAR_6);
     FUNC_3(0xCDD10002);
     while(FUNC_1());

     VAR_6->state = VAR_1;
     FUNC_5(VAR_6);
    }
   } else {
    if(VAR_6->done_cb) VAR_6->done_cb(VAR_6);

    FUNC_3(0xCDD10001);
    while(FUNC_1());

    VAR_6->state = VAR_1;
    FUNC_4(((void*)0),VAR_7);
    VAR_6 = VAR_7;
    FUNC_5(VAR_8);
   }
   break;
  case 0xDCD10004:
   if(VAR_6->req_cb) VAR_6->req_cb(VAR_6);
   break;
 }

}
