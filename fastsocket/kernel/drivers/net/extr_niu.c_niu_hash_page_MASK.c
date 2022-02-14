
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rx_ring_info {struct page** rxhash; } ;
struct page {struct address_space* mapping; int index; } ;
struct address_space {int dummy; } ;


 unsigned int FUNC_0 (struct rx_ring_info*,int ) ;

__attribute__((used)) static void FUNC_1(struct rx_ring_info *VAR_0, struct page *VAR_1, u64 VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_0, VAR_2);

 VAR_1->index = VAR_2;
 VAR_1->mapping = (struct address_space *) VAR_0->rxhash[VAR_3];
 VAR_0->rxhash[VAR_3] = VAR_1;
}
