
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; } ;
struct address_space {int host; } ;
typedef int gfp_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct page*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*,struct page*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct page*,int) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_5, gfp_t VAR_6)
{
 struct address_space *VAR_7 = VAR_5->mapping;

 FUNC_2(VAR_2, "NFS: release_page(%p)\n", VAR_5);




 if (VAR_7 && (VAR_6 & VAR_1) == VAR_1 &&
     !(VAR_4->flags & VAR_3)) {
  int VAR_8 = VAR_0;


  if (FUNC_1())
   VAR_8 = 0;
  FUNC_3(VAR_7->host, VAR_8);
 }

 if (FUNC_0(VAR_5))
  return 0;
 return FUNC_4(VAR_5, VAR_6);
}
