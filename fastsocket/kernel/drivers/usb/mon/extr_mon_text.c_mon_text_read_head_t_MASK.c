
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_text_ptr {scalar_t__ cnt; scalar_t__ limit; scalar_t__ pbuf; } ;
struct mon_reader_text {int dummy; } ;
struct mon_event_text {int xfertype; int epnum; int devnum; int type; int tstamp; int id; scalar_t__ is_in; } ;





 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,char*,int ,int ,int ,char,char,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mon_reader_text *VAR_0,
 struct mon_text_ptr *VAR_1, const struct mon_event_text *VAR_2)
{
 char VAR_3, VAR_4;

 VAR_3 = (VAR_2->is_in ? 'i' : 'o');
 switch (VAR_2->xfertype) {
 case 128: VAR_4 = 'Z'; break;
 case 129: VAR_4 = 'I'; break;
 case 130: VAR_4 = 'C'; break;
 default: VAR_4 = 'B';
 }
 VAR_1->cnt += FUNC_0(VAR_1->pbuf + VAR_1->cnt, VAR_1->limit - VAR_1->cnt,
     "%lx %u %c %c%c:%03u:%02u",
     VAR_2->id, VAR_2->tstamp, VAR_2->type,
     VAR_4, VAR_3, VAR_2->devnum, VAR_2->epnum);
}
