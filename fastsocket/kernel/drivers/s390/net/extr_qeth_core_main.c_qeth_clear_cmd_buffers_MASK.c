
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_channel {scalar_t__ io_buf_no; scalar_t__ buf_no; int * iob; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_channel*,int *) ;

void FUNC_1(struct qeth_channel *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1, &VAR_1->iob[VAR_2]);
 VAR_1->buf_no = 0;
 VAR_1->io_buf_no = 0;
}
