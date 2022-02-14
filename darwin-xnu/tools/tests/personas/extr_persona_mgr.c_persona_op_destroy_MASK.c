
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpersona_info {int persona_id; int persona_info_version; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct kpersona_info *VAR_1)
{
 int VAR_2;

 FUNC_1("Destroying Persona %d...", VAR_1->persona_id);
 VAR_1->persona_info_version = VAR_0;
 VAR_2 = FUNC_2(VAR_1->persona_id);
 if (VAR_2 < 0)
  FUNC_0("destroy failed!");

 return VAR_2;
}
