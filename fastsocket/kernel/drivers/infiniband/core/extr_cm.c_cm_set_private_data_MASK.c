
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cm_id_private {scalar_t__ private_data_len; void* private_data; } ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(struct cm_id_private *VAR_0,
     void *VAR_1, u8 VAR_2)
{
 if (VAR_0->private_data && VAR_0->private_data_len)
  FUNC_0(VAR_0->private_data);

 VAR_0->private_data = VAR_1;
 VAR_0->private_data_len = VAR_2;
}
