
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iser_data_buf {int size; int buf; } ;
struct iscsi_iser_task {struct iser_data_buf* data; scalar_t__* dir; TYPE_3__* iser_conn; } ;
struct ib_device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ib_conn; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {struct ib_device* ib_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct ib_device*,int ,int ,int ) ;

void FUNC_1(struct iscsi_iser_task *VAR_4)
{
 struct ib_device *VAR_5;
 struct iser_data_buf *VAR_6;

 VAR_5 = VAR_4->iser_conn->ib_conn->device->ib_device;

 if (VAR_4->dir[VAR_2]) {
  VAR_6 = &VAR_4->data[VAR_2];
  FUNC_0(VAR_5, VAR_6->buf, VAR_6->size, VAR_0);
 }

 if (VAR_4->dir[VAR_3]) {
  VAR_6 = &VAR_4->data[VAR_3];
  FUNC_0(VAR_5, VAR_6->buf, VAR_6->size, VAR_1);
 }
}
