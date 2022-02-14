
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SL_component {int flags; int len; int text; } ;
struct TYPE_3__ {int flags; struct SL_component link; } ;
struct TYPE_4__ {TYPE_1__ SL; } ;
struct rock_ridge {int len; TYPE_2__ u; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, struct rock_ridge *VAR_1, char *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct SL_component *VAR_5;
 struct SL_component *VAR_6;
 VAR_3 = VAR_1->len - 5;
 VAR_6 = &VAR_1->u.SL.link;
 while (VAR_3 > 1) {
  VAR_4 = 0;
  switch (VAR_6->flags & ~1) {
  case 0:
   if (VAR_6->len > VAR_2 - VAR_0)
    return ((void*)0);
   FUNC_0(VAR_0, VAR_6->text, VAR_6->len);
   VAR_0 += VAR_6->len;
   break;
  case 2:
   if (VAR_0 >= VAR_2)
    return ((void*)0);
   *VAR_0++ = '.';
   break;
  case 4:
   if (2 > VAR_2 - VAR_0)
    return ((void*)0);
   *VAR_0++ = '.';
   *VAR_0++ = '.';
   break;
  case 8:
   if (VAR_0 >= VAR_2)
    return ((void*)0);
   VAR_4 = 1;
   *VAR_0++ = '/';
   break;
  default:
   FUNC_1("Symlink component flag not implemented (%d)\n",
          VAR_6->flags);
  }
  VAR_3 -= VAR_6->len + 2;
  VAR_5 = VAR_6;
  VAR_6 = (struct SL_component *)((char *)VAR_6 + VAR_6->len + 2);

  if (VAR_3 < 2) {




   if ((!VAR_4) && (VAR_1->u.SL.flags & 1) &&
       !(VAR_5->flags & 1)) {
    if (VAR_0 >= VAR_2)
     return ((void*)0);
    *VAR_0++ = '/';
   }
   break;
  }




  if (!VAR_4 && !(VAR_5->flags & 1)) {
   if (VAR_0 >= VAR_2)
    return ((void*)0);
   *VAR_0++ = '/';
  }
 }
 return VAR_0;
}
