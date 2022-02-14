
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int len; } ;
struct mlx4_wqe_inline_seg {void* byte_count; } ;
struct mlx4_en_tx_desc {struct mlx4_wqe_inline_seg inl; } ;
struct TYPE_4__ {TYPE_1__* frags; scalar_t__ nr_frags; } ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (struct sk_buff*,struct mlx4_wqe_inline_seg*,int) ;
 int FUNC_3 (struct sk_buff*,int,struct mlx4_wqe_inline_seg*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_2__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct mlx4_en_tx_desc *VAR_2, struct sk_buff *VAR_3,
        int VAR_4, u16 *VAR_5, int VAR_6, void *VAR_7)
{
 struct mlx4_wqe_inline_seg *VAR_8 = &VAR_2->inl;
 int VAR_9 = VAR_1 - VAR_0 - sizeof *VAR_8;

 if (VAR_3->len <= VAR_9) {
  VAR_8->byte_count = FUNC_0(1 << 31 | VAR_3->len);
  FUNC_2(VAR_3, VAR_8 + 1, FUNC_4(VAR_3));
  if (FUNC_5(VAR_3)->nr_frags)
   FUNC_1(((void *)(VAR_8 + 1)) + FUNC_4(VAR_3), VAR_7,
          FUNC_5(VAR_3)->frags[0].size);

 } else {
  VAR_8->byte_count = FUNC_0(1 << 31 | VAR_9);
  if (FUNC_4(VAR_3) <= VAR_9) {
   FUNC_2(VAR_3, VAR_8 + 1, FUNC_4(VAR_3));
   if (FUNC_4(VAR_3) < VAR_9) {
    FUNC_1(((void *)(VAR_8 + 1)) + FUNC_4(VAR_3),
     VAR_7, VAR_9 - FUNC_4(VAR_3));
    VAR_7 += VAR_9 - FUNC_4(VAR_3);
   }
   VAR_8 = (void *) (VAR_8 + 1) + VAR_9;
   FUNC_1(((void *)(VAR_8 + 1)), VAR_7, VAR_3->len - VAR_9);
  } else {
   FUNC_2(VAR_3, VAR_8 + 1, VAR_9);
   VAR_8 = (void *) (VAR_8 + 1) + VAR_9;
   FUNC_3(VAR_3, VAR_9, VAR_8 + 1,
     FUNC_4(VAR_3) - VAR_9);
   if (FUNC_5(VAR_3)->nr_frags)
    FUNC_1(((void *)(VAR_8 + 1)) + FUNC_4(VAR_3) - VAR_9,
     VAR_7, FUNC_5(VAR_3)->frags[0].size);
  }

  FUNC_6();
  VAR_8->byte_count = FUNC_0(1 << 31 | (VAR_3->len - VAR_9));
 }
}
