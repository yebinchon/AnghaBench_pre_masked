
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fc_seq {int id; scalar_t__ cnt; scalar_t__ ssb_stat; } ;
struct fc_exch {struct fc_seq seq; } ;



__attribute__((used)) static struct fc_seq *FUNC_0(struct fc_exch *VAR_0, u8 VAR_1)
{
 struct fc_seq *VAR_2;

 VAR_2 = &VAR_0->seq;
 VAR_2->ssb_stat = 0;
 VAR_2->cnt = 0;
 VAR_2->id = VAR_1;
 return VAR_2;
}
