
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_ioread {struct pvr2_ioread* sync_key_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_ioread*) ;
 int FUNC_1 (struct pvr2_ioread*) ;
 int FUNC_2 (int ,char*,struct pvr2_ioread*) ;

void FUNC_3(struct pvr2_ioread *VAR_1)
{
 if (!VAR_1) return;
 FUNC_1(VAR_1);
 FUNC_2(VAR_0,"pvr2_ioread_destroy id=%p",VAR_1);
 if (VAR_1->sync_key_ptr) {
  FUNC_0(VAR_1->sync_key_ptr);
  VAR_1->sync_key_ptr = ((void*)0);
 }
 FUNC_0(VAR_1);
}
