
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__ buf; } ;
struct ib_smp {scalar_t__ data; int attr_mod; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx4_dev*,int ,int ,int ,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_4, u8 VAR_5, u16 VAR_6, u16 *VAR_7,
          struct mlx4_cmd_mailbox *VAR_8,
          struct mlx4_cmd_mailbox *VAR_9)
{
 struct ib_smp *VAR_10 = (struct ib_smp *)(VAR_8->buf);
 struct ib_smp *VAR_11 = (struct ib_smp *)(VAR_9->buf);
 int VAR_12;
 int VAR_13;

 if (VAR_6 & 0x1f)
  return -VAR_0;

 VAR_10->attr_mod = FUNC_1(VAR_6 / 32);

 VAR_12 = FUNC_2(VAR_4, VAR_8->dma, VAR_9->dma, VAR_5, 3,
      VAR_1, VAR_3,
      VAR_2);
 if (VAR_12)
  return VAR_12;

 for (VAR_13 = 0; VAR_13 < 32; ++VAR_13)
  VAR_7[VAR_13] = FUNC_0(((__be16 *) VAR_11->data)[VAR_13]);

 return VAR_12;
}
