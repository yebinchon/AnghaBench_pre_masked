
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int blocks_per_page_bits; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_2(struct dm_bufio_client *VAR_1)
{
 unsigned VAR_2 = VAR_1->blocks_per_page_bits - 1;

 FUNC_1(VAR_2 >= FUNC_0(VAR_0));

 return VAR_2;
}
