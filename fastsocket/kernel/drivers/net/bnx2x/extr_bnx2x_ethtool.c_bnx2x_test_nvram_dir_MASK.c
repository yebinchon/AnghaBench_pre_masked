
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct code_entry {size_t code_attribute; int nvm_start_addr; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,scalar_t__,int) ;
 int FUNC_1 (struct bnx2x*,int ,size_t,int *) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_5,
    struct code_entry *VAR_6,
    u8 *VAR_7)
{
 size_t VAR_8 = VAR_6->code_attribute & VAR_2;
 u32 VAR_9 = VAR_6->code_attribute & VAR_3;
 int VAR_10;


 if (VAR_8 == 0 || VAR_9 == VAR_4)
  return 0;

 VAR_10 = FUNC_1(VAR_5, VAR_6->nvm_start_addr, VAR_8, VAR_7);
 if (VAR_10)
  FUNC_0(VAR_0 | VAR_1,
     "image %x has failed crc test (rc %d)\n", VAR_9, VAR_10);

 return VAR_10;
}
