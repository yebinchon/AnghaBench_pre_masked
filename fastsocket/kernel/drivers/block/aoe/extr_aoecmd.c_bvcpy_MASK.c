
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long ulong ;
struct sk_buff {int dummy; } ;
struct bio_vec {long bv_len; long bv_offset; int bv_page; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int,char*,long) ;

__attribute__((used)) static void
FUNC_2(struct bio_vec *VAR_0, ulong VAR_1, struct sk_buff *VAR_2, long VAR_3)
{
 ulong VAR_4;
 char *VAR_5;
 int VAR_6 = 0;
loop:
 VAR_4 = VAR_0->bv_len - (VAR_1 - VAR_0->bv_offset);
 if (VAR_4 > VAR_3)
  VAR_4 = VAR_3;
 VAR_5 = FUNC_0(VAR_0->bv_page) + VAR_1;
 FUNC_1(VAR_2, VAR_6, VAR_5, VAR_4);
 VAR_6 += VAR_4;
 VAR_3 -= VAR_4;
 if (VAR_3 <= 0)
  return;
 VAR_0++;
 VAR_1 = VAR_0->bv_offset;
 goto loop;
}
