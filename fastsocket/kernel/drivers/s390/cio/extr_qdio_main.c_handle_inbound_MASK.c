
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ack_count; int ack_start; scalar_t__ polling; } ;
struct TYPE_4__ {TYPE_1__ in; } ;
struct qdio_q {int nr_buf_used; TYPE_2__ u; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (int,int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct qdio_q*) ;
 scalar_t__ FUNC_5 (struct qdio_q*) ;
 int FUNC_6 (struct qdio_q*) ;
 int FUNC_7 (struct qdio_q*,int ) ;
 int FUNC_8 (struct qdio_q*,int,int ,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static int FUNC_10(struct qdio_q *VAR_3, unsigned int VAR_4,
     int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_7(VAR_3, VAR_2);

 if (!VAR_3->u.in.polling)
  goto set;


 if (VAR_6 == VAR_0) {

  VAR_3->u.in.polling = 0;
  VAR_3->u.in.ack_count = 0;
  goto set;
 } else if (FUNC_3(VAR_3->u.in.ack_start, VAR_5, VAR_6)) {
  if (FUNC_4(VAR_3)) {

   VAR_8 = FUNC_1(VAR_5, VAR_6);
   VAR_8 = FUNC_9(VAR_8, VAR_3->u.in.ack_start);
   VAR_3->u.in.ack_count -= VAR_8;
   if (VAR_3->u.in.ack_count <= 0) {
    VAR_3->u.in.polling = 0;
    VAR_3->u.in.ack_count = 0;
    goto set;
   }
   VAR_3->u.in.ack_start = FUNC_1(VAR_3->u.in.ack_start, VAR_8);
  }
  else

   VAR_3->u.in.polling = 0;
 }

set:
 VAR_6 = FUNC_8(VAR_3, VAR_5, VAR_1, VAR_6);

 VAR_7 = FUNC_2(VAR_6, &VAR_3->nr_buf_used) - VAR_6;
 FUNC_0(VAR_7 + VAR_6 > VAR_0);

 if (FUNC_5(VAR_3))
  return FUNC_6(VAR_3);

 return 0;
}
