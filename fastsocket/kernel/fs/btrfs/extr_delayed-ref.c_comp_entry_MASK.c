
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_delayed_ref_node {scalar_t__ bytenr; scalar_t__ type; scalar_t__ seq; scalar_t__ is_head; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct btrfs_delayed_ref_node*) ;
 int FUNC_2 (struct btrfs_delayed_ref_node*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct btrfs_delayed_ref_node *VAR_4,
        struct btrfs_delayed_ref_node *VAR_5)
{
 if (VAR_5->bytenr < VAR_4->bytenr)
  return -1;
 if (VAR_5->bytenr > VAR_4->bytenr)
  return 1;
 if (VAR_5->is_head && VAR_4->is_head)
  return 0;
 if (VAR_4->is_head)
  return -1;
 if (VAR_5->is_head)
  return 1;
 if (VAR_5->type < VAR_4->type)
  return -1;
 if (VAR_5->type > VAR_4->type)
  return 1;

 if (VAR_5->seq < VAR_4->seq)
  return -1;
 if (VAR_5->seq > VAR_4->seq)
  return 1;
 if (VAR_5->type == VAR_3 ||
     VAR_5->type == VAR_1) {
  return FUNC_4(FUNC_2(VAR_4),
          FUNC_2(VAR_5));
 } else if (VAR_5->type == VAR_0 ||
     VAR_5->type == VAR_2) {
  return FUNC_3(FUNC_1(VAR_4),
          FUNC_1(VAR_5));
 }
 FUNC_0();
 return 0;
}
