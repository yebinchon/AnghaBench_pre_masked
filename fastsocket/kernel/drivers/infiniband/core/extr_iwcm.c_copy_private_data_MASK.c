
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_cm_event {void* private_data; int private_data_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct iw_cm_event *VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_0(VAR_2->private_data, VAR_2->private_data_len, VAR_1);
 if (!VAR_3)
  return -VAR_0;
 VAR_2->private_data = VAR_3;
 return 0;
}
