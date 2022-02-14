
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {int tbuf_count; int tbufs; int rbuf_count; int rbufs; scalar_t__ bufs; } ;


 int FUNC_0 (struct slgt_info*,int ,int ) ;
 int FUNC_1 (struct slgt_info*) ;
 int FUNC_2 (struct slgt_info*) ;

__attribute__((used)) static void FUNC_3(struct slgt_info *VAR_0)
{
 if (VAR_0->bufs) {
  FUNC_0(VAR_0, VAR_0->rbufs, VAR_0->rbuf_count);
  FUNC_0(VAR_0, VAR_0->tbufs, VAR_0->tbuf_count);
  FUNC_1(VAR_0);
 }
 FUNC_2(VAR_0);
}
