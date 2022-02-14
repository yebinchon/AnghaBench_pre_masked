
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct kpersona_info {int persona_info_version; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct kpersona_info*) ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct kpersona_info*,int *) ;

__attribute__((used)) static int FUNC_4(struct kpersona_info *VAR_2)
{
 int VAR_3;
 uid_t VAR_4 = 0;

 FUNC_2("Creating persona...");
 VAR_2->persona_info_version = VAR_0;
 VAR_3 = FUNC_3(VAR_2, &VAR_4);
 if (VAR_3 == 0) {
  FUNC_2("Created persona %d:", VAR_4);
  FUNC_0(((void*)0), VAR_2);
 } else {
  FUNC_1("kpersona_alloc return %d (errno:%d)", VAR_3, VAR_1);
 }

 return VAR_3;
}
