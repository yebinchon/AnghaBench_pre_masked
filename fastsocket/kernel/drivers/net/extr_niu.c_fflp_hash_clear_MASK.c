
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct niu {int dummy; } ;
struct fcram_hash_ipv4 {int header; } ;
typedef int ent ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct niu*,int ,unsigned long,int,int *) ;
 int FUNC_1 (struct fcram_hash_ipv4*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct niu *VAR_2)
{
 struct fcram_hash_ipv4 VAR_3;
 unsigned long VAR_4;


 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.header = VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += sizeof(VAR_3)) {
  int VAR_5 = FUNC_0(VAR_2, 0, VAR_4, 1, (u64 *) &VAR_3);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
