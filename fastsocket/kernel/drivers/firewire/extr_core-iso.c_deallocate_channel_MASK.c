
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct fw_card {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct fw_card*,int,int,int,scalar_t__,int,int *) ;

__attribute__((used)) static void FUNC_1(struct fw_card *VAR_3, int VAR_4,
          int VAR_5, int VAR_6, __be32 VAR_7[2])
{
 u32 VAR_8;
 u64 VAR_9;

 VAR_8 = VAR_6 < 32 ? 1 << VAR_6 : 1 << (VAR_6 - 32);
 VAR_9 = VAR_6 < 32 ? VAR_2 + VAR_0 :
    VAR_2 + VAR_1;

 FUNC_0(VAR_3, VAR_4, VAR_5, VAR_8, VAR_9, 0, VAR_7);
}
