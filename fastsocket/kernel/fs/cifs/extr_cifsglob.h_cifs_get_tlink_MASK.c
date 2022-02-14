
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcon_link {int tl_count; } ;


 int FUNC_0 (struct tcon_link*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline struct tcon_link *
FUNC_2(struct tcon_link *VAR_0)
{
 if (VAR_0 && !FUNC_0(VAR_0))
  FUNC_1(&VAR_0->tl_count);
 return VAR_0;
}
