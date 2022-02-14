
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct svc_rqst {int dummy; } ;
struct ent {int id; int type; int h; int name; int authname; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct svc_rqst*,int ,struct ent*,int *,struct ent**) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (struct svc_rqst*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct svc_rqst *VAR_4, int VAR_5, uid_t VAR_6, char *VAR_7)
{
 struct ent *VAR_8, VAR_9 = {
  .id = VAR_6,
  .type = VAR_5,
 };
 int VAR_10;

 FUNC_6(VAR_9.authname, FUNC_4(VAR_4), sizeof(VAR_9.authname));
 VAR_10 = FUNC_2(VAR_4, VAR_3, &VAR_9, &VAR_2, &VAR_8);
 if (VAR_10 == -VAR_0)
  return FUNC_5(VAR_7, "%u", VAR_6);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_7(VAR_8->name);
 FUNC_0(VAR_10 > VAR_1);
 FUNC_3(VAR_7, VAR_8->name, VAR_10);
 FUNC_1(&VAR_8->h, &VAR_2);
 return VAR_10;
}
