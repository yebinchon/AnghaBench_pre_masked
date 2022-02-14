
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct ent {int type; char* name; int h; int id; int authname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct svc_rqst*,int ,struct ent*,int *,struct ent**) ;
 int FUNC_2 (char*,char const*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct svc_rqst*) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct svc_rqst *VAR_4, int VAR_5, const char *VAR_6, u32 VAR_7,
  uid_t *VAR_8)
{
 struct ent *VAR_9, VAR_10 = {
  .type = VAR_5,
 };
 int VAR_11;

 if (VAR_7 + 1 > sizeof(VAR_10.name))
  return -VAR_1;
 FUNC_2(VAR_10.name, VAR_6, VAR_7);
 VAR_10.name[VAR_7] = '\0';
 FUNC_4(VAR_10.authname, FUNC_3(VAR_4), sizeof(VAR_10.authname));
 VAR_11 = FUNC_1(VAR_4, VAR_3, &VAR_10, &VAR_2, &VAR_9);
 if (VAR_11 == -VAR_0)
  VAR_11 = -VAR_1;
 if (VAR_11)
  return VAR_11;
 *VAR_8 = VAR_9->id;
 FUNC_0(&VAR_9->h, &VAR_2);
 return 0;
}
