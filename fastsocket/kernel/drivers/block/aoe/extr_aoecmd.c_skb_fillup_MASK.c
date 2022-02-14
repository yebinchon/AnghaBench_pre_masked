
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct sk_buff {int dummy; } ;
struct bio_vec {scalar_t__ bv_len; scalar_t__ bv_offset; int bv_page; } ;


 int FUNC_0 (struct sk_buff*,int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct sk_buff *VAR_0, struct bio_vec *VAR_1, ulong VAR_2, ulong VAR_3)
{
 int VAR_4 = 0;
 ulong VAR_5;
loop:
 VAR_5 = VAR_1->bv_len - (VAR_2 - VAR_1->bv_offset);
 if (VAR_5 > VAR_3)
  VAR_5 = VAR_3;
 FUNC_0(VAR_0, VAR_4++, VAR_1->bv_page, VAR_2, VAR_5);
 VAR_3 -= VAR_5;
 if (VAR_3 <= 0)
  return;
 VAR_1++;
 VAR_2 = VAR_1->bv_offset;
 goto loop;
}
