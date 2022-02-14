
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
typedef int u32 ;
struct pbuf {scalar_t__ ref; scalar_t__ flags; struct pbuf* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct pbuf*) ;
 int FUNC_3 (struct pbuf*) ;
 int VAR_3 ;
 int VAR_4 ;

u8_t FUNC_4(struct pbuf *VAR_5)
{
 u8_t VAR_6;
 u32 VAR_7;
 struct pbuf *VAR_8;

 if(VAR_5==((void*)0)) return 0;

 VAR_6 = 0;

 FUNC_0(VAR_7);
 while(VAR_5!=((void*)0)) {
  VAR_5->ref--;
  if(VAR_5->ref==0) {
   VAR_8 = VAR_5->next;
   if(VAR_5->flags==VAR_0) {
    FUNC_2(&VAR_3,VAR_5);
   } else if(VAR_5->flags==VAR_2 || VAR_5->flags==VAR_1) {
    FUNC_2(&VAR_4,VAR_5);
   } else {
    FUNC_3(VAR_5);
   }
   VAR_6++;
   VAR_5 = VAR_8;
  } else
   VAR_5 = ((void*)0);
 }
 FUNC_1(VAR_7);

 return VAR_6;
}
