
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxdone_entry_desc {scalar_t__ cipher_status; int dev_flags; int flags; } ;
struct queue_entry_priv_mmio {int * desc; } ;
struct queue_entry {struct queue_entry_priv_mmio* priv_data; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct queue_entry*,struct rxdone_entry_desc*) ;
 int FUNC_1 (int *,int,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct queue_entry *VAR_14,
      struct rxdone_entry_desc *VAR_15)
{
 struct queue_entry_priv_mmio *VAR_16 = VAR_14->priv_data;
 __le32 *VAR_17 = VAR_16->desc;
 u32 VAR_18;

 FUNC_1(VAR_17, 3, &VAR_18);

 if (FUNC_2(VAR_18, VAR_3))
  VAR_15->flags |= VAR_10;






 VAR_15->cipher_status = FUNC_2(VAR_18, VAR_2);

 if (FUNC_2(VAR_18, VAR_4)) {






  VAR_15->flags |= VAR_11;





  VAR_15->flags |= VAR_13;

  if (VAR_15->cipher_status == VAR_8)
   VAR_15->flags |= VAR_9;
  else if (VAR_15->cipher_status == VAR_7)
   VAR_15->flags |= VAR_12;
 }

 if (FUNC_2(VAR_18, VAR_6))
  VAR_15->dev_flags |= VAR_1;

 if (FUNC_2(VAR_18, VAR_5))
  VAR_15->dev_flags |= VAR_0;




 FUNC_0(VAR_14, VAR_15);
}
