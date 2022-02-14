
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nfsd3_readdirres {int * offset; } ;
typedef int __be32 ;


 int VAR_0 ;
 int * FUNC_0 (int *,char const*,int) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static __be32 *
FUNC_2(struct nfsd3_readdirres *VAR_2, __be32 *VAR_3, const char *VAR_4,
      int VAR_5, u64 VAR_6)
{
 *VAR_3++ = VAR_1;
 VAR_3 = FUNC_1(VAR_3, VAR_6);
 VAR_3 = FUNC_0(VAR_3, VAR_4, VAR_5);

 VAR_2->offset = VAR_3;
 VAR_3 = FUNC_1(VAR_3, VAR_0);

 return VAR_3;
}
