
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct vnode {TYPE_1__* v_ubcinfo; } ;
struct image_params {int dummy; } ;
struct cs_blob {size_t csb_mem_size; unsigned int csb_flags; unsigned int csb_signer_type; scalar_t__ csb_reconstituted; scalar_t__ csb_mem_kaddr; } ;
struct TYPE_7__ {int p_pid; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ cs_add_gen; } ;
typedef int CS_GenericBlob ;
typedef TYPE_2__ CS_CodeDirectory ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int const*,size_t,TYPE_2__ const**,int const**) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (struct vnode*,struct cs_blob*,struct image_params*,unsigned int*,unsigned int*,int) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*) ;

int
FUNC_9(
 struct vnode *VAR_6,
 struct cs_blob *VAR_7,
 struct image_params *VAR_8,
 int VAR_9
 )
{
 int VAR_10 = 0;
 const CS_CodeDirectory *VAR_11 = ((void*)0);
 const CS_GenericBlob *VAR_12 = ((void*)0);
 size_t VAR_13;
 FUNC_1(VAR_6 != ((void*)0));
 FUNC_1(VAR_7 != ((void*)0));

 VAR_13 = VAR_7->csb_mem_size;
 VAR_10 = FUNC_2((const uint8_t *)VAR_7->csb_mem_kaddr,
          VAR_13, &VAR_11, &VAR_12);
 if (VAR_10) {
  if (VAR_5) {
   FUNC_6("CODESIGNING: csblob invalid: %d\n", VAR_10);
  }
  goto out;
 }

    unsigned int VAR_14 = (FUNC_5(VAR_11->flags) & VAR_0) | VAR_2;
    unsigned int VAR_15 = VAR_1;

 if (VAR_7->csb_reconstituted) {
  if (VAR_5) {
   FUNC_6("CODESIGNING: revalidate: not inline revalidating reconstituted signature.\n");
  }
  return VAR_3;
 }
 (void)VAR_9;
 (void)VAR_15;



 FUNC_7(VAR_6);
    VAR_7->csb_flags = VAR_14;
 VAR_7->csb_signer_type = VAR_15;
 if (FUNC_0(VAR_6)) {
  if (VAR_10 == 0)
   VAR_6->v_ubcinfo->cs_add_gen = VAR_4;
  else
   VAR_6->v_ubcinfo->cs_add_gen = 0;
 }

 FUNC_8(VAR_6);

out:
 return VAR_10;
}
