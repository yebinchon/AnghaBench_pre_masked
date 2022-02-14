
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct slgt_info {unsigned char* tmp_rbuf; int tmp_rbuf_count; TYPE_1__* rbufs; } ;
struct TYPE_3__ {unsigned char* buf; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (struct slgt_info*,unsigned char*,int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;

__attribute__((used)) static int FUNC_3(struct slgt_info *VAR_2)
{
 unsigned char *VAR_3, *VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_2->rbufs[0])) {
  VAR_5 = FUNC_2(VAR_2->rbufs[0]);
  VAR_3 = VAR_2->rbufs[0].buf;
  VAR_4 = VAR_2->tmp_rbuf;

  for( ; VAR_5 ; VAR_5-=2, VAR_3+=2) {

   if (!(*(VAR_3+1) & (VAR_1 + VAR_0))) {
    *VAR_4 = *VAR_3;
    VAR_4++;
    VAR_2->tmp_rbuf_count++;
   }
  }
  FUNC_0(VAR_2, VAR_2->tmp_rbuf, VAR_2->tmp_rbuf_count, "rx");
  return 1;
 }
 return 0;
}
