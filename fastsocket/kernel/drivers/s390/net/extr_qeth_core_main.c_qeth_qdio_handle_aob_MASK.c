
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_qdio_out_buffer {int q; int * aob; int state; } ;
struct qeth_card {int dummy; } ;
struct qaob {scalar_t__ aorc; scalar_t__ user1; } ;
typedef enum iucv_tx_notify { ____Placeholder_iucv_tx_notify } iucv_tx_notify ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (struct qaob*) ;
 int FUNC_7 (int ,struct qeth_qdio_out_buffer*,int ) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (int ,struct qeth_qdio_out_buffer*,int) ;

__attribute__((used)) static inline void FUNC_10(struct qeth_card *VAR_7,
  unsigned long VAR_8) {
 struct qaob *VAR_9;
 struct qeth_qdio_out_buffer *VAR_10;
 enum iucv_tx_notify VAR_11;

 VAR_9 = (struct qaob *) FUNC_5(VAR_8);
 VAR_10 = (struct qeth_qdio_out_buffer *) VAR_9->user1;

 FUNC_0(VAR_10 == ((void*)0));

 if (FUNC_2(&VAR_10->state, VAR_3,
      VAR_1) == VAR_3) {
  VAR_11 = VAR_6;
 } else {
  FUNC_0(FUNC_3(&VAR_10->state) != VAR_2);
  FUNC_4(&VAR_10->state, VAR_1);
  VAR_11 = VAR_5;
 }

 if (VAR_9->aorc != 0) {
  FUNC_1(VAR_4, 2, "aorc%02X", VAR_9->aorc);
  VAR_11 = FUNC_8(VAR_9->aorc, 1);
 }
 FUNC_9(VAR_10->q, VAR_10, VAR_11);

 VAR_10->aob = ((void*)0);
 FUNC_7(VAR_10->q, VAR_10,
     VAR_0);


 FUNC_6(VAR_9);
}
