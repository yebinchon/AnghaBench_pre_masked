
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
typedef int u16 ;
struct pcnet32_access {int (* read_csr ) (scalar_t__,int) ;int (* write_csr ) (scalar_t__,int,int) ;scalar_t__ (* read_bcr ) (scalar_t__,int) ;int (* write_bcr ) (scalar_t__,int,int) ;} ;
struct pcnet32_private {int phymask; int lock; struct pcnet32_access a; scalar_t__ mii; } ;
struct net_device {scalar_t__ base_addr; } ;
struct ethtool_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,unsigned long*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int,int) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_6, struct ethtool_regs *VAR_7,
        void *VAR_8)
{
 int VAR_9, VAR_10;
 u16 *VAR_11 = VAR_8;
 struct pcnet32_private *VAR_12 = FUNC_1(VAR_6);
 struct pcnet32_access *VAR_13 = &VAR_12->a;
 ulong VAR_14 = VAR_6->base_addr;
 unsigned long VAR_15;

 FUNC_3(&VAR_12->lock, VAR_15);

 VAR_10 = VAR_13->read_csr(VAR_14, VAR_0);
 if (!(VAR_10 & VAR_1))
  FUNC_2(VAR_6, &VAR_15, 1);


 for (VAR_9 = 0; VAR_9 < 16; VAR_9 += 2)
  *VAR_11++ = FUNC_0(VAR_14 + VAR_9);


 for (VAR_9 = 0; VAR_9 < 90; VAR_9++) {
  *VAR_11++ = VAR_13->read_csr(VAR_14, VAR_9);
 }

 *VAR_11++ = VAR_13->read_csr(VAR_14, 112);
 *VAR_11++ = VAR_13->read_csr(VAR_14, 114);


 for (VAR_9 = 0; VAR_9 < 30; VAR_9++) {
  *VAR_11++ = VAR_13->read_bcr(VAR_14, VAR_9);
 }
 *VAR_11++ = 0;
 for (VAR_9 = 31; VAR_9 < 36; VAR_9++) {
  *VAR_11++ = VAR_13->read_bcr(VAR_14, VAR_9);
 }


 if (VAR_12->mii) {
  int VAR_16;
  for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
   if (VAR_12->phymask & (1 << VAR_16)) {
    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
     VAR_12->a.write_bcr(VAR_14, 33,
       (VAR_16 << 5) | VAR_9);
     *VAR_11++ = VAR_12->a.read_bcr(VAR_14, 34);
    }
   }
  }
 }

 if (!(VAR_10 & VAR_1)) {
  int VAR_17;


  VAR_17 = VAR_13->read_csr(VAR_14, VAR_2);
  VAR_13->write_csr(VAR_14, VAR_2, VAR_17 & (~VAR_3));
 }

 FUNC_4(&VAR_12->lock, VAR_15);
}
