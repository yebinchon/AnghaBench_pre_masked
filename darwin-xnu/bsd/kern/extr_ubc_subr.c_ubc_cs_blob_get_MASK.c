
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct ubc_info* v_ubcinfo; } ;
struct ubc_info {struct cs_blob* cs_blobs; } ;
struct cs_blob {int csb_cpu_type; int csb_base_offset; int csb_start_offset; int csb_end_offset; struct cs_blob* csb_next; } ;
typedef int off_t ;
typedef int cpu_type_t ;


 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*) ;

struct cs_blob *
FUNC_3(
 struct vnode *VAR_0,
 cpu_type_t VAR_1,
 off_t VAR_2)
{
 struct ubc_info *VAR_3;
 struct cs_blob *VAR_4;
 off_t VAR_5;

 FUNC_1(VAR_0);

 if (! FUNC_0(VAR_0)) {
  VAR_4 = ((void*)0);
  goto out;
 }

 VAR_3 = VAR_0->v_ubcinfo;
 for (VAR_4 = VAR_3->cs_blobs;
      VAR_4 != ((void*)0);
      VAR_4 = VAR_4->csb_next) {
  if (VAR_1 != -1 && VAR_4->csb_cpu_type == VAR_1) {
   break;
  }
  if (VAR_2 != -1) {
   VAR_5 = VAR_2 - VAR_4->csb_base_offset;
   if (VAR_5 >= VAR_4->csb_start_offset &&
       VAR_5 < VAR_4->csb_end_offset) {

    break;
   }
  }
 }

out:
 FUNC_2(VAR_0);

 return VAR_4;
}
