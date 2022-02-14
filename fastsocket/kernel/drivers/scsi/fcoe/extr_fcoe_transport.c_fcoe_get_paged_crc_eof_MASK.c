
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data_len; int truesize; } ;
struct page {int dummy; } ;
struct fcoe_percpu_s {int crc_eof_offset; struct page* crc_eof_page; } ;
struct fcoe_crc_eof {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct sk_buff*,int ,struct page*,int,int) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct sk_buff *VAR_3, int VAR_4,
      struct fcoe_percpu_s *VAR_5)
{
 struct page *VAR_6;

 VAR_6 = VAR_5->crc_eof_page;
 if (!VAR_6) {
  VAR_6 = FUNC_0(VAR_1);
  if (!VAR_6)
   return -VAR_0;

  VAR_5->crc_eof_page = VAR_6;
  VAR_5->crc_eof_offset = 0;
 }

 FUNC_1(VAR_6);
 FUNC_3(VAR_3, FUNC_4(VAR_3)->nr_frags, VAR_6,
      VAR_5->crc_eof_offset, VAR_4);
 VAR_3->len += VAR_4;
 VAR_3->data_len += VAR_4;
 VAR_3->truesize += VAR_4;
 VAR_5->crc_eof_offset += sizeof(struct fcoe_crc_eof);

 if (VAR_5->crc_eof_offset >= VAR_2) {
  VAR_5->crc_eof_page = ((void*)0);
  VAR_5->crc_eof_offset = 0;
  FUNC_2(VAR_6);
 }

 return 0;
}
