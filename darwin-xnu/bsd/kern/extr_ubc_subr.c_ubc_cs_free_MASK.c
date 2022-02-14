
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubc_info {struct cs_blob* cs_blobs; int ui_vnode; } ;
struct cs_blob {scalar_t__ csb_mem_size; struct cs_blob* csb_next; } ;
typedef int SInt32 ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct cs_blob*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(
 struct ubc_info *VAR_2)
{
 struct cs_blob *VAR_3, *VAR_4;

 for (VAR_3 = VAR_2->cs_blobs;
      VAR_3 != ((void*)0);
      VAR_3 = VAR_4) {
  VAR_4 = VAR_3->csb_next;
  FUNC_0(-1, &VAR_0);
  FUNC_0((SInt32) -VAR_3->csb_mem_size, &VAR_1);
  FUNC_1(VAR_3);
 }



 VAR_2->cs_blobs = ((void*)0);
}
