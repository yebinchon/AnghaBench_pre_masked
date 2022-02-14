
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shash_desc {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct shash_desc*,void*) ;
 struct shash_desc* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_1, void *VAR_2)
{
 struct shash_desc *VAR_3 = FUNC_1(VAR_1);

 VAR_3->flags = VAR_1->flags & VAR_0;

 return FUNC_0(VAR_3, VAR_2);
}
