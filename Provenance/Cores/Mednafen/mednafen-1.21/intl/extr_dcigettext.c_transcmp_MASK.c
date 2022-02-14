
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ptr; int appended; } ;
struct known_translation_t {int category; int encoding; int localename; int domainname; TYPE_1__ msgid; int * domain; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const struct known_translation_t *VAR_2;
  const struct known_translation_t *VAR_3;
  int VAR_4;

  VAR_2 = (const struct known_translation_t *) VAR_0;
  VAR_3 = (const struct known_translation_t *) VAR_1;

  VAR_4 = FUNC_0 (VAR_2->domain != ((void*)0) ? VAR_2->msgid.appended : VAR_2->msgid.ptr,
     VAR_3->domain != ((void*)0) ? VAR_3->msgid.appended : VAR_3->msgid.ptr);
  if (VAR_4 == 0)
    {
      VAR_4 = FUNC_0 (VAR_2->domainname, VAR_3->domainname);
      if (VAR_4 == 0)
 {




     {







  VAR_4 = VAR_2->category - VAR_3->category;
     }
 }
    }

  return VAR_4;
}
