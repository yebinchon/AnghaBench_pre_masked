
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct airq_t {void* drv_data; int handler; } ;
typedef int dbf_txt ;
typedef int adapter_int_handler_t ;
struct TYPE_2__ {void* byte; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (struct airq_t*) ;
 struct airq_t* FUNC_3 (int,int ) ;
 int FUNC_4 (struct airq_t*,size_t) ;
 int FUNC_5 (char*,int,char*,int) ;

void *FUNC_6(adapter_int_handler_t VAR_5,
          void *VAR_6, u8 VAR_7)
{
 struct airq_t *VAR_8;
 char VAR_9[16];
 int VAR_10;

 if (VAR_7 > VAR_3)
  return FUNC_1(-VAR_0);
 VAR_8 = FUNC_3(sizeof(struct airq_t), VAR_2);
 if (!VAR_8) {
  VAR_10 = -VAR_1;
  goto out;
 }
 VAR_8->handler = VAR_5;
 VAR_8->drv_data = VAR_6;

 VAR_10 = FUNC_4(VAR_8, VAR_7);
out:
 FUNC_5(VAR_9, sizeof(VAR_9), "rairq:%d", VAR_10);
 FUNC_0(4, VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(VAR_8);
  return FUNC_1(VAR_10);
 } else
  return &VAR_4[VAR_7].byte[VAR_10];
}
