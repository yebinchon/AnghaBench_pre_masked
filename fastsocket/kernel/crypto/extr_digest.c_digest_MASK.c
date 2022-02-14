
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;
struct hash_desc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hash_desc*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct hash_desc*) ;
 int FUNC_4 (struct hash_desc*,struct scatterlist*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct hash_desc *VAR_1,
    struct scatterlist *VAR_2, unsigned int VAR_3, u8 *VAR_4)
{
 if (FUNC_0(FUNC_2()))
  return -VAR_0;

 FUNC_3(VAR_1);
 FUNC_4(VAR_1, VAR_2, VAR_3);
 return FUNC_1(VAR_1, VAR_4);
}
