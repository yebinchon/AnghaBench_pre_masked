
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct usbtxbuf {int * rpData; } ;
struct pbuf {scalar_t__ len; int payload; struct pbuf* next; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int openstate; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (scalar_t__,int ,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int * VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,struct usbtxbuf*) ;
 struct pbuf* FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (struct pbuf*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,int *,scalar_t__) ;

__attribute__((used)) static s32 FUNC_7(s32 VAR_7,void *VAR_8)
{
 u8 *VAR_9;
 u32 VAR_10;
 struct pbuf *VAR_11,*VAR_12;
 struct usbtxbuf *VAR_13 = (struct usbtxbuf*)VAR_8;

 if(VAR_4.openstate!=0x0002) return 0;

 if(VAR_7>0) {
  VAR_10 = VAR_7;
  VAR_11 = FUNC_4(VAR_1,VAR_10,VAR_0);
  if(VAR_11!=((void*)0)) {
   VAR_9 = VAR_13->rpData;
   for(VAR_12=VAR_11;VAR_12!=((void*)0) && VAR_10>0;VAR_12=VAR_12->next) {
    FUNC_6(VAR_12->payload,VAR_9,VAR_12->len);
    VAR_9 += VAR_12->len;
    VAR_10 -= VAR_12->len;
   }

   FUNC_1((u32)VAR_11,0,0,0,(u32)VAR_6,(u32)(&VAR_3[VAR_2]));
   FUNC_5(VAR_11);
  } else
   FUNC_0("__readbulkdataCB: Could not allocate memory for pbuf.\n");
 }
 FUNC_3(&VAR_5,VAR_13);

 return FUNC_2();
}
