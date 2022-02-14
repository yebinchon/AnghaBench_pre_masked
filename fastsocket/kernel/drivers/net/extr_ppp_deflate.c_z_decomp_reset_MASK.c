
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_deflate_state {int strm; scalar_t__ seqno; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct ppp_deflate_state *VAR_1 = (struct ppp_deflate_state *) VAR_0;

 VAR_1->seqno = 0;
 FUNC_0(&VAR_1->strm);
}
