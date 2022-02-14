
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct file {int dummy; } ;
struct address_space {TYPE_1__* host; } ;
typedef unsigned int loff_t ;
typedef int get_block_t ;
struct TYPE_2__ {unsigned int i_size; } ;


 int FUNC_0 (struct file*,struct address_space*,unsigned int,unsigned int,unsigned int,struct page**,void**,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;

int FUNC_3(struct file *VAR_0, struct address_space *VAR_1,
   loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
   struct page **VAR_5, void **VAR_6,
   get_block_t *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7);






 if (FUNC_1(VAR_8)) {
  loff_t VAR_9 = VAR_1->host->i_size;
  if (VAR_2 + VAR_3 > VAR_9)
   FUNC_2(VAR_1->host, VAR_9);
 }

 return VAR_8;
}
