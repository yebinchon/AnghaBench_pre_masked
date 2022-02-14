
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct circ_buf {int tail; int head; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct circ_buf *VAR_1)
{
 return FUNC_0(VAR_1->head, VAR_1->tail, VAR_0);
}
