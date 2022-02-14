
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct ubc_info* v_ubcinfo; } ;
struct ubc_info {struct cs_blob* cs_blobs; } ;
struct cs_blob {char* csb_teamid; scalar_t__ csb_platform_path; scalar_t__ csb_platform_binary; int csb_flags; scalar_t__ csb_end_offset; scalar_t__ csb_start_offset; struct cs_blob* csb_next; } ;


 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (struct vnode*) ;

void
FUNC_6(struct vnode *VAR_0)
{
 const char *VAR_1 = ((void*)0);
 struct ubc_info *VAR_2;
 struct cs_blob *VAR_3;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_1("csvnode: name: %s\n", VAR_1);
  FUNC_4(VAR_1);
 }

 FUNC_3(VAR_0);

 if (! FUNC_0(VAR_0)) {
  VAR_3 = ((void*)0);
  goto out;
 }

 VAR_2 = VAR_0->v_ubcinfo;
 for (VAR_3 = VAR_2->cs_blobs; VAR_3 != ((void*)0); VAR_3 = VAR_3->csb_next) {
  FUNC_1("csvnode: range: %lu -> %lu flags: 0x%08x platform: %s path: %s team: %s\n",
         (unsigned long)VAR_3->csb_start_offset,
         (unsigned long)VAR_3->csb_end_offset,
         VAR_3->csb_flags,
         VAR_3->csb_platform_binary ? "yes" : "no",
         VAR_3->csb_platform_path ? "yes" : "no",
         VAR_3->csb_teamid ? VAR_3->csb_teamid : "<NO-TEAM>");
 }

out:
 FUNC_5(VAR_0);

}
