
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ invert6; scalar_t__ invert4; scalar_t__ enabled; int entries; } ;
struct TYPE_7__ {void* state; } ;
struct TYPE_6__ {void* state; } ;
struct TYPE_5__ {void* state; } ;
struct qeth_card {int close_dev_work; int buffer_reclaim_work; TYPE_4__ ipato; int wait_q; int cmd_waiter_list; int * ip_tbd_list; int ip_list; int kernel_thread_starter; scalar_t__ thread_running_mask; scalar_t__ thread_allowed_mask; scalar_t__ thread_start_mask; int discipline_mutex; int conf_mutex; int thread_mask_lock; int ip_lock; int lock; int * vlangrp; int mclock; int vlanlock; int * dev; scalar_t__ read_or_write_problem; scalar_t__ lan_online; int state; TYPE_3__ data; TYPE_2__ write; TYPE_1__ read; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int,struct qeth_card**,int) ;
 int FUNC_4 (int ,int,char*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct qeth_card*) ;
 int FUNC_8 (struct qeth_card*) ;
 int VAR_5 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct qeth_card *VAR_6)
{

 FUNC_4(VAR_2, 2, "setupcrd");
 FUNC_3(VAR_2, 2, &VAR_6, sizeof(void *));

 VAR_6->read.state = VAR_1;
 VAR_6->write.state = VAR_1;
 VAR_6->data.state = VAR_1;
 VAR_6->state = VAR_0;
 VAR_6->lan_online = 0;
 VAR_6->read_or_write_problem = 0;
 VAR_6->dev = ((void*)0);
 FUNC_9(&VAR_6->vlanlock);
 FUNC_9(&VAR_6->mclock);
 VAR_6->vlangrp = ((void*)0);
 FUNC_9(&VAR_6->lock);
 FUNC_9(&VAR_6->ip_lock);
 FUNC_9(&VAR_6->thread_mask_lock);
 FUNC_6(&VAR_6->conf_mutex);
 FUNC_6(&VAR_6->discipline_mutex);
 VAR_6->thread_start_mask = 0;
 VAR_6->thread_allowed_mask = 0;
 VAR_6->thread_running_mask = 0;
 FUNC_2(&VAR_6->kernel_thread_starter, VAR_5);
 FUNC_1(&VAR_6->ip_list);
 FUNC_1(VAR_6->ip_tbd_list);
 FUNC_1(&VAR_6->cmd_waiter_list);
 FUNC_5(&VAR_6->wait_q);

 FUNC_8(VAR_6);

 FUNC_1(&VAR_6->ipato.entries);
 VAR_6->ipato.enabled = 0;
 VAR_6->ipato.invert4 = 0;
 VAR_6->ipato.invert6 = 0;

 FUNC_7(VAR_6);
 FUNC_0(&VAR_6->buffer_reclaim_work, VAR_3);
 FUNC_2(&VAR_6->close_dev_work, VAR_4);
 return 0;
}
