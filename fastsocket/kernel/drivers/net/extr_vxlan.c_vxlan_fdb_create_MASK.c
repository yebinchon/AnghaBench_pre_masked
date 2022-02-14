
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vxlan_fdb {int state; scalar_t__ flags; int hlist; int const* eth_addr; int remotes; void* used; void* updated; } ;
struct vxlan_dev {scalar_t__ addrmax; scalar_t__ addrcnt; int dev; } ;
typedef scalar_t__ __u8 ;
typedef int __u32 ;
typedef int __u16 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct vxlan_fdb* FUNC_1 (struct vxlan_dev*,int const*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 void* VAR_12 ;
 struct vxlan_fdb* FUNC_5 (int,int ) ;
 int FUNC_6 (int const*,int const*,int ) ;
 int FUNC_7 (int ,char*,int const*,...) ;
 int FUNC_8 (struct vxlan_fdb*,int ,int ,int ,int ) ;
 int FUNC_9 (struct vxlan_dev*,int const*) ;
 int FUNC_10 (struct vxlan_dev*,struct vxlan_fdb*,int ) ;
 int FUNC_11 (struct vxlan_fdb*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct vxlan_dev *VAR_13,
       const u8 *VAR_14, __be32 VAR_15,
       __u16 VAR_16, __u16 VAR_17,
       __be16 VAR_18, __u32 VAR_19, __u32 VAR_20,
       __u8 VAR_21)
{
 struct vxlan_fdb *VAR_22;
 int VAR_23 = 0;

 VAR_22 = FUNC_1(VAR_13, VAR_14);
 if (VAR_22) {
  if (VAR_17 & VAR_9) {
   FUNC_7(VAR_13->dev,
       "lost race to create %pM\n", VAR_14);
   return -VAR_0;
  }
  if (VAR_22->state != VAR_16) {
   VAR_22->state = VAR_16;
   VAR_22->updated = VAR_12;
   VAR_23 = 1;
  }
  if (VAR_22->flags != VAR_21) {
   VAR_22->flags = VAR_21;
   VAR_22->updated = VAR_12;
   VAR_23 = 1;
  }
  if ((VAR_17 & VAR_10)) {

   if (!(FUNC_3(VAR_22->eth_addr) ||
        FUNC_4(VAR_22->eth_addr))) {
    int VAR_24 = FUNC_11(VAR_22, VAR_15, VAR_18, VAR_19,
          VAR_20);

    if (VAR_24 < 0)
     return VAR_24;
    VAR_23 |= VAR_24;
   } else
    return -VAR_4;
  }
  if ((VAR_17 & VAR_7) &&
      (FUNC_3(VAR_22->eth_addr) ||
       FUNC_4(VAR_22->eth_addr))) {
   int VAR_25 = FUNC_8(VAR_22, VAR_15, VAR_18, VAR_19, VAR_20);

   if (VAR_25 < 0)
    return VAR_25;
   VAR_23 |= VAR_25;
  }
 } else {
  if (!(VAR_17 & VAR_8))
   return -VAR_1;

  if (VAR_13->addrmax && VAR_13->addrcnt >= VAR_13->addrmax)
   return -VAR_3;


  if ((VAR_17 & VAR_10) &&
      (FUNC_3(VAR_14) || FUNC_4(VAR_14)))
   return -VAR_4;

  FUNC_7(VAR_13->dev, "add %pM -> %pI4\n", VAR_14, &VAR_15);
  VAR_22 = FUNC_5(sizeof(*VAR_22), VAR_6);
  if (!VAR_22)
   return -VAR_2;

  VAR_23 = 1;
  VAR_22->state = VAR_16;
  VAR_22->flags = VAR_21;
  VAR_22->updated = VAR_22->used = VAR_12;
  FUNC_0(&VAR_22->remotes);
  FUNC_6(VAR_22->eth_addr, VAR_14, VAR_5);

  FUNC_8(VAR_22, VAR_15, VAR_18, VAR_19, VAR_20);

  ++VAR_13->addrcnt;
  FUNC_2(&VAR_22->hlist,
       FUNC_9(VAR_13, VAR_14));
 }

 if (VAR_23)
  FUNC_10(VAR_13, VAR_22, VAR_11);

 return 0;
}
