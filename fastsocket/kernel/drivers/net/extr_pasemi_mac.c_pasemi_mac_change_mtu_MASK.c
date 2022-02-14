
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pasemi_mac {int napi; int dma_if; scalar_t__ bufsz; int num_cs; } ;
struct net_device {int mtu; } ;
struct TYPE_3__ {scalar_t__ next_to_fill; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct pasemi_mac* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (struct pasemi_mac*) ;
 int FUNC_10 (struct pasemi_mac*) ;
 int FUNC_11 (struct pasemi_mac*) ;
 int FUNC_12 (struct pasemi_mac*) ;
 int FUNC_13 (struct net_device*,scalar_t__) ;
 int FUNC_14 (struct pasemi_mac*) ;
 unsigned int FUNC_15 (int ) ;
 unsigned int FUNC_16 (struct pasemi_mac*,int ) ;
 TYPE_1__* FUNC_17 (struct pasemi_mac*) ;
 int FUNC_18 (int ,unsigned int) ;
 int FUNC_19 (struct pasemi_mac*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_20(struct net_device *VAR_11, int VAR_12)
{
 struct pasemi_mac *VAR_13 = FUNC_4(VAR_11);
 unsigned int VAR_14;
 unsigned int VAR_15 = 0;
 int VAR_16;
 int VAR_17 = 0;

 if (VAR_12 < VAR_9 || VAR_12 > VAR_8)
  return -VAR_0;

 VAR_16 = FUNC_5(VAR_11);

 if (VAR_16) {






  FUNC_2(&VAR_13->napi);
  FUNC_7(VAR_11);
  FUNC_10(VAR_13);

  VAR_15 = FUNC_15(FUNC_0(VAR_13->dma_if));
  FUNC_12(VAR_13);
  FUNC_8(FUNC_17(VAR_13), VAR_10);
  FUNC_9(VAR_13);

 }


 if (VAR_12 > 1500 && !VAR_13->num_cs) {
  FUNC_14(VAR_13);
  if (!VAR_13->num_cs) {
   VAR_17 = -VAR_1;
   goto out;
  }
 }




 VAR_14 = FUNC_16(VAR_13, VAR_6);
 VAR_14 &= ~VAR_7;
 VAR_14 |= FUNC_1(VAR_12 + VAR_3 + 4);
 FUNC_19(VAR_13, VAR_6, VAR_14);

 VAR_11->mtu = VAR_12;

 VAR_13->bufsz = VAR_12 + VAR_3 + VAR_2 + VAR_4 + 128;

out:
 if (VAR_16) {
  FUNC_18(FUNC_0(VAR_13->dma_if),
         VAR_15 | VAR_5);

  FUNC_17(VAR_13)->next_to_fill = 0;
  FUNC_13(VAR_11, VAR_10-1);

  FUNC_3(&VAR_13->napi);
  FUNC_6(VAR_11);
  FUNC_11(VAR_13);
 }

 return VAR_17;
}
