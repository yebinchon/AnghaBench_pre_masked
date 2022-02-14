
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct scatterlist {scalar_t__ offset; } ;
struct msghdr {int msg_flags; } ;
struct kvec {unsigned int iov_len; scalar_t__ iov_base; } ;
struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {int (* sendpage ) (struct socket*,int ,unsigned int,unsigned int,int) ;struct socket* sock; } ;
struct iscsi_segment {unsigned int copied; unsigned int size; scalar_t__ total_copied; scalar_t__ total_size; scalar_t__ data; scalar_t__ sg_offset; struct scatterlist* sg; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_tcp_conn*,struct iscsi_segment*,int ,int) ;
 int FUNC_1 (struct iscsi_segment*) ;
 int FUNC_2 (struct socket*,struct msghdr*,struct kvec*,int,unsigned int) ;
 int FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct socket*,int ,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_5(struct iscsi_tcp_conn *VAR_1,
         struct iscsi_segment *VAR_2)
{
 struct iscsi_sw_tcp_conn *VAR_3 = VAR_1->dd_data;
 struct socket *VAR_4 = VAR_3->sock;
 unsigned int VAR_5 = 0;
 int VAR_6 = 0;

 while (!FUNC_0(VAR_1, VAR_2, 0, VAR_6)) {
  struct scatterlist *VAR_7;
  unsigned int VAR_8, VAR_9;
  int VAR_10 = 0;

  VAR_6 = 0;
  VAR_8 = VAR_2->copied;
  VAR_9 = VAR_2->size - VAR_8;

  if (VAR_2->total_copied + VAR_2->size < VAR_2->total_size)
   VAR_10 |= VAR_0;


  if (!VAR_2->data) {
   VAR_7 = VAR_2->sg;
   VAR_8 += VAR_2->sg_offset + VAR_7->offset;
   VAR_6 = VAR_3->sendpage(VAR_4, FUNC_3(VAR_7), VAR_8,
        VAR_9, VAR_10);
  } else {
   struct msghdr VAR_11 = { .msg_flags = VAR_10 };
   struct kvec VAR_12 = {
    .iov_base = VAR_2->data + VAR_8,
    .iov_len = VAR_9
   };

   VAR_6 = FUNC_2(VAR_4, &VAR_11, &VAR_12, 1, VAR_9);
  }

  if (VAR_6 < 0) {
   FUNC_1(VAR_2);
   return VAR_6;
  }
  VAR_5 += VAR_6;
 }
 return VAR_5;
}
