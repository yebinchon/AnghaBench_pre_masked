
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_mapping; } ;
struct v9fs_cookie {TYPE_1__ inode; } ;
struct pagevec {int nr; TYPE_2__** pages; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_4__ {scalar_t__ index; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct pagevec*) ;
 int FUNC_3 (struct pagevec*,int ) ;
 int FUNC_4 (struct pagevec*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct pagevec*) ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
 struct v9fs_cookie *VAR_2 = VAR_1;
 struct pagevec VAR_3;
 pgoff_t VAR_4;
 int VAR_5, VAR_6;

 FUNC_3(&VAR_3, 0);
 VAR_4 = 0;

 for (;;) {
  VAR_6 = FUNC_4(&VAR_3, VAR_2->inode.i_mapping,
       VAR_4,
       VAR_0 - FUNC_2(&VAR_3));
  if (!VAR_6)
   break;

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   FUNC_0(VAR_3.pages[VAR_5]);

  VAR_4 = VAR_3.pages[VAR_6 - 1]->index + 1;

  VAR_3.nr = VAR_6;
  FUNC_5(&VAR_3);
  FUNC_1();
 }
}
