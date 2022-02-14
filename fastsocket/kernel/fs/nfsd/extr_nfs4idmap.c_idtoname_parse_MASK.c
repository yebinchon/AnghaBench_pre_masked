
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expiry_time; int flags; } ;
struct ent {TYPE_1__ h; int name; int id; int type; int authname; } ;
struct cache_detail {int dummy; } ;
typedef int ent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (char**) ;
 int VAR_8 ;
 struct ent* FUNC_2 (struct ent*) ;
 struct ent* FUNC_3 (struct ent*,struct ent*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (struct ent*,int ,int) ;
 int FUNC_8 (char**,char*,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*,char**,int) ;
 scalar_t__ FUNC_11 (char*,char*) ;

__attribute__((used)) static int
FUNC_12(struct cache_detail *VAR_9, char *VAR_10, int VAR_11)
{
 struct ent VAR_12, *VAR_13;
 char *VAR_14, *VAR_15;
 int VAR_16;
 int VAR_17 = -VAR_1;

 if (VAR_10[VAR_11 - 1] != '\n')
  return (-VAR_1);
 VAR_10[VAR_11 - 1]= '\0';

 VAR_14 = FUNC_5(VAR_7, VAR_3);
 if (VAR_14 == ((void*)0))
  return (-VAR_2);

 FUNC_7(&VAR_12, 0, sizeof(VAR_12));


 if (FUNC_8(&VAR_10, VAR_14, VAR_7) <= 0)
  goto out;
 FUNC_6(VAR_12.authname, VAR_14, sizeof(VAR_12.authname));


 if (FUNC_8(&VAR_10, VAR_14, VAR_7) <= 0)
  goto out;
 VAR_12.type = FUNC_11(VAR_14, "user") == 0 ?
  VAR_6 : VAR_5;


 if (FUNC_8(&VAR_10, VAR_14, VAR_7) <= 0)
  goto out;
 VAR_12.id = FUNC_10(VAR_14, &VAR_15, 10);
 if (VAR_15 == VAR_14)
  goto out;


 VAR_12.h.expiry_time = FUNC_1(&VAR_10);
 if (VAR_12.h.expiry_time == 0)
  goto out;

 VAR_17 = -VAR_2;
 VAR_13 = FUNC_2(&VAR_12);
 if (!VAR_13)
  goto out;


 VAR_17 = -VAR_1;
 VAR_16 = FUNC_8(&VAR_10, VAR_14, VAR_7);
 if (VAR_16 < 0)
  goto out;
 if (VAR_16 == 0)
  FUNC_9(VAR_0, &VAR_12.h.flags);
 else if (VAR_16 >= VAR_4)
  goto out;
 else
  FUNC_6(VAR_12.name, VAR_14, sizeof(VAR_12.name));
 VAR_17 = -VAR_2;
 VAR_13 = FUNC_3(&VAR_12, VAR_13);
 if (VAR_13 == ((void*)0))
  goto out;

 FUNC_0(&VAR_13->h, &VAR_8);

 VAR_17 = 0;
out:
 FUNC_4(VAR_14);

 return VAR_17;
}
