
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mon_text_ptr {scalar_t__ cnt; scalar_t__ limit; scalar_t__ pbuf; } ;
struct mon_reader_text {int dummy; } ;
struct mon_event_text {char setup_flag; int* setup; char status; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,char*,char,...) ;

__attribute__((used)) static void FUNC_1(struct mon_reader_text *VAR_0,
 struct mon_text_ptr *VAR_1, const struct mon_event_text *VAR_2)
{

 if (VAR_2->setup_flag == 0) {
  VAR_1->cnt += FUNC_0(VAR_1->pbuf + VAR_1->cnt, VAR_1->limit - VAR_1->cnt,
      " s %02x %02x %04x %04x %04x",
      VAR_2->setup[0],
      VAR_2->setup[1],
      (VAR_2->setup[3] << 8) | VAR_2->setup[2],
      (VAR_2->setup[5] << 8) | VAR_2->setup[4],
      (VAR_2->setup[7] << 8) | VAR_2->setup[6]);
 } else if (VAR_2->setup_flag != '-') {
  VAR_1->cnt += FUNC_0(VAR_1->pbuf + VAR_1->cnt, VAR_1->limit - VAR_1->cnt,
      " %c __ __ ____ ____ ____", VAR_2->setup_flag);
 } else {
  VAR_1->cnt += FUNC_0(VAR_1->pbuf + VAR_1->cnt, VAR_1->limit - VAR_1->cnt,
      " %d", VAR_2->status);
 }
}
