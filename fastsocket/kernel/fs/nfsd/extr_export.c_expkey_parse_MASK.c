
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expiry_time; scalar_t__ flags; } ;
struct svc_expkey {int ek_fsidtype; TYPE_1__ h; int ek_path; int ek_fsid; struct auth_domain* ek_client; } ;
struct cache_detail {int dummy; } ;
struct auth_domain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct auth_domain* FUNC_0 (char*) ;
 int FUNC_1 (struct auth_domain*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char**) ;
 int FUNC_6 (char*,int ,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char**,char*,int ) ;
 int FUNC_13 (int ,scalar_t__*) ;
 int FUNC_14 (char*,char**,int) ;
 int VAR_6 ;
 struct svc_expkey* FUNC_15 (struct svc_expkey*) ;
 struct svc_expkey* FUNC_16 (struct svc_expkey*,struct svc_expkey*) ;

__attribute__((used)) static int FUNC_17(struct cache_detail *VAR_7, char *VAR_8, int VAR_9)
{

 char *VAR_10;
 int VAR_11;
 struct auth_domain *VAR_12 = ((void*)0);
 int VAR_13;
 int VAR_14;
 char *VAR_15;
 struct svc_expkey VAR_16;
 struct svc_expkey *VAR_17 = ((void*)0);

 if (VAR_8[VAR_9-1] != '\n')
  return -VAR_1;
 VAR_8[VAR_9-1] = 0;
 FUNC_4("expkey_parse: '%s'\n", VAR_8);

 VAR_10 = FUNC_9(VAR_5, VAR_4);
 VAR_13 = -VAR_3;
 if (!VAR_10)
  goto out;

 VAR_13 = -VAR_1;
 if ((VAR_11=FUNC_12(&VAR_8, VAR_10, VAR_5)) <= 0)
  goto out;

 VAR_13 = -VAR_2;
 VAR_12 = FUNC_0(VAR_10);
 if (!VAR_12)
  goto out;
 FUNC_4("found domain %s\n", VAR_10);

 VAR_13 = -VAR_1;
 if ((VAR_11=FUNC_12(&VAR_8, VAR_10, VAR_5)) <= 0)
  goto out;
 VAR_14 = FUNC_14(VAR_10, &VAR_15, 10);
 if (*VAR_15)
  goto out;
 FUNC_4("found fsidtype %d\n", VAR_14);
 if (FUNC_7(VAR_14)==0)
  goto out;
 if ((VAR_11=FUNC_12(&VAR_8, VAR_10, VAR_5)) <= 0)
  goto out;
 FUNC_4("found fsid length %d\n", VAR_11);
 if (VAR_11 != FUNC_7(VAR_14))
  goto out;


 VAR_16.h.flags = 0;
 VAR_16.h.expiry_time = FUNC_5(&VAR_8);
 if (VAR_16.h.expiry_time == 0)
  goto out;

 VAR_16.ek_client = VAR_12;
 VAR_16.ek_fsidtype = VAR_14;
 FUNC_10(VAR_16.ek_fsid, VAR_10, VAR_11);

 VAR_17 = FUNC_15(&VAR_16);
 VAR_13 = -VAR_3;
 if (!VAR_17)
  goto out;


 VAR_13 = -VAR_1;
 VAR_11 = FUNC_12(&VAR_8, VAR_10, VAR_5);
 if (VAR_11 < 0)
  goto out;
 FUNC_4("Path seems to be <%s>\n", VAR_10);
 VAR_13 = 0;
 if (VAR_11 == 0) {
  FUNC_13(VAR_0, &VAR_16.h.flags);
  VAR_17 = FUNC_16(&VAR_16, VAR_17);
  if (!VAR_17)
   VAR_13 = -VAR_3;
 } else {
  VAR_13 = FUNC_6(VAR_10, 0, &VAR_16.ek_path);
  if (VAR_13)
   goto out;

  FUNC_4("Found the path %s\n", VAR_10);

  VAR_17 = FUNC_16(&VAR_16, VAR_17);
  if (!VAR_17)
   VAR_13 = -VAR_3;
  FUNC_11(&VAR_16.ek_path);
 }
 FUNC_2();
 out:
 if (VAR_17)
  FUNC_3(&VAR_17->h, &VAR_6);
 if (VAR_12)
  FUNC_1(VAR_12);
 FUNC_8(VAR_10);
 if (VAR_13)
  FUNC_4("expkey_parse: err %d\n", VAR_13);
 return VAR_13;
}
