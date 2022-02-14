
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct page*,unsigned long) ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (int ,struct page*) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_1, unsigned long VAR_2)
{
 FUNC_0(VAR_0, "NFS: invalidate_page(%p, %lu)\n", VAR_1, VAR_2);

 if (VAR_2 != 0)
  return;

 FUNC_2(VAR_1->mapping->host, VAR_1);

 FUNC_1(VAR_1, VAR_1->mapping->host);
}
