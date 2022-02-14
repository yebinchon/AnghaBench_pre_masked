
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macio_chip {int flags; struct device_node* of_node; } ;
struct device_node {struct device_node* parent; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (unsigned long) ;
 struct macio_chip* FUNC_8 (struct device_node*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static long
FUNC_11(struct device_node *VAR_11, long VAR_12, long VAR_13)
{
 struct macio_chip* VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 VAR_14 = FUNC_8(VAR_11, 0);
 if (!VAR_14)
  return -VAR_0;




 if (VAR_11 != VAR_14->of_node &&
     (!VAR_11->parent || VAR_11->parent != VAR_14->of_node))
  return -VAR_0;
 VAR_16 = (VAR_14->flags & VAR_10) != 0;
 if (VAR_13 == VAR_16)
  return 0;
 if (VAR_13) {




  FUNC_0(VAR_15);
  FUNC_6(VAR_2+0xf, 5);
  (void)FUNC_4(VAR_2+0xf);
  FUNC_7(VAR_15);
  FUNC_9(10);
  FUNC_0(VAR_15);
  FUNC_6(VAR_2+0xf, 4);
  (void)FUNC_4(VAR_2+0xf);
  FUNC_7(VAR_15);

  FUNC_9(10);

  FUNC_0(VAR_15);
  FUNC_1(VAR_1, VAR_4);
  (void)FUNC_3(VAR_1);
  FUNC_10(10);
  FUNC_6(VAR_3+0xb, 0);
  (void)FUNC_4(VAR_3+0xb);
  FUNC_10(10);
  FUNC_6(VAR_3+0xa, 0x28);
  (void)FUNC_4(VAR_3+0xa);
  FUNC_10(10);
  FUNC_6(VAR_3+0xd, 0x28);
  (void)FUNC_4(VAR_3+0xd);
  FUNC_10(10);
  FUNC_6(VAR_2+0xd, 0x28);
  (void)FUNC_4(VAR_2+0xd);
  FUNC_10(10);
  FUNC_6(VAR_2+0xe, 0x28);
  (void)FUNC_4(VAR_2+0xe);
  FUNC_7(VAR_15);
  FUNC_10(10);
  FUNC_5(0x1c000, 0);
  FUNC_9(1);
  FUNC_6(0x1a3e0, 0x41);
  (void)FUNC_4(0x1a3e0);
  FUNC_10(10);
  FUNC_0(VAR_15);
  FUNC_2(VAR_1, VAR_4);
  (void)FUNC_3(VAR_1);
  FUNC_7(VAR_15);
  FUNC_9(100);

  VAR_14->flags |= VAR_10;
 } else {
  FUNC_0(VAR_15);
  FUNC_1(VAR_1, VAR_4);
  (void)FUNC_3(VAR_1);
  FUNC_6(VAR_5, 0);
  FUNC_6(VAR_6, 0);
  FUNC_6(VAR_7, 0);
  FUNC_6(VAR_8, 0);
  FUNC_6(VAR_9, 0);
  (void)FUNC_4(VAR_9);
  FUNC_7(VAR_15);

  VAR_14->flags &= ~VAR_10;
 }
 return 0;
}
