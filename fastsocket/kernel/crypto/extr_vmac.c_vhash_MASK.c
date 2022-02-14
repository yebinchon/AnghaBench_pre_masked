
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vmac_ctx {int * l3key; int * polytmp; scalar_t__ first_block_processed; int * polykey; scalar_t__ nhkey; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int const*,int,int ,int ) ;
 int FUNC_3 (int *,int const*,unsigned int,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct vmac_ctx*) ;

__attribute__((used)) static u64 FUNC_6(unsigned char VAR_2[], unsigned int VAR_3,
   u64 *VAR_4, struct vmac_ctx *VAR_5)
{
 u64 VAR_6, VAR_7, *VAR_8;
 const u64 *VAR_9 = (u64 *)VAR_5->nhkey;
 int VAR_10, VAR_11;
 u64 VAR_12, VAR_13;
 u64 VAR_14 = VAR_5->polykey[0];
 u64 VAR_15 = VAR_5->polykey[1];

 VAR_8 = (u64 *)VAR_2;
 VAR_10 = VAR_3 / VAR_0;
 VAR_11 = VAR_3 % VAR_0;

 if (VAR_5->first_block_processed) {
  VAR_12 = VAR_5->polytmp[0];
  VAR_13 = VAR_5->polytmp[1];
 } else if (VAR_10) {
  FUNC_3(VAR_8, VAR_9, VAR_0/8, VAR_12, VAR_13);
  VAR_12 &= VAR_1;
  FUNC_0(VAR_12, VAR_13, VAR_14, VAR_15);
  VAR_8 += (VAR_0/sizeof(u64));
  VAR_10--;
 } else if (VAR_11) {
  FUNC_2(VAR_8, VAR_9, 2*((VAR_11+15)/16), VAR_12, VAR_13);
  VAR_12 &= VAR_1;
  FUNC_0(VAR_12, VAR_13, VAR_14, VAR_15);
  VAR_8 += (VAR_0/sizeof(u64));
  goto do_l3;
 } else {
  VAR_12 = VAR_14; VAR_13 = VAR_15;
  goto do_l3;
 }

 while (VAR_10--) {
  FUNC_3(VAR_8, VAR_9, VAR_0/8, VAR_6, VAR_7);
  VAR_6 &= VAR_1;
  FUNC_4(VAR_12, VAR_13, VAR_14, VAR_15, VAR_6, VAR_7);
  VAR_8 += (VAR_0/sizeof(u64));
 }
 if (VAR_11) {
  FUNC_2(VAR_8, VAR_9, 2*((VAR_11+15)/16), VAR_6, VAR_7);
  VAR_6 &= VAR_1;
  FUNC_4(VAR_12, VAR_13, VAR_14, VAR_15, VAR_6, VAR_7);
 }

do_l3:
 FUNC_5(VAR_5);
 VAR_11 *= 8;
 return FUNC_1(VAR_12, VAR_13, VAR_5->l3key[0], VAR_5->l3key[1], VAR_11);
}
