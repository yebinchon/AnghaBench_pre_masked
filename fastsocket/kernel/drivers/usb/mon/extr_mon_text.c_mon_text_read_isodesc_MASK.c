
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_text_ptr {scalar_t__ cnt; scalar_t__ limit; scalar_t__ pbuf; } ;
struct mon_reader_text {int dummy; } ;
struct mon_iso_desc {int status; int offset; int length; } ;
struct mon_event_text {int numdesc; struct mon_iso_desc* isodesc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,char*,int,...) ;

__attribute__((used)) static void FUNC_1(struct mon_reader_text *VAR_1,
 struct mon_text_ptr *VAR_2, const struct mon_event_text *VAR_3)
{
 int VAR_4;
 int VAR_5;
 const struct mon_iso_desc *VAR_6;

 VAR_2->cnt += FUNC_0(VAR_2->pbuf + VAR_2->cnt, VAR_2->limit - VAR_2->cnt,
     " %d", VAR_3->numdesc);
 VAR_4 = VAR_3->numdesc;
 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;
 if (VAR_4 < 0)
  VAR_4 = 0;
 VAR_6 = VAR_3->isodesc;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_2->cnt += FUNC_0(VAR_2->pbuf + VAR_2->cnt, VAR_2->limit - VAR_2->cnt,
      " %d:%u:%u", VAR_6->status, VAR_6->offset, VAR_6->length);
  VAR_6++;
 }
}
