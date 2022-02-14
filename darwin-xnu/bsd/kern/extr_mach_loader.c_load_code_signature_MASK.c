
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct vnode {int dummy; } ;
struct linkedit_data_command {int cmdsize; scalar_t__ dataoff; scalar_t__ datasize; } ;
struct image_params {int dummy; } ;
struct cs_blob {scalar_t__ csb_base_offset; int csb_end_offset; int csb_platform_binary; int csb_flags; int csb_cpu_type; } ;
typedef scalar_t__ off_t ;
typedef int load_return_t ;
struct TYPE_3__ {int cs_end_offset; int platform_binary; int csflags; } ;
typedef TYPE_1__ load_result_t ;
typedef scalar_t__ kern_return_t ;
typedef int cpu_type_t ;
typedef int caddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (struct vnode*,int ,scalar_t__,scalar_t__*,scalar_t__,struct image_params*,int ,struct cs_blob**) ;
 scalar_t__ FUNC_6 (scalar_t__*,scalar_t__*) ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 struct cs_blob* FUNC_8 (struct vnode*,int ,scalar_t__) ;
 int FUNC_9 (struct vnode*,struct cs_blob*,struct image_params*,int ) ;
 scalar_t__ FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;
 int FUNC_12 (int ,struct vnode*,int ,scalar_t__,scalar_t__,int ,int ,int ,int*,int ) ;

__attribute__((used)) static load_return_t
FUNC_13(
 struct linkedit_data_command *VAR_9,
 struct vnode *VAR_10,
 off_t VAR_11,
 off_t VAR_12,
 cpu_type_t VAR_13,
 load_result_t *VAR_14,
 struct image_params *VAR_15)
{
 int VAR_16;
 kern_return_t VAR_17;
 vm_offset_t VAR_18;
 int VAR_19;
 struct cs_blob *VAR_20;
 int VAR_21;
 vm_size_t VAR_22;

 VAR_18 = 0;
 VAR_20 = ((void*)0);

 if (VAR_9->cmdsize != sizeof (struct linkedit_data_command) ||
     VAR_9->dataoff + VAR_9->datasize > VAR_12) {
  VAR_16 = VAR_2;
  goto out;
 }

 VAR_20 = FUNC_8(VAR_10, VAR_13, VAR_11);

 if (VAR_20 != ((void*)0)) {

  if (VAR_20->csb_cpu_type != VAR_13 ||
      VAR_20->csb_base_offset != VAR_11) {

   VAR_16 = VAR_2;
   goto out;
  }


  if (FUNC_10(VAR_10) == 0) {

   VAR_16 = VAR_6;
   goto out;
  }


  VAR_21 = FUNC_9(VAR_10, VAR_20, VAR_15, 0);
  if (VAR_21 == 0) {

   VAR_16 = VAR_6;
   goto out;
  }

  if (VAR_21 != VAR_0) {
   FUNC_4("load_code_signature: revalidation failed: %d\n", VAR_21);
   VAR_16 = VAR_3;
   goto out;
  }

  FUNC_0(VAR_21 == VAR_0);





  VAR_20 = ((void*)0);
 }

 VAR_22 = VAR_9->datasize;
 VAR_17 = FUNC_6(&VAR_18, &VAR_22);
 if (VAR_17 != VAR_1) {
  VAR_16 = VAR_5;
  goto out;
 }

 VAR_19 = 0;
 VAR_21 = FUNC_12(VAR_7,
   VAR_10,
   (caddr_t) VAR_18,
   VAR_9->datasize,
   VAR_11 + VAR_9->dataoff,
   VAR_8,
   0,
   FUNC_2(),
   &VAR_19,
   FUNC_1());
 if (VAR_21 || VAR_19 != 0) {
  VAR_16 = VAR_4;
  goto out;
 }

 if (FUNC_5(VAR_10,
       VAR_13,
       VAR_11,
       &VAR_18,
       VAR_9->datasize,
       VAR_15,
       0,
       &VAR_20)) {
  if (VAR_18) {
   FUNC_7(VAR_18, VAR_22);
  }
  VAR_16 = VAR_3;
  goto out;
 } else {

  VAR_18 = 0;
 }





 VAR_16 = VAR_6;
out:
 if (VAR_16 == VAR_6) {
  if (VAR_20 == ((void*)0))
   FUNC_3("success, but no blob!");

  VAR_14->csflags |= VAR_20->csb_flags;
  VAR_14->platform_binary = VAR_20->csb_platform_binary;
  VAR_14->cs_end_offset = VAR_20->csb_end_offset;
 }
 if (VAR_18 != 0) {
  FUNC_7(VAR_18, VAR_22);
  VAR_18 = 0;
 }

 return VAR_16;
}
