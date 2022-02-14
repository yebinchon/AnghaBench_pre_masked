
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_text_ptr {scalar_t__ cnt; scalar_t__ limit; scalar_t__ pbuf; } ;
struct mon_reader_text {int dummy; } ;
struct mon_event_text {int length; scalar_t__ data_flag; int* data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,char*,...) ;

__attribute__((used)) static void FUNC_1(struct mon_reader_text *VAR_1,
    struct mon_text_ptr *VAR_2, const struct mon_event_text *VAR_3)
{
 int VAR_4, VAR_5;

 if ((VAR_4 = VAR_3->length) > 0) {
  if (VAR_3->data_flag == 0) {
   VAR_2->cnt += FUNC_0(VAR_2->pbuf + VAR_2->cnt, VAR_2->limit - VAR_2->cnt,
       " =");
   if (VAR_4 >= VAR_0)
    VAR_4 = VAR_0;
   for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
    if (VAR_5 % 4 == 0) {
     VAR_2->cnt += FUNC_0(VAR_2->pbuf + VAR_2->cnt,
         VAR_2->limit - VAR_2->cnt,
         " ");
    }
    VAR_2->cnt += FUNC_0(VAR_2->pbuf + VAR_2->cnt,
        VAR_2->limit - VAR_2->cnt,
        "%02x", VAR_3->data[VAR_5]);
   }
   VAR_2->cnt += FUNC_0(VAR_2->pbuf + VAR_2->cnt, VAR_2->limit - VAR_2->cnt,
       "\n");
  } else {
   VAR_2->cnt += FUNC_0(VAR_2->pbuf + VAR_2->cnt, VAR_2->limit - VAR_2->cnt,
       " %c\n", VAR_3->data_flag);
  }
 } else {
  VAR_2->cnt += FUNC_0(VAR_2->pbuf + VAR_2->cnt, VAR_2->limit - VAR_2->cnt, "\n");
 }
}
