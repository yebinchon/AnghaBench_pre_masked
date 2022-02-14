
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;
struct fw_iso_context {int dummy; } ;
struct iso_context {int * header; struct fw_iso_context base; int context; scalar_t__ header_length; } ;
struct fw_ohci {int it_context_mask; unsigned long long ir_context_channels; int ir_context_mask; int lock; scalar_t__ use_dualbuffer; struct iso_context* ir_context_list; struct iso_context* it_context_list; } ;
struct fw_card {int dummy; } ;
typedef int descriptor_callback_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct fw_iso_context* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,struct fw_ohci*,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned long) ;
 struct fw_ohci* FUNC_7 (struct fw_card*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct iso_context*,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static struct fw_iso_context *FUNC_11(struct fw_card *VAR_7,
    int VAR_8, int VAR_9, size_t VAR_10)
{
 struct fw_ohci *VAR_11 = FUNC_7(VAR_7);
 struct iso_context *VAR_12, *VAR_13;
 descriptor_callback_t VAR_14;
 u64 *VAR_15, VAR_16 = ~0ULL;
 u32 *VAR_17, VAR_18;
 unsigned long VAR_19;
 int VAR_20, VAR_21 = -VAR_1;

 if (VAR_8 == VAR_2) {
  VAR_15 = &VAR_16;
  VAR_17 = &VAR_11->it_context_mask;
  VAR_13 = VAR_11->it_context_list;
  VAR_14 = VAR_6;
 } else {
  VAR_15 = &VAR_11->ir_context_channels;
  VAR_17 = &VAR_11->ir_context_mask;
  VAR_13 = VAR_11->ir_context_list;
  if (VAR_11->use_dualbuffer)
   VAR_14 = VAR_4;
  else
   VAR_14 = VAR_5;
 }

 FUNC_9(&VAR_11->lock, VAR_19);
 VAR_20 = *VAR_15 & 1ULL << VAR_9 ? FUNC_5(*VAR_17) - 1 : -1;
 if (VAR_20 >= 0) {
  *VAR_15 &= ~(1ULL << VAR_9);
  *VAR_17 &= ~(1 << VAR_20);
 }
 FUNC_10(&VAR_11->lock, VAR_19);

 if (VAR_20 < 0)
  return FUNC_0(-VAR_0);

 if (VAR_8 == VAR_2)
  VAR_18 = FUNC_2(VAR_20);
 else
  VAR_18 = FUNC_1(VAR_20);

 VAR_12 = &VAR_13[VAR_20];
 FUNC_8(VAR_12, 0, sizeof(*VAR_12));
 VAR_12->header_length = 0;
 VAR_12->header = (void *) FUNC_3(VAR_3);
 if (VAR_12->header == ((void*)0))
  goto out;

 VAR_21 = FUNC_4(&VAR_12->context, VAR_11, VAR_18, VAR_14);
 if (VAR_21 < 0)
  goto out_with_header;

 return &VAR_12->base;

 out_with_header:
 FUNC_6((unsigned long)VAR_12->header);
 out:
 FUNC_9(&VAR_11->lock, VAR_19);
 *VAR_17 |= 1 << VAR_20;
 FUNC_10(&VAR_11->lock, VAR_19);

 return FUNC_0(VAR_21);
}
