
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct radeon_vm {int mutex; int fence; } ;
struct radeon_fpriv {struct radeon_vm vm; } ;
struct TYPE_9__ {int lock; } ;
struct radeon_device {scalar_t__ family; TYPE_2__ vm_manager; } ;
struct TYPE_10__ {int is_const_ib; int length_dw; int fence; int ptr; } ;
struct radeon_cs_parser {int chunk_ib_idx; int cs_flags; int chunk_const_ib_idx; TYPE_3__ ib; TYPE_3__ const_ib; int ring; struct radeon_cs_chunk* chunks; TYPE_1__* filp; } ;
struct radeon_cs_chunk {int length_dw; int user_ptr; } ;
struct TYPE_8__ {struct radeon_fpriv* driver_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct radeon_cs_parser*,struct radeon_vm*) ;
 int FUNC_5 (struct radeon_cs_parser*) ;
 int FUNC_6 (struct radeon_device*,int ,TYPE_3__*,struct radeon_vm*,int) ;
 int FUNC_7 (struct radeon_device*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (struct radeon_device*,int ,TYPE_3__*) ;
 int FUNC_10 (struct radeon_device*,struct radeon_vm*) ;
 int FUNC_11 (struct radeon_device*,struct radeon_vm*) ;
 int FUNC_12 (struct radeon_device*,struct radeon_vm*,int ) ;
 int FUNC_13 (struct radeon_device*,struct radeon_vm*,int ) ;

__attribute__((used)) static int FUNC_14(struct radeon_device *VAR_5,
     struct radeon_cs_parser *VAR_6)
{
 struct radeon_cs_chunk *VAR_7;
 struct radeon_fpriv *VAR_8 = VAR_6->filp->driver_priv;
 struct radeon_vm *VAR_9 = &VAR_8->vm;
 int VAR_10;

 if (VAR_6->chunk_ib_idx == -1)
  return 0;
 if ((VAR_6->cs_flags & VAR_3) == 0)
  return 0;

 if ((VAR_5->family >= VAR_0) &&
     (VAR_6->chunk_const_ib_idx != -1)) {
  VAR_7 = &VAR_6->chunks[VAR_6->chunk_const_ib_idx];
  if (VAR_7->length_dw > VAR_4) {
   FUNC_1("cs IB CONST too big: %d\n", VAR_7->length_dw);
   return -VAR_2;
  }
  VAR_10 = FUNC_6(VAR_5, VAR_6->ring, &VAR_6->const_ib,
       VAR_9, VAR_7->length_dw * 4);
  if (VAR_10) {
   FUNC_1("Failed to get const ib !\n");
   return VAR_10;
  }
  VAR_6->const_ib.is_const_ib = 1;
  VAR_6->const_ib.length_dw = VAR_7->length_dw;

  if (FUNC_0(VAR_6->const_ib.ptr, VAR_7->user_ptr,
           VAR_7->length_dw * 4)) {
   return -VAR_1;
  }
  VAR_10 = FUNC_9(VAR_5, VAR_6->ring, &VAR_6->const_ib);
  if (VAR_10) {
   return VAR_10;
  }
 }

 VAR_7 = &VAR_6->chunks[VAR_6->chunk_ib_idx];
 if (VAR_7->length_dw > VAR_4) {
  FUNC_1("cs IB too big: %d\n", VAR_7->length_dw);
  return -VAR_2;
 }
 VAR_10 = FUNC_6(VAR_5, VAR_6->ring, &VAR_6->ib,
      VAR_9, VAR_7->length_dw * 4);
 if (VAR_10) {
  FUNC_1("Failed to get ib !\n");
  return VAR_10;
 }
 VAR_6->ib.length_dw = VAR_7->length_dw;

 if (FUNC_0(VAR_6->ib.ptr, VAR_7->user_ptr,
          VAR_7->length_dw * 4)) {
  return -VAR_1;
 }
 VAR_10 = FUNC_9(VAR_5, VAR_6->ring, &VAR_6->ib);
 if (VAR_10) {
  return VAR_10;
 }

 FUNC_2(&VAR_5->vm_manager.lock);
 FUNC_2(&VAR_9->mutex);
 VAR_10 = FUNC_11(VAR_5, VAR_9);
 if (VAR_10) {
  goto out;
 }
 VAR_10 = FUNC_4(VAR_6, VAR_9);
 if (VAR_10) {
  goto out;
 }
 FUNC_5(VAR_6);
 FUNC_8(&VAR_6->ib, VAR_9->fence);
 FUNC_8(&VAR_6->ib, FUNC_13(
  VAR_5, VAR_9, VAR_6->ring));

 if ((VAR_5->family >= VAR_0) &&
     (VAR_6->chunk_const_ib_idx != -1)) {
  VAR_10 = FUNC_7(VAR_5, &VAR_6->ib, &VAR_6->const_ib);
 } else {
  VAR_10 = FUNC_7(VAR_5, &VAR_6->ib, ((void*)0));
 }

 if (!VAR_10) {
  FUNC_12(VAR_5, VAR_9, VAR_6->ib.fence);
 }

out:
 FUNC_10(VAR_5, VAR_9);
 FUNC_3(&VAR_9->mutex);
 FUNC_3(&VAR_5->vm_manager.lock);
 return VAR_10;
}
