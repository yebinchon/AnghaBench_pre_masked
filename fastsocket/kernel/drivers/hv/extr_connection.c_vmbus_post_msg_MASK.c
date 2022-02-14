
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
union hv_connection_id {TYPE_1__ u; scalar_t__ asu32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union hv_connection_id,int,void*,size_t) ;
 int FUNC_1 (int) ;

int FUNC_2(void *VAR_2, size_t VAR_3)
{
 union hv_connection_id VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;

 VAR_4.asu32 = 0;
 VAR_4.u.id = VAR_1;






 while (VAR_6 < 3) {
  VAR_5 = FUNC_0(VAR_4, 1, VAR_2, VAR_3);
  if (VAR_5 != VAR_0)
   return VAR_5;
  VAR_6++;
  FUNC_1(100);
 }
 return VAR_5;
}
