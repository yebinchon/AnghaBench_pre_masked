
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int type; int data2; int data1; int data0; } ;
typedef TYPE_1__ pmi_message_t ;
struct TYPE_5__ {int msg_mutex; int * completion; int pmi_spinlock; scalar_t__ pmi_reg; TYPE_1__ msg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_3__* VAR_7 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,int ) ;

int FUNC_8(pmi_message_t VAR_8)
{
 unsigned long VAR_9;
 FUNC_0(VAR_6);

 if (!VAR_7)
  return -VAR_0;

 FUNC_2(&VAR_7->msg_mutex);

 VAR_7->msg = VAR_8;
 FUNC_4("pmi_send_message: msg is %08x\n", *(u32*)&VAR_8);

 VAR_7->completion = &VAR_6;

 FUNC_5(&VAR_7->pmi_spinlock, VAR_9);
 FUNC_1(VAR_8.data0, VAR_7->pmi_reg + VAR_2);
 FUNC_1(VAR_8.data1, VAR_7->pmi_reg + VAR_3);
 FUNC_1(VAR_8.data2, VAR_7->pmi_reg + VAR_4);
 FUNC_1(VAR_8.type, VAR_7->pmi_reg + VAR_5);
 FUNC_6(&VAR_7->pmi_spinlock, VAR_9);

 FUNC_4("pmi_send_message: wait for completion\n");

 FUNC_7(VAR_7->completion,
        VAR_1);

 VAR_7->completion = ((void*)0);

 FUNC_3(&VAR_7->msg_mutex);

 return 0;
}
