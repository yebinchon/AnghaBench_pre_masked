
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_cmd_buffer {scalar_t__ state; int data; } ;
struct qeth_channel {size_t io_buf_no; struct qeth_cmd_buffer* iob; } ;
typedef size_t __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static struct qeth_cmd_buffer *FUNC_2(struct qeth_channel *VAR_5)
{
 __u8 VAR_6;

 FUNC_0(VAR_4, 6, "getbuff");
 VAR_6 = VAR_5->io_buf_no;
 do {
  if (VAR_5->iob[VAR_6].state == VAR_0) {
   VAR_5->iob[VAR_6].state = VAR_1;
   VAR_5->io_buf_no = (VAR_5->io_buf_no + 1) %
    VAR_3;
   FUNC_1(VAR_5->iob[VAR_6].data, 0, VAR_2);
   return VAR_5->iob + VAR_6;
  }
  VAR_6 = (VAR_6 + 1) % VAR_3;
 } while (VAR_6 != VAR_5->io_buf_no);

 return ((void*)0);
}
