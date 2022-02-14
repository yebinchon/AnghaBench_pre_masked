
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ricb {int flags; int * ipv4_hash_key; int * ipv6_hash_key; int mask; int base_cq; scalar_t__ hash_cq_id; } ;
struct ql_adapter {int rss_ring_count; int ndev; struct ricb ricb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (void*,int*,int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_4 (struct ql_adapter*,struct ricb*,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ql_adapter *VAR_9)
{
 u8 VAR_10[] = {0x6d, 0x5a, 0x56, 0xda, 0x25, 0x5b, 0x0e, 0xc2,
    0x41, 0x67, 0x25, 0x3d, 0x43, 0xa3, 0x8f,
    0xb0, 0xd0, 0xca, 0x2b, 0xcb, 0xae, 0x7b,
    0x30, 0xb4, 0x77, 0xcb, 0x2d, 0xa3, 0x80,
    0x30, 0xf2, 0x0c, 0x6a, 0x42, 0xb7, 0x3b,
    0xbe, 0xac, 0x01, 0xfa};
 struct ricb *VAR_11 = &VAR_9->ricb;
 int VAR_12 = 0;
 int VAR_13;
 u8 *VAR_14 = (u8 *) VAR_11->hash_cq_id;

 FUNC_2((void *)VAR_11, 0, sizeof(*VAR_11));

 VAR_11->base_cq = VAR_1;
 VAR_11->flags =
  (VAR_2 | VAR_4 | VAR_3 | VAR_5 | VAR_6 | VAR_7);
 VAR_11->mask = FUNC_0((u16)(0x3ff));




 for (VAR_13 = 0; VAR_13 < 1024; VAR_13++)
  VAR_14[VAR_13] = (VAR_13 & (VAR_9->rss_ring_count - 1));

 FUNC_1((void *)&VAR_11->ipv6_hash_key[0], VAR_10, 40);
 FUNC_1((void *)&VAR_11->ipv4_hash_key[0], VAR_10, 16);

 VAR_12 = FUNC_4(VAR_9, VAR_11, sizeof(*VAR_11), VAR_0, 0);
 if (VAR_12) {
  FUNC_3(VAR_9, VAR_8, VAR_9->ndev, "Failed to load RICB.\n");
  return VAR_12;
 }
 return VAR_12;
}
