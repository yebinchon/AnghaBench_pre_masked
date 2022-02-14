
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct el_subpacket_annotation {scalar_t__ class; scalar_t__ type; scalar_t__ revision; char** annotation; int description; struct el_subpacket_annotation* next; } ;
struct el_subpacket {scalar_t__ class; scalar_t__ type; scalar_t__ revision; int length; } ;


 int VAR_0 ;
 int FUNC_0 (struct el_subpacket*,int ,char**) ;
 int FUNC_1 (char*,int ,int ) ;
 struct el_subpacket_annotation* VAR_1 ;

void
FUNC_2(struct el_subpacket *VAR_2)
{
 struct el_subpacket_annotation *VAR_3;
 char **VAR_4 = ((void*)0);

 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
  if (VAR_3->class == VAR_2->class &&
      VAR_3->type == VAR_2->type &&
      VAR_3->revision == VAR_2->revision) {



   VAR_4 = VAR_3->annotation;
   FUNC_1("%s  %s\n", VAR_0, VAR_3->description);
   break;
  }
 }

 FUNC_0(VAR_2, VAR_2->length, VAR_4);
}
