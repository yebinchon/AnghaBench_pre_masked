
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_subsystem {int cm_enabled; void* cub_addr2; void* cub_addr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct channel_subsystem*,int,void*) ;
 int FUNC_1 (struct channel_subsystem*) ;
 int FUNC_2 (struct channel_subsystem*) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (void*,int ,int ) ;

int
FUNC_6(struct channel_subsystem *VAR_4, int VAR_5)
{
 void *VAR_6;
 int VAR_7;

 VAR_6 = (void *)FUNC_4(VAR_2 | VAR_1);
 if (!VAR_6)
  return -VAR_0;

 if (VAR_5 && !VAR_4->cm_enabled) {
  VAR_4->cub_addr1 = (void *)FUNC_4(VAR_2 | VAR_1);
  VAR_4->cub_addr2 = (void *)FUNC_4(VAR_2 | VAR_1);
  if (!VAR_4->cub_addr1 || !VAR_4->cub_addr2) {
   FUNC_3((unsigned long)VAR_4->cub_addr1);
   FUNC_3((unsigned long)VAR_4->cub_addr2);
   FUNC_3((unsigned long)VAR_6);
   return -VAR_0;
  }
 }
 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
 if (!VAR_7) {
  VAR_4->cm_enabled = VAR_5;
  if (VAR_4->cm_enabled) {
   VAR_7 = FUNC_1(VAR_4);
   if (VAR_7) {
    FUNC_5(VAR_6, 0, VAR_3);
    FUNC_0(VAR_4, 0, VAR_6);
    VAR_4->cm_enabled = 0;
   }
  } else
   FUNC_2(VAR_4);
 }
 if (!VAR_4->cm_enabled) {
  FUNC_3((unsigned long)VAR_4->cub_addr1);
  FUNC_3((unsigned long)VAR_4->cub_addr2);
 }
 FUNC_3((unsigned long)VAR_6);
 return VAR_7;
}
