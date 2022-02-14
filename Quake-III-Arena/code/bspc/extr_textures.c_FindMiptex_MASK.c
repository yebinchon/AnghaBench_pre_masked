
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* animname; int contents; int flags; int value; } ;
typedef TYPE_1__ miptex_t ;
struct TYPE_5__ {char* name; char* animname; void* contents; void* flags; void* value; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,void**) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 TYPE_2__* VAR_3 ;

int FUNC_7 (char *VAR_4)
{
 int VAR_5;
 char VAR_6[1024];
 miptex_t *VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
 {
  if (!FUNC_5 (VAR_4, VAR_3[VAR_5].name))
  {
   return VAR_5;
  }
 }
 if (VAR_2 == VAR_0)
  FUNC_0 ("MAX_MAP_TEXTURES");
 FUNC_6 (VAR_3[VAR_5].name, VAR_4);


 FUNC_4 (VAR_6, "%stextures/%s.wal", VAR_1, VAR_4);
 if (FUNC_3 (VAR_6, (void **)&VAR_7) != -1)
 {
  VAR_3[VAR_5].value = FUNC_2 (VAR_7->value);
  VAR_3[VAR_5].flags = FUNC_2 (VAR_7->flags);
  VAR_3[VAR_5].contents = FUNC_2 (VAR_7->contents);
  FUNC_6 (VAR_3[VAR_5].animname, VAR_7->animname);
  FUNC_1(VAR_7);
 }
 VAR_2++;

 if (VAR_3[VAR_5].animname[0])
  FUNC_7 (VAR_3[VAR_5].animname);

 return VAR_5;
}
